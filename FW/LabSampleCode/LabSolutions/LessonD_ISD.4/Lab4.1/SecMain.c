/** @file
  Main SEC phase code.  Transitions to PEI.

  Copyright (c) 2008 - 2019, Intel Corporation. All rights reserved.<BR>
  (C) Copyright 2016 Hewlett Packard Enterprise Development LP<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <PiPei.h>

#include <Library/PeimEntryPoint.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/PeiServicesLib.h>
#include <Library/PcdLib.h>
#include <Library/UefiCpuLib.h>
#include <Library/DebugAgentLib.h>
#include <Library/IoLib.h>
#include <Library/PeCoffLib.h>
#include <Library/PeCoffGetEntryPointLib.h>
#include <Library/PeCoffExtraActionLib.h>
#include <Library/ExtractGuidedSectionLib.h>
#include <Library/LocalApicLib.h>
#include <Library/PciCf8Lib.h>

#include <Ppi/TemporaryRamSupport.h>
#include <Register/X58Ich10.h>

#define SEC_IDT_ENTRY_COUNT  34

typedef struct _SEC_IDT_TABLE {
  EFI_PEI_SERVICES          *PeiService;
  IA32_IDT_GATE_DESCRIPTOR  IdtTable[SEC_IDT_ENTRY_COUNT];
} SEC_IDT_TABLE;

VOID
EFIAPI
SecStartupPhase2 (
  IN VOID                     *Context
  );

EFI_STATUS
EFIAPI
TemporaryRamMigration (
  IN CONST EFI_PEI_SERVICES   **PeiServices,
  IN EFI_PHYSICAL_ADDRESS     TemporaryMemoryBase,
  IN EFI_PHYSICAL_ADDRESS     PermanentMemoryBase,
  IN UINTN                    CopySize
  );

EFI_PEI_TEMPORARY_RAM_SUPPORT_PPI mTemporaryRamSupportPpi = {
  TemporaryRamMigration
};

EFI_PEI_PPI_DESCRIPTOR mPrivateDispatchTable[] = {
  {
    (EFI_PEI_PPI_DESCRIPTOR_PPI | EFI_PEI_PPI_DESCRIPTOR_TERMINATE_LIST),
    &gEfiTemporaryRamSupportPpiGuid,
    &mTemporaryRamSupportPpi
  },
};

//
// Template of an IDT entry pointing to 10:FFFFFFE4h.
//
IA32_IDT_GATE_DESCRIPTOR  mIdtEntryTemplate = {
  {                                      // Bits
    0xffe4,                              // OffsetLow
    0x10,                                // Selector
    0x0,                                 // Reserved_0
    IA32_IDT_GATE_TYPE_INTERRUPT_32,     // GateType
    0xffff                               // OffsetHigh
  }
};

/**
  Locates the main boot firmware volume.

  @param[in,out]  BootFv  On input, the base of the BootFv
                          On output, the decompressed main firmware volume

  @retval EFI_SUCCESS    The main firmware volume was located and decompressed
  @retval EFI_NOT_FOUND  The main firmware volume was not found

**/
EFI_STATUS
FindMainFv (
  IN OUT  EFI_FIRMWARE_VOLUME_HEADER   **BootFv
  )
{
  EFI_FIRMWARE_VOLUME_HEADER  *Fv;
  UINTN                       Distance;

  ASSERT (((UINTN) *BootFv & EFI_PAGE_MASK) == 0);

  Fv = *BootFv;
  Distance = (UINTN) (*BootFv)->FvLength;
  do {
    Fv = (EFI_FIRMWARE_VOLUME_HEADER*) ((UINT8*) Fv - EFI_PAGE_SIZE);
    Distance += EFI_PAGE_SIZE;
    if (Distance > SIZE_32MB) {
      return EFI_NOT_FOUND;
    }

    if (Fv->Signature != EFI_FVH_SIGNATURE) {
      continue;
    }

    if ((UINTN) Fv->FvLength > Distance) {
      continue;
    }

    *BootFv = Fv;
    return EFI_SUCCESS;

  } while (TRUE);
}

