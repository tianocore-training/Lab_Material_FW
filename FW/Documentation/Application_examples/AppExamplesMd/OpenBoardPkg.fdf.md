# FDF for Whiskey Lake Up Xtreme board
```
## @file
#  FDF file for the UpXtreme.
#
#
#  Copyright (c) 2020, Intel Corporation. All rights reserved.<BR>
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
#
##
```
## Include of the Flash map layout
```
[Defines]
   !include $(PROJECT)/Include/Fdf/FlashMapInclude.fdf

################################################################################
#
# FD Section
# The [FD] Section is made up of the definition statements and a
# description of what goes into  the Flash Device Image.  Each FD section
# defines one flash "device" image.  A flash device image may be one of
# the following: Removable media bootable image (like a boot floppy
# image,) an Option ROM image (that would be "flashed" into an add-in
# card,) a System "Flash"  image (that would be burned into a system's
# flash) or an Update ("Capsule") image that will be used to update and
# existing system flash.
#
################################################################################
[FD.UpXtreme]
#
# FD Tokens, BaseAddress, Size, ErasePolarity, BlockSize, and NumBlocks, cannot be
# assigned with PCD values. Instead, it uses the definitions for its variety, which
# are FLASH_BASE, FLASH_SIZE, FLASH_BLOCK_SIZE and FLASH_NUM_BLOCKS.
#
BaseAddress   = $(FLASH_BASE) | gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress  #The base address of the FLASH Device.
Size          = $(FLASH_SIZE) | gSiPkgTokenSpaceGuid.PcdBiosSize             #The size in bytes of the FLASH Device
ErasePolarity = 1
BlockSize     = $(FLASH_BLOCK_SIZE)
NumBlocks     = $(FLASH_NUM_BLOCKS)

DEFINE SIPKG_DXE_SMM_BIN  = INF
DEFINE SIPKG_PEI_BIN      = INF

# Set FLASH_REGION_FV_RECOVERY_OFFSET to PcdNemCodeCacheBase, because macro expression is not supported.
# So, PlatformSecLib uses PcdBiosAreaBaseAddress + PcdNemCodeCacheBase to get the real CodeCache base address.
SET gSiPkgTokenSpaceGuid.PcdNemCodeCacheBase = $(gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPreMemoryOffset)
SET gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvBase = $(gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress) + $(gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvOffset)
SET gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize = $(gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize)
SET gUefiCpuPkgTokenSpaceGuid.PcdCpuMicrocodePatchAddress = $(gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvBase) + 0x60
SET gUefiCpuPkgTokenSpaceGuid.PcdCpuMicrocodePatchRegionSize = $(gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize) - 0x60
SET gIntelFsp2WrapperTokenSpaceGuid.PcdCpuMicrocodePatchAddress = $(gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress) + $(gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvOffset)
SET gIntelFsp2WrapperTokenSpaceGuid.PcdCpuMicrocodePatchRegionSize = $(gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize)
SET gIntelFsp2WrapperTokenSpaceGuid.PcdFlashMicrocodeOffset = 0x60
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvMicrocodeBase    = gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvBase
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvMicrocodeSize    = gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvMicrocodeOffset  = gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvOffset
SET gIntelFsp2WrapperTokenSpaceGuid.PcdFlashCodeCacheAddress = gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress
SET gIntelFsp2WrapperTokenSpaceGuid.PcdFlashCodeCacheSize    = gSiPkgTokenSpaceGuid.PcdBiosSize
SET gIntelFsp2WrapperTokenSpaceGuid.PcdFsptBaseAddress       = $(gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress) + $(gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspTOffset)
SET gIntelFsp2WrapperTokenSpaceGuid.PcdFspmBaseAddress       = $(gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress) + $(gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspMOffset)
SET gIntelFsp2WrapperTokenSpaceGuid.PcdFspsBaseAddress       = $(gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress) + $(gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspSOffset)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashAreaBaseAddress    = gSiPkgTokenSpaceGuid.PcdBiosAreaBaseAddress
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashAreaSize           = gSiPkgTokenSpaceGuid.PcdBiosSize
################################################################################
#
# Following are lists of FD Region layout which correspond to the locations of different
# images within the flash device.
#
# Regions must be defined in ascending order and may not overlap.
#
# A Layout Region start with a eight digit hex offset (leading "0x" required) followed by
# the pipe "|" character, followed by the size of the region, also in hex with the leading
# "0x" characters. Like:
# Offset|Size
# PcdOffsetCName|PcdSizeCName
# RegionType <FV, DATA, or FILE>
# Fv Size can be adjusted
#
################################################################################
gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageVariableOffset|gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageVariableSize
gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageVariableBase|gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageVariableSize
#NV_VARIABLE_STORE
DATA = {
  ## This is the EFI_FIRMWARE_VOLUME_HEADER
  # ZeroVector []
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  # FileSystemGuid
  0x8D, 0x2B, 0xF1, 0xFF, 0x96, 0x76, 0x8B, 0x4C,
  0xA9, 0x85, 0x27, 0x47, 0x07, 0x5B, 0x4F, 0x50,
  # FvLength: 0x40000
  0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  #Signature "_FVH"       #Attributes
  0x5F, 0x46, 0x56, 0x48, 0xFF, 0xFE, 0x04, 0x00,
  #HeaderLength #CheckSum #ExtHeaderOffset #Reserved #Revision
  #
  # Be careful on CheckSum field.
  #
  0x48, 0x00, 0x32, 0x09, 0x00, 0x00, 0x00, 0x02,
  #Blockmap[0]: 4 Blocks  0x10000 Bytes / Block
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  #Blockmap[1]: End
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  ## This is the VARIABLE_STORE_HEADER
!if gMinPlatformPkgTokenSpaceGuid.PcdUefiSecureBootEnable == TRUE
  #  Signature: gEfiAuthenticatedVariableGuid = { 0xaaf32c78, 0x947b, 0x439a, { 0xa1, 0x80, 0x2e, 0x14, 0x4e, 0xc3, 0x77, 0x92 }}
  0x78, 0x2c, 0xf3, 0xaa, 0x7b, 0x94, 0x9a, 0x43,
  0xa1, 0x80, 0x2e, 0x14, 0x4e, 0xc3, 0x77, 0x92,
!else
  #  Signature: gEfiVariableGuid = { 0xddcf3616, 0x3275, 0x4164, { 0x98, 0xb6, 0xfe, 0x85, 0x70, 0x7f, 0xfe, 0x7d }}
  0x16, 0x36, 0xcf, 0xdd, 0x75, 0x32, 0x64, 0x41,
  0x98, 0xb6, 0xfe, 0x85, 0x70, 0x7f, 0xfe, 0x7d,
!endif
  #Size: 0x1E000 (gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageVariableSize) - 0x48 (size of EFI_FIRMWARE_VOLUME_HEADER) = 0x1DFB8
  # This can speed up the Variable Dispatch a bit.
  0xB8, 0xDF, 0x01, 0x00,
  #FORMATTED: 0x5A #HEALTHY: 0xFE #Reserved: UINT16 #Reserved1: UINT32
  0x5A, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}

gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageFtwWorkingOffset|gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwWorkingSize
gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwWorkingBase|gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwWorkingSize
#NV_FTW_WORKING
DATA = {
  # EFI_FAULT_TOLERANT_WORKING_BLOCK_HEADER->Signature = gEdkiiWorkingBlockSignatureGuid         =
  #  { 0x9e58292b, 0x7c68, 0x497d, { 0xa0, 0xce, 0x65,  0x0, 0xfd, 0x9f, 0x1b, 0x95 }}
  0x2b, 0x29, 0x58, 0x9e, 0x68, 0x7c, 0x7d, 0x49,
  0xa0, 0xce, 0x65,  0x0, 0xfd, 0x9f, 0x1b, 0x95,
  # Crc:UINT32            #WorkingBlockValid:1, WorkingBlockInvalid:1, Reserved
  0xE2, 0x33, 0xF2, 0x03, 0xFE, 0xFF, 0xFF, 0xFF,
  # WriteQueueSize: UINT64
  0xE0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}

gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageFtwSpareOffset|gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwSpareSize
gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwSpareBase|gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwSpareSize
#NV_FTW_SPARE

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedSize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedSize
FV = FvAdvanced

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvSecurityOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvSecuritySize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvSecurityBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvSecuritySize
FV = FvSecurity

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvOsBootOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvOsBootSize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvOsBootBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvOsBootSize
FV = FvOsBoot

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvUefiBootOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvUefiBootSize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvUefiBootBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvUefiBootSize
FV = FvUefiBoot

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPostMemoryOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPostMemorySize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPostMemoryBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPostMemorySize
FV = FvPostMemory

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspSOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspSSize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspSBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspSSize
# FSP_S Section
FILE = $(PLATFORM_FSP_BIN_PACKAGE)/Fsp_Rebased_S.fd

gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvOffset|gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize
gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvBase|gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize
#Microcode
FV = FvMicrocode

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspMOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspMSize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspMBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspMSize
# FSP_M Section
FILE = $(PLATFORM_FSP_BIN_PACKAGE)/Fsp_Rebased_M.fd

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspTOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspTSize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspTBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspTSize
# FSP_T Section
FILE = $(PLATFORM_FSP_BIN_PACKAGE)/Fsp_Rebased_T.fd

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedPreMemoryOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedPreMemorySize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedPreMemoryBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedPreMemorySize
FV = FvAdvancedPreMemory

gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPreMemoryOffset|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPreMemorySize
gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPreMemoryBase|gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPreMemorySize
FV = FvPreMemory
```
## Firmware Volumes that are going to be created
```
################################################################################
#
# FV Section
#
# [FV] section is used to define what components or modules are placed within a flash
# device file.  This section also defines order the components and modules are positioned
# within the image.  The [FV] section consists of define statements, set statements and
# module statements.
#
################################################################################
[FV.FvMicrocode]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = FALSE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = FALSE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE

FILE RAW = 197DB236-F856-4924-90F8-CDF12FB875F3 {
  $(OUTPUT_DIRECTORY)/$(TARGET)_$(TOOL_CHAIN_TAG)/X64/MicrocodeUpdates.bin
}
```
## Pre Memory Firmware Volumes
```
[FV.FvPreMemory]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = FC8FE6B5-CD9B-411E-BD8F-31824D0CDE3D

INF  UefiCpuPkg/SecCore/SecCore.inf
INF  MdeModulePkg/Core/Pei/PeiMain.inf
!include $(PLATFORM_PACKAGE)/Include/Fdf/CorePreMemoryInclude.fdf

INF $(PLATFORM_PACKAGE)/PlatformInit/ReportFv/ReportFvPei.inf
INF $(PLATFORM_PACKAGE)/PlatformInit/PlatformInitPei/PlatformInitPreMem.inf
INF IntelFsp2WrapperPkg/FspmWrapperPeim/FspmWrapperPeim.inf
INF $(PLATFORM_PACKAGE)/PlatformInit/SiliconPolicyPei/SiliconPolicyPeiPreMem.inf
INF $(PLATFORM_BOARD_PACKAGE)/BiosInfo/BiosInfo.inf
```
## FDF section for UnCompact Modules
```
[FV.FvPostMemoryUncompact]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 7C4DCFC6-AECA-4707-85B9-FD4B2EEA49E7

!include $(PLATFORM_PACKAGE)/Include/Fdf/CorePostMemoryInclude.fdf

# Init Board Config PCD
INF $(PLATFORM_PACKAGE)/PlatformInit/PlatformInitPei/PlatformInitPostMem.inf
INF IntelFsp2WrapperPkg/FspsWrapperPeim/FspsWrapperPeim.inf
INF $(PLATFORM_PACKAGE)/PlatformInit/SiliconPolicyPei/SiliconPolicyPeiPostMem.inf

FILE RAW = C9505BC0-AA3D-4056-9995-870C8DE8594E {
    $(PLATFORM_SI_BIN_PACKAGE)/ChipsetInit/CnlPchLpChipsetInitTable_Dx.bin
  }
!if gSiPkgTokenSpaceGuid.PcdPeiDisplayEnable == TRUE
FILE FREEFORM =PCD(gIntelSiliconPkgTokenSpaceGuid.PcdIntelGraphicsVbtFileGuid) {
  SECTION RAW = $(PLATFORM_FSP_BIN_PACKAGE)/SampleCode/Vbt/Vbt.bin
  SECTION UI  = "Vbt"
}
FILE FREEFORM = 7BB28B99-61BB-11D5-9A5D-0090273FC14D {
  SECTION RAW = MdeModulePkg/Logo/Logo.bmp
}
!endif # PcdPeiDisplayEnable

```
## Section using the Uncompaced section and using a rule to compress
```
[FV.FvPostMemory]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 9DFE49DB-8EF0-4D9C-B273-0036144DE917

FILE FV_IMAGE = 244FAAF4-FAE1-4892-8B7D-7EF84CBFA709 {
      SECTION GUIDED EE4E5898-3914-4259-9D6E-DC7BD79403CF PROCESSING_REQUIRED = TRUE {
        SECTION FV_IMAGE = FvPostMemoryUncompact
      }
}

[FV.FvUefiBootUncompact]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = A881D567-6CB0-4eee-8435-2E72D33E45B5

!include $(PLATFORM_PACKAGE)/Include/Fdf/CoreUefiBootInclude.fdf
INF  $(PLATFORM_SI_PACKAGE)/Pch/PchInit/Dxe/PchInitDxeCnl.inf

INF  UefiCpuPkg/CpuDxe/CpuDxe.inf
INF  MdeModulePkg/Bus/Pci/PciHostBridgeDxe/PciHostBridgeDxe.inf

INF  MdeModulePkg/Bus/Pci/SataControllerDxe/SataControllerDxe.inf
INF  MdeModulePkg/Bus/Ata/AtaBusDxe/AtaBusDxe.inf
INF  MdeModulePkg/Bus/Ata/AtaAtapiPassThru/AtaAtapiPassThru.inf
INF  MdeModulePkg/Universal/Console/GraphicsOutputDxe/GraphicsOutputDxe.inf
INF  MdeModulePkg/Bus/Pci/NvmExpressDxe/NvmExpressDxe.inf
INF  BoardModulePkg/LegacySioDxe/LegacySioDxe.inf
INF  BoardModulePkg/BoardBdsHookDxe/BoardBdsHookDxe.inf

#
# eMMC/SD Card
#
INF  MdeModulePkg/Bus/Pci/SdMmcPciHcDxe/SdMmcPciHcDxe.inf
INF  MdeModulePkg/Bus/Sd/EmmcDxe/EmmcDxe.inf
INF  MdeModulePkg/Bus/Sd/SdDxe/SdDxe.inf

INF  ShellPkg/Application/Shell/Shell.inf

INF  $(PLATFORM_PACKAGE)/PlatformInit/PlatformInitDxe/PlatformInitDxe.inf
INF  $(PLATFORM_BOARD_PACKAGE)/Policy/PolicyInitDxe/PolicyInitDxe.inf
INF  $(PLATFORM_PACKAGE)/PlatformInit/SiliconPolicyDxe/SiliconPolicyDxe.inf
INF  IntelFsp2WrapperPkg/FspWrapperNotifyDxe/FspWrapperNotifyDxe.inf

INF  $(PLATFORM_PACKAGE)/Test/TestPointStubDxe/TestPointStubDxe.inf


[FV.FvUefiBoot]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 0496D33D-EA79-495C-B65D-ABF607184E3B

FILE FV_IMAGE = 9E21FD93-9C72-4c15-8C4B-E77F1DB2D792 {
       SECTION GUIDED EE4E5898-3914-4259-9D6E-DC7BD79403CF PROCESSING_REQUIRED = TRUE {
         SECTION FV_IMAGE = FvUefiBootUncompact
       }
     }

[FV.FvOsBootUncompact]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = A0F04529-B715-44C6-BCA4-2DEBDD01EEEC

!include $(PLATFORM_PACKAGE)/Include/Fdf/CoreOsBootInclude.fdf

!if gMinPlatformPkgTokenSpaceGuid.PcdBootToShellOnly == FALSE
INF  UefiCpuPkg/PiSmmCpuDxeSmm/PiSmmCpuDxeSmm.inf
INF  $(PLATFORM_PACKAGE)/PlatformInit/PlatformInitSmm/PlatformInitSmm.inf
INF  $(PLATFORM_PACKAGE)/Flash/SpiFvbService/SpiFvbServiceSmm.inf

INF  $(PLATFORM_PACKAGE)/Acpi/AcpiTables/AcpiPlatform.inf
INF  $(PLATFORM_PACKAGE)/Acpi/AcpiSmm/AcpiSmm.inf

INF  RuleOverride = DRIVER_ACPITABLE $(PLATFORM_BOARD_PACKAGE)/Acpi/BoardAcpiDxe/BoardAcpiDxe.inf
INF  $(PLATFORM_PACKAGE)/FspWrapper/SaveMemoryConfig/SaveMemoryConfig.inf

!endif

[FV.FvLateSilicon]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 97F09B89-9E83-4DDC-A3D1-10C4AF539D1E

!if gMinPlatformPkgTokenSpaceGuid.PcdBootToShellOnly == FALSE
$(SIPKG_DXE_SMM_BIN) $(PLATFORM_SI_PACKAGE)/SystemAgent/SaInit/Dxe/SaInitDxe.inf
$(SIPKG_DXE_SMM_BIN) $(PLATFORM_SI_PACKAGE)/SystemAgent/SmmAccess/Dxe/SmmAccess.inf
$(SIPKG_DXE_SMM_BIN) $(PLATFORM_SI_PACKAGE)/Pch/PchSmiDispatcher/Smm/PchSmiDispatcher.inf
$(SIPKG_DXE_SMM_BIN) $(PLATFORM_SI_PACKAGE)/Pch/SmmControl/RuntimeDxe/SmmControl.inf
$(SIPKG_DXE_SMM_BIN) $(PLATFORM_SI_PACKAGE)/Pch/Spi/Smm/PchSpiSmm.inf
$(SIPKG_DXE_SMM_BIN) $(PLATFORM_SI_PACKAGE)/Pch/PchInit/Smm/PchInitSmm.inf

INF  RuleOverride = ACPITABLE $(PLATFORM_SI_PACKAGE)/SystemAgent/AcpiTables/SaAcpiTables.inf
INF  RuleOverride = ACPITABLE $(PLATFORM_SI_PACKAGE)/SystemAgent/AcpiTables/SaSsdt/SaSsdt.inf

!endif

[FV.FvOsBoot]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 13BF8810-75FD-4B1A-91E6-E16C4201F80A

FILE FV_IMAGE = B9020753-84A8-4BB6-947C-CE7D41F5CE39 {
       SECTION GUIDED EE4E5898-3914-4259-9D6E-DC7BD79403CF PROCESSING_REQUIRED = TRUE {
         SECTION FV_IMAGE = FvOsBootUncompact
       }
     }

FILE FV_IMAGE = D4632741-510C-44E3-BE21-C3D6D7881485 {
       SECTION GUIDED EE4E5898-3914-4259-9D6E-DC7BD79403CF PROCESSING_REQUIRED = TRUE {
         SECTION FV_IMAGE = FvLateSilicon
       }
     }

[FV.FvSecurityPreMemory]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16         #FV alignment and FV attributes setting.
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 9B7FA59D-71C6-4A36-906E-9725EA6ADD5B

!include $(PLATFORM_PACKAGE)/Include/Fdf/CoreSecurityPreMemoryInclude.fdf

INF  IntelSiliconPkg/Feature/VTd/PlatformVTdInfoSamplePei/PlatformVTdInfoSamplePei.inf

INF  IntelSiliconPkg/Feature/VTd/IntelVTdPmrPei/IntelVTdPmrPei.inf

[FV.FvSecurityPostMemory]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16         #FV alignment and FV attributes setting.
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 4199E560-54AE-45E5-91A4-F7BC3804E14A

!include $(PLATFORM_PACKAGE)/Include/Fdf/CoreSecurityPostMemoryInclude.fdf

!if gMinPlatformPkgTokenSpaceGuid.PcdTpm2Enable == TRUE
INF $(PLATFORM_PACKAGE)/Tcg/Tcg2PlatformPei/Tcg2PlatformPei.inf
!endif

[FV.FvSecurityLate]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = F753FE9A-EEFD-485B-840B-E032D538102C

!include $(PLATFORM_PACKAGE)/Include/Fdf/CoreSecurityLateInclude.fdf
INF  IntelSiliconPkg/Feature/VTd/IntelVTdDxe/IntelVTdDxe.inf

!if gMinPlatformPkgTokenSpaceGuid.PcdBootToShellOnly == FALSE
INF  $(PLATFORM_PACKAGE)/Hsti/HstiIbvPlatformDxe/HstiIbvPlatformDxe.inf
!if gMinPlatformPkgTokenSpaceGuid.PcdTpm2Enable == TRUE
INF  $(PLATFORM_PACKAGE)/Tcg/Tcg2PlatformDxe/Tcg2PlatformDxe.inf
!endif
!endif

[FV.FvSecurity]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 5A9A8B4E-149A-4CB2-BDC7-C8D62DE2C8CF

FILE FV_IMAGE = 757CC075-1428-423D-A73C-22639706C119 {
       SECTION FV_IMAGE = FvSecurityPreMemory
     }

FILE FV_IMAGE = 80BB8482-44D5-4BEC-82B5-8D87A933830B {
       SECTION GUIDED EE4E5898-3914-4259-9D6E-DC7BD79403CF PROCESSING_REQUIRED = TRUE {
         SECTION FV_IMAGE = FvSecurityPostMemory
       }
     }

FILE FV_IMAGE = C83522D9-80A1-4D95-8C25-3F1370497406 {
       SECTION GUIDED EE4E5898-3914-4259-9D6E-DC7BD79403CF PROCESSING_REQUIRED = TRUE {
         SECTION FV_IMAGE = FvSecurityLate
       }
     }

#
# Pre-memory Advanced Features
#
[FV.FvAdvancedPreMemory]
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = 6053D78A-457E-4490-A237-31D0FBE2F305

!include AdvancedFeaturePkg/Include/PreMemory.fdf

!if gWhiskeylakeOpenBoardPkgTokenSpaceGuid.PcdTbtEnable == TRUE
INF $(PLATFORM_BOARD_PACKAGE)/Features/Tbt/TbtInit/Pei/PeiTbtInit.inf
!endif

#
# Post-Memory Advanced Features
#
[FV.FvAdvancedUncompact]
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = BE3DF86F-E464-44A3-83F7-0D27E6B88C27

!include AdvancedFeaturePkg/Include/PostMemory.fdf

!if gWhiskeylakeOpenBoardPkgTokenSpaceGuid.PcdTbtEnable == TRUE
INF  $(PLATFORM_BOARD_PACKAGE)/Features/Tbt/TbtInit/Dxe/TbtDxe.inf
INF  $(PLATFORM_BOARD_PACKAGE)/Features/PciHotPlug/PciHotPlug.inf
INF  $(PLATFORM_BOARD_PACKAGE)/Features/Tbt/TbtInit/Smm/TbtSmm.inf
!endif

#
# Compressed FV with Post-Memory Advanced Features
#
[FV.FvAdvanced]
BlockSize          = $(FLASH_BLOCK_SIZE)
FvAlignment        = 16
ERASE_POLARITY     = 1
MEMORY_MAPPED      = TRUE
STICKY_WRITE       = TRUE
LOCK_CAP           = TRUE
LOCK_STATUS        = TRUE
WRITE_DISABLED_CAP = TRUE
WRITE_ENABLED_CAP  = TRUE
WRITE_STATUS       = TRUE
WRITE_LOCK_CAP     = TRUE
WRITE_LOCK_STATUS  = TRUE
READ_DISABLED_CAP  = TRUE
READ_ENABLED_CAP   = TRUE
READ_STATUS        = TRUE
READ_LOCK_CAP      = TRUE
READ_LOCK_STATUS   = TRUE
FvNameGuid         = B23E7388-9953-45C7-9201-0473DDE5487A

FILE FV_IMAGE = 5248467B-B87B-4E74-AC02-398AF4BCB712 {
       SECTION GUIDED EE4E5898-3914-4259-9D6E-DC7BD79403CF PROCESSING_REQUIRED = TRUE {
         SECTION FV_IMAGE = FvAdvancedUncompact
       }
     }

################################################################################
#
# Rules are use with the [FV] section's module INF type to define
# how an FFS file is created for a given INF file. The following Rule are the default
# rules for the different module type. User can add the customized rules to define the
# content of the FFS file.
#
################################################################################

!include $(PLATFORM_PACKAGE)/Include/Fdf/RuleInclude.fdf



```