/**
  Locates a section within a series of sections
  with the specified section type.

  The Instance parameter indicates which instance of the section
  type to return. (0 is first instance, 1 is second...)

  @param[in]   Sections        The sections to search
  @param[in]   SizeOfSections  Total size of all sections
  @param[in]   SectionType     The section type to locate
  @param[in]   Instance        The section instance number
  @param[out]  FoundSection    The FFS section if found

  @retval EFI_SUCCESS           The file and section was found
  @retval EFI_NOT_FOUND         The file and section was not found
  @retval EFI_VOLUME_CORRUPTED  The firmware volume was corrupted

**/
EFI_STATUS
FindFfsSectionInstance (
  IN  VOID                             *Sections,
  IN  UINTN                            SizeOfSections,
  IN  EFI_SECTION_TYPE                 SectionType,
  IN  UINTN                            Instance,
  OUT EFI_COMMON_SECTION_HEADER        **FoundSection
  )
{
  EFI_PHYSICAL_ADDRESS        CurrentAddress;
  UINT32                      Size;
  EFI_PHYSICAL_ADDRESS        EndOfSections;
  EFI_COMMON_SECTION_HEADER   *Section;
  EFI_PHYSICAL_ADDRESS        EndOfSection;

  //
  // Loop through the FFS file sections within the PEI Core FFS file
  //
  EndOfSection = (EFI_PHYSICAL_ADDRESS)(UINTN) Sections;
  EndOfSections = EndOfSection + SizeOfSections;
  for (;;) {
    if (EndOfSection == EndOfSections) {
      break;
    }
    CurrentAddress = (EndOfSection + 3) & ~(3ULL);
    if (CurrentAddress >= EndOfSections) {
      return EFI_VOLUME_CORRUPTED;
    }

    Section = (EFI_COMMON_SECTION_HEADER*)(UINTN) CurrentAddress;
    DEBUG ((EFI_D_VERBOSE, "Section->Type: 0x%x\n", Section->Type));

    Size = SECTION_SIZE (Section);
    if (Size < sizeof (*Section)) {
      return EFI_VOLUME_CORRUPTED;
    }

    EndOfSection = CurrentAddress + Size;
    if (EndOfSection > EndOfSections) {
      return EFI_VOLUME_CORRUPTED;
    }

    //
    // Look for the requested section type
    //
    if (Section->Type == SectionType) {
      if (Instance == 0) {
        *FoundSection = Section;
        return EFI_SUCCESS;
      } else {
        Instance--;
      }
    }
    DEBUG ((EFI_D_VERBOSE, "Section->Type (0x%x) != SectionType (0x%x)\n", Section->Type, SectionType));
  }

  return EFI_NOT_FOUND;
}

/**
  Locates a section within a series of sections
  with the specified section type.

  @param[in]   Sections        The sections to search
  @param[in]   SizeOfSections  Total size of all sections
  @param[in]   SectionType     The section type to locate
  @param[out]  FoundSection    The FFS section if found

  @retval EFI_SUCCESS           The file and section was found
  @retval EFI_NOT_FOUND         The file and section was not found
  @retval EFI_VOLUME_CORRUPTED  The firmware volume was corrupted

**/
EFI_STATUS
FindFfsSectionInSections (
  IN  VOID                             *Sections,
  IN  UINTN                            SizeOfSections,
  IN  EFI_SECTION_TYPE                 SectionType,
  OUT EFI_COMMON_SECTION_HEADER        **FoundSection
  )
{
  return FindFfsSectionInstance (
           Sections,
           SizeOfSections,
           SectionType,
           0,
           FoundSection
           );
}

/**
  Locates a FFS file with the specified file type and a section
  within that file with the specified section type.

  @param[in]   Fv            The firmware volume to search
  @param[in]   FileType      The file type to locate
  @param[in]   SectionType   The section type to locate
  @param[out]  FoundSection  The FFS section if found

  @retval EFI_SUCCESS           The file and section was found
  @retval EFI_NOT_FOUND         The file and section was not found
  @retval EFI_VOLUME_CORRUPTED  The firmware volume was corrupted

**/
EFI_STATUS
FindFfsFileAndSection (
  IN  EFI_FIRMWARE_VOLUME_HEADER       *Fv,
  IN  EFI_FV_FILETYPE                  FileType,
  IN  EFI_SECTION_TYPE                 SectionType,
  OUT EFI_COMMON_SECTION_HEADER        **FoundSection
  )
{
  EFI_STATUS                  Status;
  EFI_PHYSICAL_ADDRESS        CurrentAddress;
  EFI_PHYSICAL_ADDRESS        EndOfFirmwareVolume;
  EFI_FFS_FILE_HEADER         *File;
  UINT32                      Size;
  EFI_PHYSICAL_ADDRESS        EndOfFile;

  if (Fv->Signature != EFI_FVH_SIGNATURE) {
    DEBUG ((EFI_D_ERROR, "FV at %p does not have FV header signature\n", Fv));
    return EFI_VOLUME_CORRUPTED;
  }

  CurrentAddress = (EFI_PHYSICAL_ADDRESS)(UINTN) Fv;
  EndOfFirmwareVolume = CurrentAddress + Fv->FvLength;

  //
  // Loop through the FFS files in the Boot Firmware Volume
  //
  for (EndOfFile = CurrentAddress + Fv->HeaderLength; ; ) {

    CurrentAddress = (EndOfFile + 7) & ~(7ULL);
    if (CurrentAddress > EndOfFirmwareVolume) {
      return EFI_VOLUME_CORRUPTED;
    }

    File = (EFI_FFS_FILE_HEADER*)(UINTN) CurrentAddress;
    Size = *(UINT32*) File->Size & 0xffffff;
    if (Size < (sizeof (*File) + sizeof (EFI_COMMON_SECTION_HEADER))) {
      return EFI_VOLUME_CORRUPTED;
    }
    DEBUG ((EFI_D_VERBOSE, "File->Type: 0x%x\n", File->Type));

    EndOfFile = CurrentAddress + Size;
    if (EndOfFile > EndOfFirmwareVolume) {
      return EFI_VOLUME_CORRUPTED;
    }

    //
    // Look for the request file type
    //
    if (File->Type != FileType) {
      DEBUG ((EFI_D_VERBOSE, "File->Type (0x%x) != FileType (0x%x)\n", File->Type, FileType));
      continue;
    }

    Status = FindFfsSectionInSections (
               (VOID*) (File + 1),
               (UINTN) EndOfFile - (UINTN) (File + 1),
               SectionType,
               FoundSection
               );
    if (!EFI_ERROR (Status) || (Status == EFI_VOLUME_CORRUPTED)) {
      return Status;
    }
  }
}

/**
  Locates the compressed main firmware volume and decompresses it.

  @param[in,out]  Fv            On input, the firmware volume to search
                                On output, the decompressed BOOT/PEI FV

  @retval EFI_SUCCESS           The file and section was found
  @retval EFI_NOT_FOUND         The file and section was not found
  @retval EFI_VOLUME_CORRUPTED  The firmware volume was corrupted

**/
EFI_STATUS
DecompressMemFvs (
  IN OUT EFI_FIRMWARE_VOLUME_HEADER       **Fv
  )
{
  EFI_STATUS                        Status;
  EFI_GUID_DEFINED_SECTION          *Section;
  UINT32                            OutputBufferSize;
  UINT32                            ScratchBufferSize;
  UINT16                            SectionAttribute;
  UINT32                            AuthenticationStatus;
  VOID                              *OutputBuffer;
  VOID                              *ScratchBuffer;
  EFI_COMMON_SECTION_HEADER         *FvSection;
  EFI_FIRMWARE_VOLUME_HEADER        *PeiMemFv;
  EFI_FIRMWARE_VOLUME_HEADER        *DxeMemFv;
  UINT32                            FvHeaderSize;
  UINT32                            FvSectionSize;

  FvSection = (EFI_COMMON_SECTION_HEADER*) NULL;

  DEBUG ((EFI_D_VERBOSE, "Find and decompress FV image.\n"));
  Status = FindFfsFileAndSection (
             *Fv,
             EFI_FV_FILETYPE_FIRMWARE_VOLUME_IMAGE,
             EFI_SECTION_GUID_DEFINED,
             (EFI_COMMON_SECTION_HEADER**) &Section
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((EFI_D_ERROR, "Unable to find GUID defined section\n"));
    return Status;
  }

  Status = ExtractGuidedSectionGetInfo (
             Section,
             &OutputBufferSize,
             &ScratchBufferSize,
             &SectionAttribute
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((EFI_D_ERROR, "Unable to GetInfo for GUIDed section\n"));
    return Status;
  }

  OutputBuffer = (VOID*) ((UINT8*)(UINTN) PcdGet32 (PcdSimicsDxeMemFvBase) + SIZE_1MB);
  ScratchBuffer = ALIGN_POINTER ((UINT8*) OutputBuffer + OutputBufferSize, SIZE_1MB);

  DEBUG ((EFI_D_VERBOSE, "PcdSimicsDxeMemFvBase: 0x%x\n", PcdGet32 (PcdSimicsDxeMemFvBase)));
  DEBUG ((EFI_D_VERBOSE, "OutputBuffer: 0x%x\n", OutputBuffer));
  DEBUG ((EFI_D_VERBOSE, "OutputBufferSize: 0x%x\n", OutputBufferSize));
  DEBUG ((EFI_D_VERBOSE, "ScratchBuffer: 0x%x\n", ScratchBuffer));
  DEBUG ((EFI_D_VERBOSE, "ScratchBufferSize: 0x%x\n", ScratchBufferSize));
  DEBUG ((EFI_D_VERBOSE, "PcdSimicsDecompressionScratchEnd: 0x%x\n", PcdGet32 (PcdSimicsDecompressionScratchEnd)));

  DEBUG ((EFI_D_VERBOSE, "%a: OutputBuffer@%p+0x%x ScratchBuffer@%p+0x%x "
    "PcdSimicsDecompressionScratchEnd=0x%x\n", __FUNCTION__, OutputBuffer,
    OutputBufferSize, ScratchBuffer, ScratchBufferSize,
    PcdGet32 (PcdSimicsDecompressionScratchEnd)));
  ASSERT ((UINTN)ScratchBuffer + ScratchBufferSize ==
    PcdGet32 (PcdSimicsDecompressionScratchEnd));

  Status = ExtractGuidedSectionDecode (
             Section,
             &OutputBuffer,
             ScratchBuffer,
             &AuthenticationStatus
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((EFI_D_ERROR, "Error during GUID section decode\n"));
    return Status;
  }

  Status = FindFfsSectionInstance (
             OutputBuffer,
             OutputBufferSize,
             EFI_SECTION_FIRMWARE_VOLUME_IMAGE,
             0,
             &FvSection
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((EFI_D_ERROR, "Unable to find PEI FV section\n"));
    return Status;
  }

  ASSERT (SECTION_SIZE (FvSection) ==
          (PcdGet32 (PcdSimicsPeiMemFvSize) + sizeof (*FvSection)));
  ASSERT (FvSection->Type == EFI_SECTION_FIRMWARE_VOLUME_IMAGE);

  PeiMemFv = (EFI_FIRMWARE_VOLUME_HEADER*)(UINTN) PcdGet32 (PcdSimicsPeiMemFvBase);
  CopyMem (PeiMemFv, (VOID*) (FvSection + 1), PcdGet32 (PcdSimicsPeiMemFvSize));

  if (PeiMemFv->Signature != EFI_FVH_SIGNATURE) {
    DEBUG ((EFI_D_ERROR, "Extracted FV at %p does not have FV header signature\n", PeiMemFv));
    CpuDeadLoop ();
    return EFI_VOLUME_CORRUPTED;
  }

  Status = FindFfsSectionInstance (
             OutputBuffer,
             OutputBufferSize,
             EFI_SECTION_FIRMWARE_VOLUME_IMAGE,
             1,
             &FvSection
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((EFI_D_ERROR, "Unable to find DXE FV section\n"));
    return Status;
  }

  ASSERT (FvSection->Type == EFI_SECTION_FIRMWARE_VOLUME_IMAGE);

  if (IS_SECTION2 (FvSection)) {
    FvSectionSize = SECTION2_SIZE (FvSection);
    FvHeaderSize = sizeof (EFI_COMMON_SECTION_HEADER2);
  } else {
    FvSectionSize = SECTION_SIZE (FvSection);
    FvHeaderSize = sizeof (EFI_COMMON_SECTION_HEADER);
  }

  ASSERT (FvSectionSize == (PcdGet32 (PcdSimicsDxeMemFvSize) + FvHeaderSize));

  DxeMemFv = (EFI_FIRMWARE_VOLUME_HEADER*)(UINTN) PcdGet32 (PcdSimicsDxeMemFvBase);
  CopyMem (DxeMemFv, (VOID*) ((UINTN)FvSection + FvHeaderSize), PcdGet32 (PcdSimicsDxeMemFvSize));

  if (DxeMemFv->Signature != EFI_FVH_SIGNATURE) {
    DEBUG ((EFI_D_ERROR, "Extracted FV at %p does not have FV header signature\n", DxeMemFv));
    CpuDeadLoop ();
    return EFI_VOLUME_CORRUPTED;
  }

  *Fv = PeiMemFv;
  return EFI_SUCCESS;
}

/**
  Locates the PEI Core entry point address

  @param[in]  Fv                 The firmware volume to search
  @param[out] PeiCoreEntryPoint  The entry point of the PEI Core image

  @retval EFI_SUCCESS           The file and section was found
  @retval EFI_NOT_FOUND         The file and section was not found
  @retval EFI_VOLUME_CORRUPTED  The firmware volume was corrupted

**/
EFI_STATUS
FindPeiCoreImageBaseInFv (
  IN  EFI_FIRMWARE_VOLUME_HEADER       *Fv,
  OUT  EFI_PHYSICAL_ADDRESS             *PeiCoreImageBase
  )
{
  EFI_STATUS                  Status;
  EFI_COMMON_SECTION_HEADER   *Section;

  DEBUG ((EFI_D_VERBOSE, "Find PEI Core image.\n"));
  Status = FindFfsFileAndSection (
             Fv,
             EFI_FV_FILETYPE_PEI_CORE,
             EFI_SECTION_PE32,
             &Section
             );
  if (EFI_ERROR (Status)) {
    Status = FindFfsFileAndSection (
               Fv,
               EFI_FV_FILETYPE_PEI_CORE,
               EFI_SECTION_TE,
               &Section
               );
    if (EFI_ERROR (Status)) {
      DEBUG ((EFI_D_ERROR, "Unable to find PEI Core image\n"));
      return Status;
    }
  }

  *PeiCoreImageBase = (EFI_PHYSICAL_ADDRESS)(UINTN)(Section + 1);
  DEBUG ((EFI_D_VERBOSE, "PEI core image base 0x%016LX.\n", *PeiCoreImageBase));
  return EFI_SUCCESS;
}

STATIC
BOOLEAN
IsS3Resume (
  VOID
  )
{
  DEBUG((EFI_D_VERBOSE, "modeValue = %x\n", IoBitFieldRead16(ICH10_PMBASE_IO + 4, 10, 12)));
  return (IoBitFieldRead16(ICH10_PMBASE_IO + 4, 10, 12) == 0x5);
}


STATIC
EFI_STATUS
GetS3ResumePeiFv (
  IN OUT EFI_FIRMWARE_VOLUME_HEADER       **PeiFv
  )
{
  *PeiFv = (EFI_FIRMWARE_VOLUME_HEADER*)(UINTN) PcdGet32 (PcdSimicsPeiMemFvBase);
  return EFI_SUCCESS;
}


/**
  Locates the PEI Core entry point address

  @param[in,out]  Fv                 The firmware volume to search
  @param[out]     PeiCoreEntryPoint  The entry point of the PEI Core image

  @retval EFI_SUCCESS           The file and section was found
  @retval EFI_NOT_FOUND         The file and section was not found
  @retval EFI_VOLUME_CORRUPTED  The firmware volume was corrupted

**/
VOID
FindPeiCoreImageBase (
  IN OUT  EFI_FIRMWARE_VOLUME_HEADER       **BootFv,
     OUT  EFI_PHYSICAL_ADDRESS             *PeiCoreImageBase
  )
{
  BOOLEAN S3Resume;

  *PeiCoreImageBase = 0;

  S3Resume = IsS3Resume ();
  if (S3Resume && !FeaturePcdGet (PcdSmmSmramRequire)) {
    //
    // A malicious runtime OS may have injected something into our previously
    // decoded PEI FV, but we don't care about that unless SMM/SMRAM is required.
    //
    DEBUG ((EFI_D_VERBOSE, "SEC: S3 resume\n"));
    GetS3ResumePeiFv (BootFv);
  } else {
    //
    // We're either not resuming, or resuming "securely" -- we'll decompress
    // both PEI FV and DXE FV from pristine flash.
    //
    DEBUG ((EFI_D_VERBOSE, "SEC: %a\n",
      S3Resume ? "S3 resume (with PEI decompression)" : "Normal boot"));
    FindMainFv (BootFv);

    DecompressMemFvs (BootFv);
  }

  FindPeiCoreImageBaseInFv (*BootFv, PeiCoreImageBase);
}

/**
  Find core image base.

**/
EFI_STATUS
FindImageBase (
  IN  EFI_FIRMWARE_VOLUME_HEADER       *BootFirmwareVolumePtr,
  OUT EFI_PHYSICAL_ADDRESS             *SecCoreImageBase
  )
{
  EFI_PHYSICAL_ADDRESS        CurrentAddress;
  EFI_PHYSICAL_ADDRESS        EndOfFirmwareVolume;
  EFI_FFS_FILE_HEADER         *File;
  UINT32                      Size;
  EFI_PHYSICAL_ADDRESS        EndOfFile;
  EFI_COMMON_SECTION_HEADER   *Section;
  EFI_PHYSICAL_ADDRESS        EndOfSection;

  *SecCoreImageBase = 0;

  CurrentAddress = (EFI_PHYSICAL_ADDRESS)(UINTN) BootFirmwareVolumePtr;
  EndOfFirmwareVolume = CurrentAddress + BootFirmwareVolumePtr->FvLength;

  //
  // Loop through the FFS files in the Boot Firmware Volume
  //
  for (EndOfFile = CurrentAddress + BootFirmwareVolumePtr->HeaderLength; ; ) {

    CurrentAddress = (EndOfFile + 7) & 0xfffffffffffffff8ULL;
    if (CurrentAddress > EndOfFirmwareVolume) {
      return EFI_NOT_FOUND;
    }

    File = (EFI_FFS_FILE_HEADER*)(UINTN) CurrentAddress;
    Size = *(UINT32*) File->Size & 0xffffff;
    if (Size < sizeof (*File)) {
      return EFI_NOT_FOUND;
    }

    EndOfFile = CurrentAddress + Size;
    if (EndOfFile > EndOfFirmwareVolume) {
      return EFI_NOT_FOUND;
    }

    //
    // Look for SEC Core
    //
    if (File->Type != EFI_FV_FILETYPE_SECURITY_CORE) {
      continue;
    }

    //
    // Loop through the FFS file sections within the FFS file
    //
    EndOfSection = (EFI_PHYSICAL_ADDRESS)(UINTN) (File + 1);
    for (;;) {
      CurrentAddress = (EndOfSection + 3) & 0xfffffffffffffffcULL;
      Section = (EFI_COMMON_SECTION_HEADER*)(UINTN) CurrentAddress;

      Size = *(UINT32*) Section->Size & 0xffffff;
      if (Size < sizeof (*Section)) {
        return EFI_NOT_FOUND;
      }

      EndOfSection = CurrentAddress + Size;
      if (EndOfSection > EndOfFile) {
        return EFI_NOT_FOUND;
      }

      //
      // Look for executable sections
      //
      if (Section->Type == EFI_SECTION_PE32 || Section->Type == EFI_SECTION_TE) {
        if (File->Type == EFI_FV_FILETYPE_SECURITY_CORE) {
          *SecCoreImageBase = (PHYSICAL_ADDRESS) (UINTN) (Section + 1);
        }
        break;
      }
    }

    //
    // SEC Core image found
    //
    if (*SecCoreImageBase != 0) {
      return EFI_SUCCESS;
    }
  }
}

/*
  Find and return Pei Core entry point.

  It also find SEC and PEI Core file debug information. It will report them if
  remote debug is enabled.

**/
VOID
FindAndReportEntryPoints (
  IN  EFI_FIRMWARE_VOLUME_HEADER       **BootFirmwareVolumePtr,
  OUT EFI_PEI_CORE_ENTRY_POINT         *PeiCoreEntryPoint
  )
{
  EFI_STATUS                       Status;
  EFI_PHYSICAL_ADDRESS             SecCoreImageBase;
  EFI_PHYSICAL_ADDRESS             PeiCoreImageBase;
  PE_COFF_LOADER_IMAGE_CONTEXT     ImageContext;

  //
  // Find SEC Core and PEI Core image base
   //
  Status = FindImageBase (*BootFirmwareVolumePtr, &SecCoreImageBase);
  ASSERT_EFI_ERROR (Status);

  FindPeiCoreImageBase (BootFirmwareVolumePtr, &PeiCoreImageBase);

  ZeroMem ((VOID *) &ImageContext, sizeof (PE_COFF_LOADER_IMAGE_CONTEXT));
  //
  // Report SEC Core debug information when remote debug is enabled
  //
  ImageContext.ImageAddress = SecCoreImageBase;
  ImageContext.PdbPointer = PeCoffLoaderGetPdbPointer ((VOID*) (UINTN) ImageContext.ImageAddress);
  PeCoffLoaderRelocateImageExtraAction (&ImageContext);

  //
  // Report PEI Core debug information when remote debug is enabled
  //
  ImageContext.ImageAddress = (EFI_PHYSICAL_ADDRESS)(UINTN)PeiCoreImageBase;
  ImageContext.PdbPointer = PeCoffLoaderGetPdbPointer ((VOID*) (UINTN) ImageContext.ImageAddress);
  PeCoffLoaderRelocateImageExtraAction (&ImageContext);

  //
  // Find PEI Core entry point
  //
  Status = PeCoffLoaderGetEntryPoint ((VOID *) (UINTN) PeiCoreImageBase, (VOID**) PeiCoreEntryPoint);
  if (EFI_ERROR (Status)) {
    *PeiCoreEntryPoint = 0;
  }

  return;
}

VOID
EFIAPI
SecCoreStartupWithStack (
  IN EFI_FIRMWARE_VOLUME_HEADER       *BootFv,
  IN VOID                             *TopOfCurrentStack
  )
{
  EFI_SEC_PEI_HAND_OFF        SecCoreData;
  SEC_IDT_TABLE               IdtTableInStack;
  IA32_DESCRIPTOR             IdtDescriptor;
  UINT32                      Index;
  volatile UINT8              *Table;

  //
  // Initialize floating point operating environment
  // to be compliant with UEFI spec.
  //
  InitializeFloatingPointUnits ();

  //
  // Initialize the PCIe Configuration base register.
  //
  PciCf8Write32 (PCI_CF8_LIB_ADDRESS (0xFF, 0, 1, 0x50), 0xE0000001);

  //
  // To ensure SMM can't be compromised on S3 resume, we must force re-init of
  // the BaseExtractGuidedSectionLib. Since this is before library contructors
  // are called, we must use a loop rather than SetMem.
  //
  Table = (UINT8*)(UINTN)FixedPcdGet64 (PcdGuidedExtractHandlerTableAddress);
  for (Index = 0;
       Index < FixedPcdGet32 (PcdGuidedExtractHandlerTableSize);
       ++Index) {
    Table[Index] = 0;
  }

  ProcessLibraryConstructorList (NULL, NULL);

  DEBUG ((EFI_D_INFO,
    "SecCoreStartupWithStack(0x%x, 0x%x)\n",
    (UINT32)(UINTN)BootFv,
    (UINT32)(UINTN)TopOfCurrentStack
    ));

  //
  // Initialize IDT
  //
  IdtTableInStack.PeiService = NULL;
  for (Index = 0; Index < SEC_IDT_ENTRY_COUNT; Index ++) {
    CopyMem (&IdtTableInStack.IdtTable[Index], &mIdtEntryTemplate, sizeof (mIdtEntryTemplate));
  }

  IdtDescriptor.Base  = (UINTN)&IdtTableInStack.IdtTable;
  IdtDescriptor.Limit = (UINT16)(sizeof (IdtTableInStack.IdtTable) - 1);

  AsmWriteIdtr (&IdtDescriptor);

#if defined (MDE_CPU_X64)
  //
  // ASSERT that the Page Tables were set by the reset vector code to
  // the address we expect.
  //
  ASSERT (AsmReadCr3 () == (UINTN) PcdGet32 (PcdSimicsSecPageTablesBase));
#endif

  //
  // |-------------|       <-- TopOfCurrentStack
  // |   Stack     | 32k
  // |-------------|
  // |    Heap     | 32k
  // |-------------|       <-- SecCoreData.TemporaryRamBase
  //

  ASSERT ((UINTN) (PcdGet32 (PcdSimicsSecPeiTempRamBase) +
                   PcdGet32 (PcdSimicsSecPeiTempRamSize)) ==
          (UINTN) TopOfCurrentStack);

  //
  // Initialize SEC hand-off state
  //
  SecCoreData.DataSize = sizeof(EFI_SEC_PEI_HAND_OFF);

  SecCoreData.TemporaryRamSize       = (UINTN) PcdGet32 (PcdSimicsSecPeiTempRamSize);
  SecCoreData.TemporaryRamBase       = (VOID*)((UINT8 *)TopOfCurrentStack - SecCoreData.TemporaryRamSize);

  SecCoreData.PeiTemporaryRamBase    = SecCoreData.TemporaryRamBase;
  SecCoreData.PeiTemporaryRamSize    = SecCoreData.TemporaryRamSize >> 1;

  SecCoreData.StackBase              = (UINT8 *)SecCoreData.TemporaryRamBase + SecCoreData.PeiTemporaryRamSize;
  SecCoreData.StackSize              = SecCoreData.TemporaryRamSize >> 1;

  SecCoreData.BootFirmwareVolumeBase = BootFv;
  SecCoreData.BootFirmwareVolumeSize = (UINTN) BootFv->FvLength;

  //
  // Make sure the 8259 is masked before initializing the Debug Agent and the debug timer is enabled
  //
  IoWrite8 (0x21, 0xff);
  IoWrite8 (0xA1, 0xff);

  //
  // Initialize Local APIC Timer hardware and disable Local APIC Timer
  // interrupts before initializing the Debug Agent and the debug timer is
  // enabled.
  //
  InitializeApicTimer (0, MAX_UINT32, TRUE, 5);
  DisableApicTimerInterrupt ();

  //
  // Initialize Debug Agent to support source level debug in SEC/PEI phases before memory ready.
  //
  InitializeDebugAgent (DEBUG_AGENT_INIT_PREMEM_SEC, &SecCoreData, SecStartupPhase2);
}

/**
  Caller provided function to be invoked at the end of InitializeDebugAgent().

  Entry point to the C language phase of SEC. After the SEC assembly
  code has initialized some temporary memory and set up the stack,
  the control is transferred to this function.

  @param[in] Context    The first input parameter of InitializeDebugAgent().

**/
VOID
EFIAPI
SecStartupPhase2(
  IN VOID                     *Context
  )
{
  EFI_SEC_PEI_HAND_OFF        *SecCoreData;
  EFI_FIRMWARE_VOLUME_HEADER  *BootFv;
  EFI_PEI_CORE_ENTRY_POINT    PeiCoreEntryPoint;

  //  EDK II Training ISD Lab
  //  Add CpuDeadLoop() to the code
  DEBUG((EFI_D_INFO, "start of SecStartupPhase2 \n"));
  DEBUG((EFI_D_INFO, "\r\n>>>>>[SecStartupPhase2] Entry point: 0x%p <<<<<<\r\n", SecStartupPhase2));
  CpuDeadLoop();

  SecCoreData = (EFI_SEC_PEI_HAND_OFF *) Context;
  //
  // Find PEI Core entry point. It will report SEC and Pei Core debug information if remote debug
  // is enabled.
  //
  BootFv = (EFI_FIRMWARE_VOLUME_HEADER *)SecCoreData->BootFirmwareVolumeBase;
  FindAndReportEntryPoints (&BootFv, &PeiCoreEntryPoint);
  SecCoreData->BootFirmwareVolumeBase = BootFv;
  SecCoreData->BootFirmwareVolumeSize = (UINTN) BootFv->FvLength;

  //
  // Transfer the control to the PEI core
  //
  (*PeiCoreEntryPoint) (SecCoreData, (EFI_PEI_PPI_DESCRIPTOR *)&mPrivateDispatchTable);

  //
  // If we get here then the PEI Core returned, which is not recoverable.
  //
  ASSERT (FALSE);
  CpuDeadLoop ();
}

EFI_STATUS
EFIAPI
TemporaryRamMigration (
  IN CONST EFI_PEI_SERVICES   **PeiServices,
  IN EFI_PHYSICAL_ADDRESS     TemporaryMemoryBase,
  IN EFI_PHYSICAL_ADDRESS     PermanentMemoryBase,
  IN UINTN                    CopySize
  )
{
  IA32_DESCRIPTOR                  IdtDescriptor;
  VOID                             *OldHeap;
  VOID                             *NewHeap;
  VOID                             *OldStack;
  VOID                             *NewStack;
  DEBUG_AGENT_CONTEXT_POSTMEM_SEC  DebugAgentContext;
  BOOLEAN                          OldStatus;
  BASE_LIBRARY_JUMP_BUFFER         JumpBuffer;

  DEBUG ((EFI_D_INFO,
    "TemporaryRamMigration(0x%Lx, 0x%Lx, 0x%Lx)\n",
    TemporaryMemoryBase,
    PermanentMemoryBase,
    (UINT64)CopySize
    ));

  OldHeap = (VOID*)(UINTN)TemporaryMemoryBase;
  NewHeap = (VOID*)((UINTN)PermanentMemoryBase + (CopySize >> 1));

  OldStack = (VOID*)((UINTN)TemporaryMemoryBase + (CopySize >> 1));
  NewStack = (VOID*)(UINTN)PermanentMemoryBase;

  DebugAgentContext.HeapMigrateOffset = (UINTN)NewHeap - (UINTN)OldHeap;
  DebugAgentContext.StackMigrateOffset = (UINTN)NewStack - (UINTN)OldStack;

  OldStatus = SaveAndSetDebugTimerInterrupt (FALSE);
  InitializeDebugAgent (DEBUG_AGENT_INIT_POSTMEM_SEC, (VOID *) &DebugAgentContext, NULL);

  //
  // Migrate Heap
  //
  CopyMem (NewHeap, OldHeap, CopySize >> 1);

  //
  // Migrate Stack
  //
  CopyMem (NewStack, OldStack, CopySize >> 1);

  //
  // Rebase IDT table in permanent memory
  //
  AsmReadIdtr (&IdtDescriptor);
  IdtDescriptor.Base = IdtDescriptor.Base - (UINTN)OldStack + (UINTN)NewStack;

  AsmWriteIdtr (&IdtDescriptor);

  //
  // Use SetJump()/LongJump() to switch to a new stack.
  //
  if (SetJump (&JumpBuffer) == 0) {
#if defined (MDE_CPU_IA32)
    JumpBuffer.Esp = JumpBuffer.Esp + DebugAgentContext.StackMigrateOffset;
#endif
#if defined (MDE_CPU_X64)
    JumpBuffer.Rsp = JumpBuffer.Rsp + DebugAgentContext.StackMigrateOffset;
#endif
    LongJump (&JumpBuffer, (UINTN)-1);
  }

  SaveAndSetDebugTimerInterrupt (OldStatus);

  return EFI_SUCCESS;
}
