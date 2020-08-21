#
# This file contains an 'Intel Peripheral Driver' and is
# licensed for Intel CPUs and chipsets under the terms of your
# license agreement with Intel or your vendor.  This file may
# be modified by the user, subject to additional terms of the
# license agreement
#
#/** @file
# Platform description.
#
# Copyright (c) 2012 - 2013, Intel Corporation. All rights reserved.<BR>
# This software and associated documentation (if any) is furnished
# under a license and may only be used or copied in accordance
# with the terms of the license. Except as permitted by such
# license, no part of this software or documentation may be
# reproduced, stored in a retrieval system, or transmitted in any
# form or by any means without the express written consent of
# Intel Corporation.
#
#**/

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                       = NewProjectPkg
  PLATFORM_GUID                       = 465B0A0B-7AC1-443b-8F67-7B8DEC145F90
  PLATFORM_VERSION                    = 0.1
  DSC_SPECIFICATION                   = 0x00010005

  #
  # Set platform specific package/folder name, same as passed from PREBUILD script.
  # PLATFORM_PACKAGE would be the same as PLATFORM_NAME as well as package build folder
  # DEFINE only takes effect at R9 DSC and FDF.
  #
  DEFINE      PLATFORM_PACKAGE                = NewProjectPkg
  DEFINE      PLATFORM_ECP_PACKAGE            = R8Vlv2TbltDevicePkg
  DEFINE      PLATFORM_RC_PACKAGE             = Vlv2DeviceRefCodePkg
  DEFINE      DEVICE_COMMON_PACKAGE           = DeviceCommonPkg
  DEFINE      PLATFORM_AMI_CSM_PACKAGE        = Vlv2DeviceAmiCsmPkg
  DEFINE      PLATFORM_INTEL_RESTRICT_PACKAGE = Vlv2TbltDeviceMiscPkg
  OUTPUT_DIRECTORY                    = Build/$(PLATFORM_PACKAGE)
  SUPPORTED_ARCHITECTURES             = IA32|X64
  BUILD_TARGETS                       = DEBUG|RELEASE
  SKUID_IDENTIFIER                    = DEFAULT

  DEFINE CPU_ARCH                 =ValleyView2
  DEFINE PROJECT_SC_FAMILY        =IntelPch
  DEFINE PROJECT_SC_ROOT          =../$(PLATFORM_RC_PACKAGE)/ValleyView2Soc/SouthCluster
  DEFINE PROJECT_VLV_ROOT          =../$(PLATFORM_RC_PACKAGE)/ValleyView2Soc/NorthCluster
  DEFINE CHIPSET_MEMORY_CONTROLLER=ValleyView2

  #
  # Platform On/Off features are defined here
  #
  #
  # Platform Support:: Set only one token except Crestview Hills
  #
  #   3.BayleyBay
  #     ENBDT_PF_ENABLE  = TRUE
  #
  !include $(PLATFORM_PACKAGE)/AutoPlatformCFG.txt
  !include $(PLATFORM_PACKAGE)/PlatformPkgConfig.dsc

!if $(X64_CONFIG) == TRUE
  DEFINE      DXE_ARCHITECTURE        = X64
  DEFINE      EDK_DXE_ARCHITECTURE    = X64
  DEFINE      UNDI_DXE_ARCHITECTURE   = 64
!else
  DEFINE      DXE_ARCHITECTURE        = IA32
  DEFINE      EDK_DXE_ARCHITECTURE    = Ia32
  DEFINE      UNDI_DXE_ARCHITECTURE   = 32
!endif
  FLASH_DEFINITION                    = $(PLATFORM_PACKAGE)/PlatformPkgX64Source.fdf
!if $(LFMA_ENABLE) == TRUE
  FIX_LOAD_TOP_MEMORY_ADDRESS         = 0xFFFFFFFFFFFFFFFF
  DEFINE   TOP_MEMORY_ADDRESS         = 0xFFFFFFFFFFFFFFFF
!else
  FIX_LOAD_TOP_MEMORY_ADDRESS         = 0x0
  DEFINE   TOP_MEMORY_ADDRESS         = 0x0
!endif
  #
  # Do not use 0x prefix, pass prefix 0x or postfix h through macro for C or ASM
  #  Later used in PCD
  DEFINE   PLATFORM_PCIEXPRESS_BASE   = 0E0000000

  #
  # Set the global variables for EDK sytle module
  # EDK_GLOBAL only takes effect to R8 INF.
  #
  EDK_GLOBAL PROJECT_VLV_ROOT           = ../$(PLATFORM_RC_PACKAGE)/ValleyView2Soc/NorthCluster

  EDK_GLOBAL PLATFORM_PACKAGE          = $(PLATFORM_PACKAGE)
  EDK_GLOBAL PLATFORM_RC_PACKAGE       = $(PLATFORM_RC_PACKAGE)
  EDK_GLOBAL PLATFORM_ECP_PACKAGE      = R8Vlv2TbltDevicePkg
  EDK_GLOBAL CPU_ARCH                  = ValleyView2
  EDK_GLOBAL PROJECT_SC_FAMILY         = IntelPch
  EDK_GLOBAL PROJECT_SC_ROOT           = ../$(PLATFORM_RC_PACKAGE)/ValleyView2Soc/SouthCluster
  EDK_GLOBAL PROJECT_VLV_ROOT           = ../$(PLATFORM_RC_PACKAGE)/ValleyView2Soc/NorthCluster
  EDK_GLOBAL CHIPSET_MEMORY_CONTROLLER = ValleyView2

  EDK_GLOBAL PROJECT_SC_ROOT           = ../$(PLATFORM_RC_PACKAGE)/ValleyView2Soc/SouthCluster
  EDK_GLOBAL PROJECT_ACPI_ROOT         = ../$(PLATFORM_RC_PACKAGE)/AcpiTables
  EDK_GLOBAL PROJECT_PPM_ROOT          = ../$(PLATFORM_RC_PACKAGE)/PowerManagement
  EDK_GLOBAL PROJECT_DTS_ROOT          = ../$(PLATFORM_RC_PACKAGE)/DigitalThermalSensor
  EDK_GLOBAL PROJECT_SEC_ROOT           = ../$(PLATFORM_RC_PACKAGE)/SeC

  EDK_GLOBAL PROJECT_SC                = SouthCluster
  EDK_GLOBAL PROJECT_DTS               = DigitalThermalSensor
  EDK_GLOBAL CHIPSET_MEMORY_CONTROLLER = ValleyView2

  EDK_GLOBAL EFI_ACPI_TABLE_STORAGE_GUID = 7E374E25-8E01-4FEE-87F2-390C23C606CD
  EDK_GLOBAL EFI_ACPI_OEM_FADT_REVISION  = 0x0001

  EDK_GLOBAL UEFI_PREFIX = Uefi
  EDK_GLOBAL PI_PERFIX   =

################################################################################
#
# SKU Identification section - list of all SKU IDs supported by this
#                              Platform.
#
################################################################################
[SkuIds]
  0|DEFAULT              # The entry: 0|DEFAULT is reserved and always required.

################################################################################
#
# Library Class section - list of all Library Classes needed by this Platform.
#
################################################################################
[LibraryClasses.common]
  #
  # Entry point
  #
  PeiCoreEntryPoint|MdePkg/Library/PeiCoreEntryPoint/PeiCoreEntryPoint.inf
  PeimEntryPoint|MdePkg/Library/PeimEntryPoint/PeimEntryPoint.inf
  DxeCoreEntryPoint|MdePkg/Library/DxeCoreEntryPoint/DxeCoreEntryPoint.inf
  UefiDriverEntryPoint|MdePkg/Library/UefiDriverEntryPoint/UefiDriverEntryPoint.inf
  UefiApplicationEntryPoint|MdePkg/Library/UefiApplicationEntryPoint/UefiApplicationEntryPoint.inf
  DxeSmmDriverEntryPoint|IntelFrameworkPkg/Library/DxeSmmDriverEntryPoint/DxeSmmDriverEntryPoint.inf
  
  #
  # Basic
  #
  BaseLib|MdePkg/Library/BaseLib/BaseLib.inf
!if $(SSE2_ENABLE) == TRUE
  BaseMemoryLib|MdePkg/Library/BaseMemoryLibSse2/BaseMemoryLibSse2.inf
!else
  BaseMemoryLib|MdePkg/Library/BaseMemoryLibRepStr/BaseMemoryLibRepStr.inf
!endif
  PrintLib|MdePkg/Library/BasePrintLib/BasePrintLib.inf
  CpuLib|MdePkg/Library/BaseCpuLib/BaseCpuLib.inf
  IoLib|MdePkg/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic.inf
  PciLib|MdePkg/Library/BasePciLibCf8/BasePciLibCf8.inf
#  PciLib|MdePkg/Library/BasePciLibPciExpress/BasePciLibPciExpress.inf
  PciCf8Lib|MdePkg/Library/BasePciCf8Lib/BasePciCf8Lib.inf
  PciExpressLib|MdePkg/Library/BasePciExpressLib/BasePciExpressLib.inf
  CacheMaintenanceLib|MdePkg/Library/BaseCacheMaintenanceLib/BaseCacheMaintenanceLib.inf
  PeCoffLib|MdePkg/Library/BasePeCoffLib/BasePeCoffLib.inf
  PeCoffGetEntryPointLib|MdePkg/Library/BasePeCoffGetEntryPointLib/BasePeCoffGetEntryPointLib.inf
  PchPlatformLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/PchPlatformLib/PchPlatformLib.inf
#  FsaLib|NewProjectPkg/Library/PlatformFsaLib/PlatformFsaLib.inf
  #
  # UEFI & PI
  #
  UefiBootServicesTableLib|MdePkg/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  UefiRuntimeServicesTableLib|MdePkg/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  UefiRuntimeLib|MdePkg/Library/UefiRuntimeLib/UefiRuntimeLib.inf
  UefiLib|MdePkg/Library/UefiLib/UefiLib.inf
  HiiLib|MdeModulePkg/Library/UefiHiiLib/UefiHiiLib.inf
  UefiHiiServicesLib|MdeModulePkg/Library/UefiHiiServicesLib/UefiHiiServicesLib.inf
  DevicePathLib|MdePkg/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  UefiDecompressLib|IntelFrameworkModulePkg/Library/BaseUefiTianoCustomDecompressLib/BaseUefiTianoCustomDecompressLib.inf
  PeiServicesTablePointerLib|MdePkg/Library/PeiServicesTablePointerLibIdt/PeiServicesTablePointerLibIdt.inf
  PeiServicesLib|MdePkg/Library/PeiServicesLib/PeiServicesLib.inf
  DxeServicesLib|MdePkg/Library/DxeServicesLib/DxeServicesLib.inf
  DxeServicesTableLib|MdePkg/Library/DxeServicesTableLib/DxeServicesTableLib.inf
  UefiCpuLib|UefiCpuPkg/Library/BaseUefiCpuLib/BaseUefiCpuLib.inf
  UefiUsbLib|MdePkg/Library/UefiUsbLib/UefiUsbLib.inf
  GenericBdsLib|IntelFrameworkModulePkg/Library/GenericBdsLib/GenericBdsLib.inf
  #GenericBdsLib|$(PLATFORM_PACKAGE)/Override/IntelFrameworkModulePkg/Library/GenericBdsLib/GenericBdsLib.inf
  PlatformBdsLib|$(PLATFORM_PACKAGE)/Library/PlatformBdsLib/PlatformBdsLib_BB.inf
  NetLib|MdeModulePkg/Library/DxeNetLib/DxeNetLib.inf
  DpcLib|MdeModulePkg/Library/DxeDpcLib/DxeDpcLib.inf
  FlashDeviceLib|$(PLATFORM_PACKAGE)/Library/FlashDeviceLib/FlashDeviceLib.inf
  #
  # Framework
  #
!if $(S3_ENABLE) == TRUE
  S3BootScriptLib|MdeModulePkg/Library/PiDxeS3BootScriptLib/DxeS3BootScriptLib.inf
!else
  S3BootScriptLib|MdePkg/Library/BaseS3BootScriptLibNull/BaseS3BootScriptLibNull.inf
!endif
  S3IoLib|MdePkg/Library/BaseS3IoLib/BaseS3IoLib.inf
  S3PciLib|MdePkg/Library/BaseS3PciLib/BaseS3PciLib.inf

  #
  # Generic Modules
  #
!if $(USB_ENABLE) == TRUE
  UefiUsbLib|MdePkg/Library/UefiUsbLib/UefiUsbLib.inf
!endif
!if $(SCSI_ENABLE) == TRUE
  UefiScsiLib|MdePkg/Library/UefiScsiLib/UefiScsiLib.inf
!endif
!if $(NETWORK_ENABLE) == TRUE
  NetLib|MdeModulePkg/Library/DxeNetLib/DxeNetLib.inf
  IpIoLib|MdeModulePkg/Library/DxeIpIoLib/DxeIpIoLib.inf
  UdpIoLib|MdeModulePkg/Library/DxeUdpIoLib/DxeUdpIoLib.inf
  TcpIoLib|MdeModulePkg/Library/DxeTcpIoLib/DxeTcpIoLib.inf
  DpcLib|MdeModulePkg/Library/DxeDpcLib/DxeDpcLib.inf
!endif
!if $(S3_ENABLE) == TRUE
  S3Lib|IntelFrameworkModulePkg/Library/PeiS3Lib/PeiS3Lib.inf
!endif

  OemHookStatusCodeLib|MdeModulePkg/Library/OemHookStatusCodeLibNull/OemHookStatusCodeLibNull.inf
!if $(CAPSULE_ENABLE) == TRUE
#Override for device firmware update
 # CapsuleLib|IntelFrameworkModulePkg/Library/DxeCapsuleLib/DxeCapsuleLib.inf
 CapsuleLib|NewProjectPkg/Override/IntelFrameworkModulePkg/Library/DxeCapsuleLib/DxeCapsuleLib_BB.inf
!else
  CapsuleLib|MdeModulePkg/Library/DxeCapsuleLibNull/DxeCapsuleLibNull.inf
!endif
  LogoLib|DeviceCommonPkg/Override/BdsPkg/Library/LogoLib/LogoLib.inf
  UefiBootManagerLib|DeviceCommonPkg/Override/BdsPkg/Library/UefiBootManagerLib/UefiBootManagerLib.inf
  LegacyBootManagerLib|DeviceCommonPkg/Override/BdsPkg/Library/LegacyBootManagerLib/LegacyBootManagerLib.inf
  LanguageLib|EdkCompatibilityPkg/Compatibility/Library/UefiLanguageLib/UefiLanguageLib.inf
  SynchronizationLib|MdePkg/Library/BaseSynchronizationLib/BaseSynchronizationLib.inf
  SecurityManagementLib|MdeModulePkg/Library/DxeSecurityManagementLib/DxeSecurityManagementLib.inf
  IoApicLib|PcAtChipsetPkg/Library/BaseIoApicLib/BaseIoApicLib.inf

  CmosAccessLib|DeviceCommonPkg/Library/CmosAccessLib/CmosAccessLib.inf
  PostCodeLib|DeviceCommonPkg/Library/PostCodeLibPort80Ex/PostCodeLibPort80Ex.inf
  BeepLib|DeviceCommonPkg/Library/BeepLib/BeepLib.inf
  DebugPrintErrorLevelLib|MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib.inf
  DebugPropertyLib|DeviceCommonPkg/Library/DebugPropertyLibCmos/DebugPropertyLibCmos.inf
  #
  # CPU
  #
  MtrrLib|UefiCpuPkg/Library/MtrrLib/MtrrLib.inf
  CpuConfigLib|IA32FamilyCpuPkg/Library/CpuConfigLib/CpuConfigLib.inf
  LocalApicLib|UefiCpuPkg/Library/BaseXApicX2ApicLib/BaseXApicX2ApicLib.inf
  CpuExceptionHandlerLib|MdeModulePkg/Library/CpuExceptionHandlerLibNull/CpuExceptionHandlerLibNull.inf 
  
  #
  # ICH
  #
  SmbusLib|$(PLATFORM_PACKAGE)/Library/SmbusLib/SmbusLib.inf
  SmmLib|$(PLATFORM_PACKAGE)/Library/PchSmmLib/PchSmmLib.inf
#  FlashDecodeLib|$(PLATFORM_PACKAGE)/Library/FlashDecodeLib/FlashDecodeLib.inf
#  SmmIoLib|$(PLATFORM_PACKAGE)/Library/SmmIo/SmmIoLib.inf
  SmmIoLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/Dts/SampleCode/Library/SmmIo/SmmIo.inf
  SmmKscLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/Dts/SampleCode/Library/Ksc/Smm/SmmKscLib.inf
  DTSHookLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/Dts/SampleCode/Library/DTSHookLib/Smm/DTSHookLib.inf

  #PchPlatformLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/PchPlatformLib/PchPlatformLib.inf
  PchSmbusLibDxe|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/PchSmbusLib/Dxe/PchSmbusLibDxe.inf
  PchSmbusLibPei|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/PchSmbusLib/Pei/PchSmbusLibPei.inf
  PchAslUpdateLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SampleCode/Library/AslUpdate/Dxe/PchAslUpdateLib.inf

  #
  # Platform
  #
  TimerLib|$(PLATFORM_PACKAGE)/Library/IntelPchAcpiTimerLib/IntelPchAcpiTimerLib.inf
  ResetSystemLib|$(PLATFORM_PACKAGE)/Library/ResetSystemLib/ResetSystemLib.inf
  PlatformSecLib|$(PLATFORM_PACKAGE)/Library/PlatformSecLib/PlatformSecLib.inf
  PlatformCmosLib|$(PLATFORM_PACKAGE)/Library/PlatformCmosLib/PlatformCmosLib.inf
  PlatformPostCodeMapLib|DeviceCommonPkg/Library/PlatformPostCodeMapLib/PlatformPostCodeMapLib.inf
  PlatformBeepMapLib|DeviceCommonPkg/Library/PlatformBeepMapLib/PlatformBeepMapLib.inf

  #
  # Misc
  #
  MonoStatusCodeLib|$(PLATFORM_PACKAGE)/MonoStatusCode/MonoStatusCode.inf
!if $(TARGET) == RELEASE
  DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
!else
  DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
  SerialPortLib|$(PLATFORM_PACKAGE)/Library/SerialPortLib/SerialPortLib.inf
!endif
  UsbDebugPortLib|DeviceCommonPkg/Library/UsbDebugPortLib/UsbDebugPortLibDxe.inf

  PerformanceLib|MdePkg/Library/BasePerformanceLibNull/BasePerformanceLibNull.inf
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
!if $(TPM_ENABLED) == TRUE
  TpmCommLib|SecurityPkg/Library/TpmCommLib/TpmCommLib.inf
  Tpm12CommandLib|SecurityPkg\Library\Tpm12CommandLib\Tpm12CommandLib.inf
  Tpm12DeviceLib|SecurityPkg\Library\Tpm12DeviceLibDTpm\Tpm12DeviceLibDTpm.inf

!endif

  DebugAgentLib|MdeModulePkg/Library/DebugAgentLibNull/DebugAgentLibNull.inf
  PeCoffExtraActionLib|SourceLevelDebugPkg/Library/PeCoffExtraActionLibDebug/PeCoffExtraActionLibDebug.inf
  PlatformHookLib|MdeModulePkg/Library/BasePlatformHookLibNull/BasePlatformHookLibNull.inf
  SerialPortLib|MdeModulePkg/Library/BaseSerialPortLib16550/BaseSerialPortLib16550.inf
  DebugCommunicationLib|SourceLevelDebugPkg/Library/DebugCommunicationLibSerialPort/DebugCommunicationLibSerialPort.inf

  #
  # CryptLib
  #
!if $(TPM_ENABLED) == TRUE
!if $(CRYPTO_BIN_ENABLE) == TRUE
  IntrinsicLib|$(PLATFORM_INTEL_RESTRICT_PACKAGE)/CryptoBin/IntrinsicLib/IntrinsicLib.inf
  OpensslLib|$(PLATFORM_INTEL_RESTRICT_PACKAGE)/CryptoBin/OpensslLib/OpensslLib.inf
!else
  IntrinsicLib|CryptoPkg/Library/IntrinsicLib/IntrinsicLib.inf
  OpensslLib|CryptoPkg/Library/OpensslLib/OpensslLib.inf
!endif
!endif
#CpuOnlyResetLib|IA32FamilyCpuPkg/Library/CpuOnlyResetLibNull/CpuOnlyResetLibNull.inf
#CpuOnlyResetLib|NewProjectPkg/Override/IA32FamilyCpuPkg/Library/CpuOnlyResetLibNull/CpuOnlyResetLibNull.inf

#
# For R9 compilation
#
 BiosIdLib|$(PLATFORM_PACKAGE)/Library/BiosIdLib/BiosIdLib.inf
 CpuIA32Lib|$(PLATFORM_PACKAGE)/Library/CpuIA32Lib/CpuIA32Lib.inf

  StallSmmLib|$(PLATFORM_PACKAGE)/Library/StallSmmLib/StallSmmLib.inf

 !if $(SECURE_BOOT_ENABLE) == TRUE
   OpensslLib|CryptoPkg/Library/OpensslLib/OpensslLib.inf
   IntrinsicLib|CryptoPkg/Library/IntrinsicLib/IntrinsicLib.inf
   PlatformSecureLib|SecurityPkg\Library\PlatformSecureLibNull\PlatformSecureLibNull.inf
   AuthVariableLib|SecurityPkg/Library/AuthVariableLib/AuthVariableLib.inf
 !else
   AuthVariableLib|MdeModulePkg/Library/AuthVariableLibNull/AuthVariableLibNull.inf   
 !endif
   VarCheckLib|MdeModulePkg/Library/VarCheckLib/VarCheckLib.inf

  I2cLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/I2CLib/I2CLib.inf

  ShellCEntryLib|ShellPkg/Library/UefiShellCEntryLib/UefiShellCEntryLib.inf
  ShellLib|ShellPkg/Library/UefiShellLib/UefiShellLib.inf
  FileHandleLib|MdePkg/Library/UefiFileHandleLib/UefiFileHandleLib.inf
  SortLib|MdeModulePkg/Library/UefiSortLib/UefiSortLib.inf
  SeCLib|Vlv2DeviceRefCodePkg/Txe/Library/SeCLib/SeCLib.inf
!if $(FTPM_ENABLE) == TRUE
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
  OpensslLib|CryptoPkg/Library/OpensslLib/OpensslLib.inf
  IntrinsicLib|CryptoPkg/Library/IntrinsicLib/IntrinsicLib.inf
!endif
  TpmMeasurementLib|SecurityPkg\Library\DxeTpmMeasurementLib\DxeTpmMeasurementLib.inf
  TrEEPhysicalPresenceLib|SecurityPkg\Library\DxeTrEEPhysicalPresenceLib\DxeTrEEPhysicalPresenceLib.inf
!if $(FTPM_ENABLE) == TRUE  
  TrEEPpVendorLib|SecurityPkg\Library\TrEEPpVendorLibNull\TrEEPpVendorLibNull.inf
!endif  
  Tpm2CommandLib|SecurityPkg/Library/Tpm2CommandLib/Tpm2CommandLib.inf
  FmiLib|Vlv2DeviceRefCodePkg/Txe/Library/FmiLib/FmiLib.inf
  PchPciExpressHelpersLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/PchPciExpressHelpersLib/PchPciExpressHelpersLib.inf
###############  
## End of LibraryClasses.Common section
###############

[LibraryClasses.IA32.SEC]
!if $(PERFORMANCE_ENABLE) == TRUE
  PerformanceLib|MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
!endif
  DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf 

[LibraryClasses.IA32.PEIM, LibraryClasses.IA32.PEI_CORE, LibraryClasses.IA32.SEC]
  #
  # PEI phase common
  #
  RamDebugLib|Vlv2DeviceRefCodePkg/Platform/Library/RamDebugLib/RamDebugLib.inf
  
  I2CLibPei|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/I2CLibPei/I2CLibPei.inf
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  HobLib|MdePkg/Library/PeiHobLib/PeiHobLib.inf
  MemoryAllocationLib|MdePkg/Library/PeiMemoryAllocationLib/PeiMemoryAllocationLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/PeiReportStatusCodeLib/PeiReportStatusCodeLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/PeiExtractGuidedSectionLib/PeiExtractGuidedSectionLib.inf
  MultiPlatformLib|$(PLATFORM_PACKAGE)/Library/MultiPlatformLib/MultiPlatformLibBB.inf
!if $(CRYPTO_BIN_ENABLE) == TRUE
  BaseCryptLib|$(PLATFORM_INTEL_RESTRICT_PACKAGE)/CryptoBin/BaseCryptLib/PeiCryptLib.inf
!else
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/PeiCryptLib.inf

!endif

!if $(PERFORMANCE_ENABLE) == TRUE
!if $(INTEL_FPDT_ENABLE) == TRUE
  PerformanceLib|DeviceCommonPkg/Library/FpdtPeiPerformanceLib/FpdtPeiPerformanceLib.inf
!else
  PerformanceLib|MdeModulePkg/Library/PeiPerformanceLib/PeiPerformanceLib.inf
!endif
  TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/PeiTscTimerLib.inf
!endif

!if $(TARGET) == RELEASE
  DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
!else
  DebugLib|IntelFrameworkModulePkg/Library/PeiDxeDebugLibReportStatusCode/PeiDxeDebugLibReportStatusCode.inf 
  #SerialPortLib|$(PLATFORM_PACKAGE)/Library/SerialPortLib/SerialPortLib.inf
!endif
  UsbDebugPortLib|DeviceCommonPkg/Library/UsbDebugPortLib/UsbDebugPortLibPei.inf
  PlatformHookLib|$(PLATFORM_PACKAGE)/Library/PlatformHookSerialLib/PlatformHookSerialInitLib.inf

  LockBoxLib|MdeModulePkg/Library/SmmLockBoxLib/SmmLockBoxPeiLib.inf

  HashLib|SecurityPkg\Library\HashLibBaseCryptoRouter\HashLibBaseCryptoRouterPei.inf
!if $(SOURCE_DEBUG_ENABLE) == TRUE
  PeCoffExtraActionLib|SourceLevelDebugPkg/Library/PeCoffExtraActionLibDebug/PeCoffExtraActionLibDebug.inf
  DebugCommunicationLib|SourceLevelDebugPkg/Library/DebugCommunicationLibSerialPort/DebugCommunicationLibSerialPort.inf
  #PlatformHookLib|MdeModulePkg/Library/BasePlatformHookLibNull/BasePlatformHookLibNull.inf
  PlatformHookLib|$(PLATFORM_PACKAGE)/Library/PlatformHookSerialLib/PlatformHookSerialInitLib.inf
  SerialPortLib|MdeModulePkg/Library/BaseSerialPortLib16550/BaseSerialPortLib16550.inf
  DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/SecPeiDebugAgentLib.inf 
!else
  PeCoffExtraActionLib|MdePkg/Library/BasePeCoffExtraActionLibNull/BasePeCoffExtraActionLibNull.inf
  DebugAgentLib|MdeModulePkg/Library/DebugAgentLibNull/DebugAgentLibNull.inf
!endif

!if $(SOURCE_DEBUG_ENABLE_USE_USB3) == TRUE
  DebugCommunicationLib|SourceLevelDebugPkg/Library/DebugCommunicationLibUsb3/DebugCommunicationLibUsb3Pei.inf
!endif

 !if $(MINNOW2_FSP_BUILD) == TRUE
 PlatformFspLib|NewProjectPkg/Library/PlatformFspLib/PlatformFspLib.inf
 !endif

!if $(FTPM_ENABLE) == TRUE
  Tpm2DeviceLib|Vlv2DeviceRefCodePkg\Txe\Library\Tpm2DeviceLibSeCPei\Tpm2DeviceLibSeC.inf
!endif
###############  
## End of LibraryClasses.SEC  and PEI  section
###############

[LibraryClasses.X64]
  I2cDriverLib|Vlv2DeviceRefCodePkg/Platform/Library/I2cStackLib/I2cDriverLib/I2cDriverLib.inf
  DfuLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/DfuCapsuleLib/DfuCapsuleLib.inf
  
  #
  # DXE phase common
  #
  HobLib|MdePkg/Library/DxeHobLib/DxeHobLib.inf
  PcdLib|MdePkg/Library/DxePcdLib/DxePcdLib.inf
  MemoryAllocationLib|MdePkg/Library/UefiMemoryAllocationLib/UefiMemoryAllocationLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  ExtractGuidedSectionLib|MdePkg/Library/DxeExtractGuidedSectionLib/DxeExtractGuidedSectionLib.inf
  PchDxeRuntimePciLibPciExpress|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/DxeRuntimePciLibPciExpress/DxeRuntimePciLibPciExpress.inf
!if $(PCIESC_ENABLE) == TRUE
  PchPciExpressHelpersLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/PchPciExpressHelpersLib/PchPciExpressHelpersLib.inf
!endif

  TcgPhysicalPresenceLib|SecurityPkg/Library/DxeTcgPhysicalPresenceLib/DxeTcgPhysicalPresenceLib.inf
!if $(TPM_ENABLED) == TRUE
!if $(CRYPTO_BIN_ENABLE) == TRUE
  BaseCryptLib|$(PLATFORM_INTEL_RESTRICT_PACKAGE)/CryptoBin/BaseCryptLib/BaseCryptLib.inf
!else
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
!endif
!endif
#  DxeKscLib|$(PLATFORM_PACKAGE)/Library/Ksc/Dxe/DxeKscLib.inf

  LockBoxLib|MdeModulePkg/Library/SmmLockBoxLib/SmmLockBoxDxeLib.inf
#  SpiFlashCommonLib|$(PLATFORM_PACKAGE)/Library/SpiFlashCommonLib/SpiFlashCommonLib.inf
  EfiRegTableLib|$(PLATFORM_PACKAGE)/Library/EfiRegTableLib/EfiRegTableLib.inf

!if $(SECURE_BOOT_ENABLE) == TRUE
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
!endif

#  PlatformSecureDefaultsLib|NewProjectPkg/Library/PlatformSecureDefaultsLib/PlatformSecureDefaultsLib.inf
  HashLib|SecurityPkg\Library\HashLibBaseCryptoRouter\HashLibBaseCryptoRouterDxe.inf

###############  
## End of LibraryClasses.X64 section
###############


[LibraryClasses.X64.DXE_DRIVER]
!if $(TARGET) == RELEASE
  DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
!else
  DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
  SerialPortLib|$(PLATFORM_PACKAGE)/Library/SerialPortLib/SerialPortLib.inf
!endif
  PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf 
  PerformanceLib|MdePkg/Library/BasePerformanceLibNull/BasePerformanceLibNull.inf
  CustomizedDisplayLib|MdeModulePkg\Library\CustomizedDisplayLib\CustomizedDisplayLib.inf
!if $(PERFORMANCE_ENABLE) == TRUE
!if $(INTEL_FPDT_ENABLE) == FALSE
  PerformanceLib|MdeModulePkg\Library\DxePerformanceLib\DxePerformanceLib.inf
!endif
  TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/DxeTscTimerLib.inf
!endif

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/DxeDebugAgentLib.inf
!endif
!if $(SOURCE_DEBUG_ENABLE_USE_USB3) == TRUE
  DebugCommunicationLib|SourceLevelDebugPkg/Library/DebugCommunicationLibUsb3/DebugCommunicationLibUsb3Dxe.inf
!endif
###############  
## End of LibraryClasses.DXE_DRIVER section
###############

[LibraryClasses.X64.DXE_CORE]
  HobLib|MdePkg/Library/DxeCoreHobLib/DxeCoreHobLib.inf
  MemoryAllocationLib|MdeModulePkg/Library/DxeCoreMemoryAllocationLib/DxeCoreMemoryAllocationLib.inf
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
!if $(PERFORMANCE_ENABLE) == TRUE
!if $(INTEL_FPDT_ENABLE) == TRUE
  PerformanceLib|DeviceCommonPkg/Library/FpdtDxeCorePerformanceLib/FpdtDxeCorePerformanceLib.inf
!else
  PerformanceLib|MdeModulePkg/Library/DxeCorePerformanceLib/DxeCorePerformanceLib.inf
!endif
  TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/DxeTscTimerLib.inf
!endif

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/DxeDebugAgentLib.inf
!endif
!if $(SOURCE_DEBUG_ENABLE_USE_USB3) == TRUE
  DebugCommunicationLib|SourceLevelDebugPkg/Library/DebugCommunicationLibUsb3/DebugCommunicationLibUsb3Dxe.inf
!endif
###############  
## End of LibraryClasses.DXE_CORE section
###############

[LibraryClasses.X64.DXE_SMM_DRIVER]
  SmmServicesTableLib|MdePkg/Library/SmmServicesTableLib/SmmServicesTableLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/SmmReportStatusCodeLib/SmmReportStatusCodeLib.inf
  MemoryAllocationLib|MdePkg/Library/SmmMemoryAllocationLib/SmmMemoryAllocationLib.inf
  LockBoxLib|MdeModulePkg/Library/SmmLockBoxLib/SmmLockBoxSmmLib.inf
  SmmMemLib|MdePkg/Library/SmmMemLib/SmmMemLib.inf
#  SpiFlashCommonLib|$(PLATFORM_PACKAGE)/Library/SpiFlashCommonLib/SmmSpiFlashCommonLib.inf

  IstAppletLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/PowerManagement/Library/IstApplet/Smm/IstApplet.inf
  SilvermontPpmLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/PowerManagement/Library/Silvermont/Smm/SilvermontPpmLib.inf
  SmmCpuPlatformHookLib|IA32FamilyCpuPkg/Library/SmmCpuPlatformHookLibNull/SmmCpuPlatformHookLibNull.inf
#  SmmKscLib|$(PLATFORM_PACKAGE)/Library/Ksc/Smm/SmmKscLib.inf
  MchPpmLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/PowerManagement/Library/ValleyView/Smm/MchLib.inf
  IchPpmLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/PowerManagement/Library/SouthCluster/Smm/IchLib.inf
  AslUpdateLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/PowerManagement/SampleCode/Library/AslUpdate/Dxe/AslUpdateLib.inf
!if $(INTEL_FPDT_ENABLE) == TRUE
  PerformanceLib|MdeModulePkg/Library/SmmPerformanceLib/SmmPerformanceLib.inf
  TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/DxeTscTimerLib.inf
!else
  PerformanceLib|MdePkg/Library/BasePerformanceLibNull/BasePerformanceLibNull.inf
!endif

!if $(CRYPTO_BIN_ENABLE) == TRUE
  BaseCryptLib|$(PLATFORM_INTEL_RESTRICT_PACKAGE)/CryptoBin/BaseCryptLib/SmmCryptLib.inf
!else
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/SmmCryptLib.inf
!endif
  !if $(TARGET) != RELEASE    
        DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
  !endif

!if $(SOURCE_DEBUG_ENABLE) == TRUE  
  DebugAgentLib|NewProjectPkg/Override/SourceLevelDebugPkg/Library/DebugAgent/SmmDebugAgentLib.inf
  TimerLib|$(PLATFORM_PACKAGE)/Library/IntelPchAcpiTimerLib/IntelPchAcpiTimerLib.inf
!endif      
  CpuExceptionHandlerLib|UefiCpuPkg/Library/CpuExceptionHandlerLib/SmmCpuExceptionHandlerLib.inf
!if $(SOURCE_DEBUG_ENABLE_USE_USB3) == TRUE
  DebugCommunicationLib|SourceLevelDebugPkg/Library/DebugCommunicationLibUsb3/DebugCommunicationLibUsb3Dxe.inf
!endif
###############  
## End of LibraryClasses.DXE_SMM_DRIVER section
###############

[LibraryClasses.X64.SMM_CORE]
  MemoryAllocationLib|MdeModulePkg/Library/PiSmmCoreMemoryAllocationLib/PiSmmCoreMemoryAllocationLib.inf
  SmmServicesTableLib|MdeModulePkg/Library/PiSmmCoreSmmServicesTableLib/PiSmmCoreSmmServicesTableLib.inf
  ReportStatusCodeLib|MdeModulePkg/Library/SmmReportStatusCodeLib/SmmReportStatusCodeLib.inf
  SmmCorePlatformHookLib|MdeModulePkg/Library/SmmCorePlatformHookLibNull/SmmCorePlatformHookLibNull.inf
  SmmMemLib|MdePkg/Library/SmmMemLib/SmmMemLib.inf

!if $(TPM_ENABLED) == TRUE
!if $(CRYPTO_BIN_ENABLE) == TRUE
  BaseCryptLib|$(PLATFORM_INTEL_RESTRICT_PACKAGE)/CryptoBin/BaseCryptLib/SmmCryptLib.inf
!else
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/SmmCryptLib.inf
!endif
!endif

!if $(INTEL_FPDT_ENABLE) == TRUE
  PerformanceLib|DeviceCommonPkg/Library/FpdtSmmCorePerformanceLib/FpdtSmmCorePerformanceLib.inf
  TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/DxeTscTimerLib.inf
!else
  PerformanceLib|MdePkg/Library/BasePerformanceLibNull/BasePerformanceLibNull.inf
!endif

!if $(TARGET) != RELEASE    
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/DxeDebugAgentLib.inf
  TimerLib|$(PLATFORM_PACKAGE)/Library/IntelPchAcpiTimerLib/IntelPchAcpiTimerLib.inf
!endif
###############  
## End of LibraryClasses.DXE_SMM_CORE section
###############

      
[LibraryClasses.X64.DXE_RUNTIME_DRIVER]
  ReportStatusCodeLib|MdeModulePkg/Library/RuntimeDxeReportStatusCodeLib/RuntimeDxeReportStatusCodeLib.inf
!if $(SECURE_BOOT_ENABLE) == TRUE
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/RuntimeCryptLib.inf
!endif
!if $(TPM_ENABLED) == TRUE
!if $(CRYPTO_BIN_ENABLE) == TRUE
  BaseCryptLib|$(PLATFORM_INTEL_RESTRICT_PACKAGE)/CryptoBin/BaseCryptLib/RuntimeCryptLib.inf
!else
  BaseCryptLib|CryptoPkg/Library/BaseCryptLib/RuntimeCryptLib.inf
!endif
!endif

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/DxeDebugAgentLib.inf
!endif
###############  
## End of LibraryClasses.DXE_RUNTIME_DRIVER section
###############


[LibraryClasses.common.UEFI_DRIVER]
  PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/DxeDebugAgentLib.inf
!endif

[LibraryClasses.X64.UEFI_APPLICATION]
  PcdLib|MdePkg/Library/DxePcdLib/DxePcdLib.inf

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/DxeDebugAgentLib.inf
!endif

###############  
## End of LibraryClasses.UEFI_DRIVER and UEFI_APPLICATION section
###############


################################################################################
#
# Library Section - list of all EDK/Framework libraries
#  THis is to be backwards compatible with the EDK 1 style libraries
#  NOTE all are in the EdkCompatiblityPkg
################################################################################
[Libraries.common]
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BaseLib/BaseLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BaseMemoryLib/BaseMemoryLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePrintLib/BasePrintLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BaseDebugLibNull/BaseDebugLibNull.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BaseIoLibIntrinsic/BaseIoLibIntrinsic.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePostCodeLibPort80/BasePostCodeLibPort80.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePostCodeLibDebug/BasePostCodeLibDebug.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BaseCacheMaintenanceLib/BaseCacheMaintenanceLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePciCf8Lib/BasePciCf8Lib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePciExpressLib/BasePciExpressLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePciLibCf8/BasePciLibCf8.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePciLibPciExpress/BasePciLibPciExpress.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePeCoffGetEntryPointLib/BasePeCoffGetEntryPointLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BasePeCoffLib/BasePeCoffLib.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BaseTimerLibLocalApic/BaseTimerLibLocalApic.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/BaseUefiDecompressLib/BaseUefiDecompressLib.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiDebugLibReportStatusCode/PeiDebugLibReportStatusCode.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/DxeDebugLibReportStatusCode/DxeDebugLibReportStatusCode.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiDxePostCodeLibReportStatusCode/PeiDxePostCodeLibReportStatusCode.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/SmmRuntimeDxeReportStatusCodeLib/SmmRuntimeDxeReportStatusCodeLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiHobLib/PeiHobLib.inf
  EdkCompatibilityPkg/Foundation/Ppi/EdkPpiLib.inf
  EdkCompatibilityPkg/Foundation/Library/Pei/PeiLib/PeiLib.inf
  EdkCompatibilityPkg/Compatibility/Library/UefiLanguageLib/UefiLanguageLib.inf
  EdkCompatibilityPkg/Foundation/Guid/EdkGuidLib.inf
  EdkCompatibilityPkg/Foundation/Efi/Protocol/EfiProtocolLib.inf
  EdkCompatibilityPkg/Foundation/Library/Dxe/EfiDriverLib/EfiDriverLib.inf
  EdkCompatibilityPkg/Foundation/Protocol/EdkProtocolLib.inf
  EdkCompatibilityPkg/Foundation/Framework/Protocol/EdkFrameworkProtocolLib.inf
[Libraries.IA32]
  EdkCompatibilityPkg/Foundation/Efi/Guid/EfiGuidLib.inf
  EdkCompatibilityPkg/Foundation/Framework/Guid/EdkFrameworkGuidLib.inf
  EdkCompatibilityPkg/Foundation/Library/EfiCommonLib/EfiCommonLib.inf
  EdkCompatibilityPkg/Foundation/Cpu/Pentium/CpuIA32Lib/CpuIA32Lib.inf
  EdkCompatibilityPkg/Foundation/Library/CompilerStub/CompilerStubLib.inf
  EdkCompatibilityPkg/Foundation/Framework/Ppi/EdkFrameworkPpiLib.inf
  EdkCompatibilityPkg/Foundation/Library/Pei/Hob/PeiHobLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiServicesTablePointerLibMm7/PeiServicesTablePointerLibMm7.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiServicesTablePointerLib/PeiServicesTablePointerLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiMemoryAllocationLib/PeiMemoryAllocationLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiServicesLib/PeiServicesLib.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiHobLib/PeiHobLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiReportStatusCodeLib/PeiReportStatusCodeLib.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiResourcePublicationLib/PeiResourcePublicationLib.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiSmbusLib/PeiSmbusLib.inf
#  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/PeiPerformanceLib/PeiPerformanceLib.inf
#  EdkCompatibilityPkg/Foundation/Library/Thunk16/Thunk16Lib.inf
  EdkCompatibilityPkg/Foundation/Core/Dxe/ArchProtocol/ArchProtocolLib.inf
#  $(CLIENT_COMMON_ECP_PACKAGE)/Library/ModuleDebugPeiLib/ModuleDebugPeiLib.inf
#  $(CLIENT_COMMON_ECP_PACKAGE)/Library/ModuleDebugEdkIIGlueLib/ModuleDebugEdkIIGlueLib.inf

  $(PLATFORM_PACKAGE)/Library/MultiPlatformLib/MultiPlatformLibBB.inf
[Libraries.X64]

  EdkCompatibilityPkg/Foundation/Efi/Guid/EfiGuidLib.inf
  EdkCompatibilityPkg/Foundation/Framework/Guid/EdkFrameworkGuidLib.inf
  EdkCompatibilityPkg/Foundation/Library/EfiCommonLib/EfiCommonLib.inf
  EdkCompatibilityPkg/Foundation/Cpu/Pentium/CpuIA32Lib/CpuIA32Lib.inf
  EdkCompatibilityPkg/Foundation/Library/CompilerStub/CompilerStubLib.inf
  EdkCompatibilityPkg/Foundation/Framework/Ppi/EdkFrameworkPpiLib.inf
  EdkCompatibilityPkg/Foundation/Core/Dxe/ArchProtocol/ArchProtocolLib.inf
  EdkCompatibilityPkg/Foundation/Library/Dxe/Hob/HobLib.inf
  EdkCompatibilityPkg/Foundation/Library/RuntimeDxe/EfiRuntimeLib/EfiRuntimeLib.inf
  EdkCompatibilityPkg/Foundation/Library/Dxe/EfiIfrSupportLib/EfiIfrSupportLib.inf
  EdkCompatibilityPkg/Foundation/Library/Dxe/Print/PrintLib.inf
  EdkCompatibilityPkg/Foundation/Library/Dxe/EfiScriptLib/EfiScriptLib.inf
  EdkCompatibilityPkg/Foundation/Library/Dxe/PrintLite/PrintLib.inf
  EdkCompatibilityPkg/Foundation/Library/Dxe/GraphicsLite/Graphics.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/UefiBootServicesTableLib/UefiBootServicesTableLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/DxeMemoryAllocationLib/DxeMemoryAllocationLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/UefiLib/UefiLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/DxeHobLib/DxeHobLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/UefiRuntimeServicesTableLib/UefiRuntimeServicesTableLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/DxeReportStatusCodeLib/DxeReportStatusCodeLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/HiiLib/HiiLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/UefiDevicePathLib/UefiDevicePathLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/UefiDriverModelLib/UefiDriverModelLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/DxeServicesTableLib/DxeServicesTableLib.inf
  EdkCompatibilityPkg/Foundation/Library/EdkIIGlueLib/Library/EdkDxeRuntimeDriverLib/EdkDxeRuntimeDriverLib.inf


################################################################################
#
# Pcd Section - list of all EDK II PCD Entries defined by this Platform
#
################################################################################
[PcdsFeatureFlag.common]
!if $(MINI_BIOS_ENABLE) == FALSE
  gEfiBdsPkgTokenSpaceGuid.PcdBdsFindDisplay|TRUE
  gPlatformModuleTokenSpaceGuid.PcdBdsDispatchAdditionalOprom|TRUE
  gEfiBdsPkgTokenSpaceGuid.PcdShortformBootSupport|TRUE
!else
  gEfiBdsPkgTokenSpaceGuid.PcdBdsFindDisplay|TRUE
  gPlatformModuleTokenSpaceGuid.PcdBdsDispatchAdditionalOprom|FALSE
  gEfiBdsPkgTokenSpaceGuid.PcdShortformBootSupport|TRUE
!endif
#
# If PcdDxeIplSwitchToLongMode is TRUE, DxeIpl will load a 64-bit DxeCore and switch to long mode to hand over to DxeCore.
#
  gEfiMdeModulePkgTokenSpaceGuid.PcdDxeIplSwitchToLongMode|TRUE

  gEfiMdeModulePkgTokenSpaceGuid.PcdBrowserGrayOutTextStatement|TRUE
#gEfiTianoModulePkgTokenSpaceGuid.PcdPlatformBdsConnectionControl|FALSE

!if $(CAPSULE_RESET_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdSupportUpdateCapsuleReset|TRUE
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdSupportUpdateCapsuleReset|FALSE
!endif
  gEfiMdeModulePkgTokenSpaceGuid.PcdFrameworkCompatibilitySupport|TRUE
  gEfiCpuTokenSpaceGuid.PcdCpuSmmEnableBspElection|FALSE
!if $(DATAHUB_STATUS_CODE_ENABLE) == TRUE
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdStatusCodeUseDataHub|TRUE
!else
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdStatusCodeUseDataHub|FALSE
!endif
  gEfiMdeModulePkgTokenSpaceGuid.PcdPeiCoreImageLoaderSearchTeSectionFirst|FALSE
!if $(TARGET) == RELEASE
  gEfiMdeModulePkgTokenSpaceGuid.PcdStatusCodeUseSerial|FALSE
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdStatusCodeUseSerial|FALSE
  gClientCommonModuleTokenSpaceGuid.PcdStatusCodeUseSerialPortPlatform|TRUE
!endif
  gEfiMdeModulePkgTokenSpaceGuid.PcdStatusCodeUseMemory|FALSE
!if $(ISA_SERIAL_STATUS_CODE_ENABLE) == TRUE
  gEfiSerialPortTokenSpaceGuid.PcdStatusCodeUseIsaSerial|TRUE
!else
  gEfiSerialPortTokenSpaceGuid.PcdStatusCodeUseIsaSerial|FALSE
!endif
!if $(USB_SERIAL_STATUS_CODE_ENABLE) == TRUE
  gEfiSerialPortTokenSpaceGuid.PcdStatusCodeUseUsbSerial|TRUE
!else
  gEfiSerialPortTokenSpaceGuid.PcdStatusCodeUseUsbSerial|FALSE
!endif
!if $(RAM_SERIAL_STATUS_CODE_ENABLE) == TRUE
  gEfiSerialPortTokenSpaceGuid.PcdStatusCodeUseRam|TRUE
!else
  gEfiSerialPortTokenSpaceGuid.PcdStatusCodeUseRam|FALSE
!endif
!if $(POSTCODE_STATUS_CODE_ENABLE) == TRUE
  gClientCommonModuleTokenSpaceGuid.PcdStatusCodeUsePostCode|TRUE
!else
  gClientCommonModuleTokenSpaceGuid.PcdStatusCodeUsePostCode|FALSE
!endif
!if $(BEEP_STATUS_CODE_ENABLE) == TRUE
  gClientCommonModuleTokenSpaceGuid.PcdStatusCodeUseBeep|TRUE
!else
  gClientCommonModuleTokenSpaceGuid.PcdStatusCodeUseBeep|FALSE
!endif

!if $(MPTABLE_ENABLE) == TRUE
  gClientCommonModuleTokenSpaceGuid.PcdMpTableSupport|TRUE
!else
  gClientCommonModuleTokenSpaceGuid.PcdMpTableSupport|FALSE
!endif

  ## This PCD specifies whether PS2 keyboard does a extended verification during start.
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdPs2KbdExtendedVerification|FALSE

  ## This PCD specifies whether PS2 mouse does a extended verification during start.
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdPs2MouseExtendedVerification|FALSE


  gEfiMdeModulePkgTokenSpaceGuid.PcdAtaAtapiPassThruForceIdePio|FALSE

!if $(VARIABLE_INFO_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdVariableCollectStatistics|TRUE
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdVariableCollectStatistics|FALSE
!endif

!if $(AHCI_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdAtaAtapiPassThruAhciSupport|TRUE
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdAtaAtapiPassThruAhciSupport|FALSE
!endif

!if $(SCSI_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdAtaAtapiPassThruScsiSupport|TRUE
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdAtaAtapiPassThruScsiSupport|FALSE
!endif
  gEfiCpuTokenSpaceGuid.PcdCpuSmmBlockStartupThisAp|TRUE
###############  
## End of PCD Feature Flag
###############

[PcdsFixedAtBuild.common]
!if $(MINNOW2_FSP_BUILD) == TRUE
  gEfiFspTokenSpaceGuid.PcdFlashMicroCodeOffset|0x60
# $(FLASH_AREA_BASE_ADDRESS)
  gEfiFspTokenSpaceGuid.PcdFlashAreaBaseAddress|0xFF800000
# $(FLASH_AREA_SIZE)
  gEfiFspTokenSpaceGuid.PcdFlashAreaSize|0x00800000
# $(FLASH_REGION_FSPBIN_BASE)
  gEfiFspTokenSpaceGuid.PcdFlashFvFspBase|0xFFCC0000
!endif 

!if $(PERFORMANCE_ENABLE) == TRUE
# if use FSP we dont need CAR address, but a temp memory address
!if $(MINNOW2_FSP_BUILD) == TRUE
  # in FSP, when this got used, the memory already is up
  gEfiCpuTokenSpaceGuid.PcdTemporaryRamBase|0x00080000
!else
  gEfiCpuTokenSpaceGuid.PcdTemporaryRamBase|0xFEF80000
!endif 
  gEfiCpuTokenSpaceGuid.PcdTemporaryRamSize|0x00010000

!else
  !if $(MINNOW2_FSP_BUILD) == TRUE
    gEfiCpuTokenSpaceGuid.PcdTemporaryRamBase|0x00080000
  !else
    gEfiCpuTokenSpaceGuid.PcdTemporaryRamBase|0xFEF80000
  !endif 
  gEfiCpuTokenSpaceGuid.PcdTemporaryRamSize|0x00010000
  gEfiCpuTokenSpaceGuid.PcdPeiTemporaryRamStackSize|0x3C00
!endif

!if $(INTEL_FPDT_ENABLE) == TRUE
      gEfiMdeModulePkgTokenSpaceGuid.PcdExtFpdtBootRecordPadSize|0x1000
!endif

!if $(SECURE_BOOT_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdMaxVariableSize|0x22000
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdMaxVariableSize|0x4000
!endif
#  gPcAtChipsetPkgTokenSpaceGuid.Pcd8259LegacyModeMask|0x0eB8
  gEfiMdeModulePkgTokenSpaceGuid.PcdHwErrStorageSize|0x00000800
  gEfiMdeModulePkgTokenSpaceGuid.PcdMaxHardwareErrorVariableSize|0x400
  gEfiCpuTokenSpaceGuid.PcdCpuIEDRamSize|0x400000
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdS3AcpiReservedMemorySize|0x10000
  gEfiMdeModulePkgTokenSpaceGuid.PcdPeiCoreMaxPeimPerFv|50
  gEfiMdeModulePkgTokenSpaceGuid.PcdSrIovSupport|FALSE
  gEfiMdeModulePkgTokenSpaceGuid.PcdAriSupport|FALSE
  gEfiMdeModulePkgTokenSpaceGuid.PcdPeiCoreMaxPpiSupported|128
  gEfiCpuTokenSpaceGuid.PcdCpuSmmApSyncTimeout|1000
!if $(S4_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdResetOnMemoryTypeInformationChange|TRUE
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdResetOnMemoryTypeInformationChange|FALSE
!endif
!if $(TARGET) == RELEASE
  gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x0
  gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0x3
!else
  gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2F
  gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0x07
!endif
!if $(PERFORMANCE_ENABLE) == TRUE
  gEfiMdePkgTokenSpaceGuid.PcdPerformanceLibraryPropertyMask|0x1
!if $(INTEL_FPDT_ENABLE) == TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdMaxPeiPerformanceLogEntries|120
!else
  gEfiMdeModulePkgTokenSpaceGuid.PcdMaxPeiPerformanceLogEntries|60
!endif
!endif

  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdEbdaReservedMemorySize|0x10000
  gEfiMdeModulePkgTokenSpaceGuid.PcdLoadModuleAtFixAddressEnable|$(TOP_MEMORY_ADDRESS)
  gEfiMdeModulePkgTokenSpaceGuid.PcdBrowserSubtitleTextColor|0x0
  gEfiMdeModulePkgTokenSpaceGuid.PcdBrowserFieldTextColor|0x01
  gClientCommonModuleTokenSpaceGuid.PcdMaxConsoleDeviceNum|0x05
  gEfiCpuTokenSpaceGuid.PcdCpuIEDEnabled|TRUE
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdBiosVideoCheckVbeEnable|TRUE
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdBiosVideoCheckVgaEnable|TRUE

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x17
  gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0x07
  gEfiMdeModulePkgTokenSpaceGuid.PcdSerialUseHardwareFlowControl|FALSE
!endif
gEfiIchTokenSpaceGuid.PcdPeiIchEhciControllerMemoryBaseAddress|0xFC000000


[PcdsFixedAtBuild.IA32.PEIM, PcdsFixedAtBuild.IA32.PEI_CORE, PcdsFixedAtBuild.IA32.SEC]
!if $(TARGET) == RELEASE
  gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x0
  gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0x3
!else
  gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2E
  gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0x07
!endif
###############  
## End of PCD Fixed at build SEC and PEI and Common
###############


[PcdsPatchableInModule.common]
  gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x803805c6
  gEfiMdePkgTokenSpaceGuid.PcdPciExpressBaseAddress|0x$(PLATFORM_PCIEXPRESS_BASE)
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdLegacyBiosCacheLegacyRegion|FALSE

  ## This PCD specifies whether to use the optimized timing for best PS2 detection performance.
  #  Note this PCD could be set to TRUE for best boot performance and set to FALSE for best device compatibility.
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdFastPS2Detection|TRUE

[PcdsDynamicHii.common.DEFAULT]
  gEfiMdePkgTokenSpaceGuid.PcdPlatformBootTimeOut|L"Timeout"|gEfiGlobalVariableGuid|0x0|5 # Variable: L"Timeout"
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom1Implemented|L"PNP0501_0_VV"|gEfiSioVariableGuid|0x0|0
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2Implemented|L"PNP0510_1_VV"|gEfiSioVariableGuid|0x0|0
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom1ComBase1|L"PNP0501_0_VV"|gEfiSioVariableGuid|0x1|0x3F8
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2ComBase1|L"PNP0510_1_VV"|gEfiSioVariableGuid|0x1|0x2F8
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2ComBase2|L"PNP0510_1_VV"|gEfiSioVariableGuid|0x3|0x7E8
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom1ComIrq1|L"PNP0501_0_VV"|gEfiSioVariableGuid|0x5|0x4
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2ComIrq1|L"PNP0510_1_VV"|gEfiSioVariableGuid|0x5|0x3
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2ComDma1|L"PNP0510_1_VV"|gEfiSioVariableGuid|0x7|0x3
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom1Enable|L"PNP0501_0_NV"|gEfiSioVariableGuid|0x0|1
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2Enable|L"PNP0510_1_NV"|gEfiSioVariableGuid|0x0|1
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom1ComPrsId|L"PNP0501_0_NV"|gEfiSioVariableGuid|0x1|0
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2ComPrsId|L"PNP0510_1_NV"|gEfiSioVariableGuid|0x1|0
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom1ComMode|L"PNP0501_0_NV"|gEfiSioVariableGuid|0x2|0
  gClientCommonModuleTokenSpaceGuid.PcdSmscLpc100xCom2ComMode|L"PNP0510_1_NV"|gEfiSioVariableGuid|0x2|0
  gClientCommonModuleTokenSpaceGuid.PcdPlatformMemoryCheck|L"MemoryCheck"|gClientCommonModuleTokenSpaceGuid|0x0|0
  gEfiMdePkgTokenSpaceGuid.PcdHardwareErrorRecordLevel|L"HwErrRecSupport"|gEfiGlobalVariableGuid|0x0|1 # Variable: L"HwErrRecSupport"
  gEfiIntelFrameworkModulePkgTokenSpaceGuid.PcdBootState|L"BootState"|gEfiBootStateGuid|0x0|TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|L"ConOutConfig"|gClientCommonModuleTokenSpaceGuid|0x0|100
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|L"ConOutConfig"|gClientCommonModuleTokenSpaceGuid|0x4|31

[PcdsDynamicDefault.common.DEFAULT]
  gEfiMdeModulePkgTokenSpaceGuid.PcdS3BootScriptTablePrivateDataPtr|0x0
  !if $(TPM_ENABLED) == TRUE
    gEfiSecurityPkgTokenSpaceGuid.PcdTpmInstanceGuid|{0x7b, 0x3a, 0xcd, 0x72, 0xA5, 0xFE, 0x5e, 0x4f, 0x91, 0x65, 0x4d, 0xd1, 0x21, 0x87, 0xbb, 0x13}
  !endif
  !if $(FTPM_ENABLE) == TRUE
    gEfiSecurityPkgTokenSpaceGuid.PcdTpmInstanceGuid|{0x7b, 0x3a, 0xcd, 0x72, 0xA5, 0xFE, 0x5e, 0x4f, 0x91, 0x65, 0x4d, 0xd1, 0x21, 0x87, 0xbb, 0x13}
  !endif

  ## This PCD defines the video horizontal resolution.
  #  This PCD could be set to 0 then video resolution could be at highest resolution.
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|0
  ## This PCD defines the video vertical resolution.
  #  This PCD could be set to 0 then video resolution could be at highest resolution.
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|0

  ## This PCD defines the Console output column and the default value is 25 according to UEFI spec.
  #  This PCD could be set to 0 then console output could be at max column and max row.
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|31
  ## This PCD defines the Console output row and the default value is 80 according to UEFI spec.
  #  This PCD could be set to 0 then console output could be at max column and max row.
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|100
  
  ## The PCD is used to specify the video horizontal resolution of text setup.   
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|800
  ## The PCD is used to specify the video vertical resolution of text setup.
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|600
  ## The PCD is used to specify the console output column of text setup.
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|100
  ## The PCD is used to specify the console output column of text setup.
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|31

!if $(TPM_ENABLED) == TRUE
  gEfiSecurityPkgTokenSpaceGuid.PcdTpmInitializationPolicy|1
  gEfiSecurityPkgTokenSpaceGuid.PcdTpmScrtmPolicy|1
!endif

[PcdsDynamicExDefault.common.DEFAULT]
  gEfiVLVTokenSpaceGuid.PcdTCSmbaIoBaseAddress|0x1040
  gEfiVLVTokenSpaceGuid.PcdEmmcManufacturerId|0
  gEfiVLVTokenSpaceGuid.PcdProductSerialNumber|0
  gEfiVLVTokenSpaceGuid.PcdMeasuredBootEnable|TRUE
  gEfiVLVTokenSpaceGuid.PcdFTPMErrorOccur|FALSE
  gEfiVLVTokenSpaceGuid.PcdFTPMErrorSkip|FALSE
  gEfiVLVTokenSpaceGuid.PcdFTPMCommand|0
  gEfiVLVTokenSpaceGuid.PcdFTPMResponse|0
  gEfiVLVTokenSpaceGuid.PcdFTPMNotRespond|FALSE
  gEfiVLVTokenSpaceGuid.PcdFTPMStatus|0
  gEfiMdeModulePkgTokenSpaceGuid.PcdS3BootScriptTablePrivateSmmDataPtr|0
  gEfiMdeModulePkgTokenSpaceGuid.PcdS3BootScriptTablePrivateDataPtr|0
  gEfiCpuTokenSpaceGuid.PcdCpuS3DataAddress|0
  gEfiCpuTokenSpaceGuid.PcdCpuHotPlugDataAddress|0
  gEfiCpuTokenSpaceGuid.PcdCpuCallbackSignal|0
  gEfiCpuTokenSpaceGuid.PcdCpuConfigContextBuffer|0
  gEfiVLVTokenSpaceGuid.PcdCpuLockBoxDataAddress|0
  gEfiVLVTokenSpaceGuid.PcdCpuSmramCpuDataAddress|0
  gEfiVLVTokenSpaceGuid.PcdCpuLockBoxSize|0

###############  
## End of PCD Patchable and Dynamic
###############
 

###################################################################################################
#
# Components Section - list of the modules and components that will be processed by compilation
#                      tools and the EDK II tools to generate PE32/PE32+/Coff image files.
#
# Note: The EDK II DSC file is not used to specify how compiled binary images get placed
#       into firmware volume images. This section is just a list of modules to compile from
#       source into UEFI-compliant binaries.
#       It is the FDF file that contains information on combining binary files into firmware
#       volume images, whose concept is beyond UEFI and is described in PI specification.
#       Binary modules do not need to be listed in this section, as they should be
#       specified in the FDF file. For example: Shell binary (Shell_Full.efi), FAT binary (Fat.efi),
#       Logo (Logo.bmp), and etc.
#       There may also be modules listed in this section that are not required in the FDF file,
#       When a module listed here is excluded from FDF file, then UEFI-compliant binary will be
#       generated for it, but the binary will not be put into any firmware volume.
#
###################################################################################################
[Components.IA32]
  IA32FamilyCpuPkg/SecCore/SecCore.inf{
    <LibraryClasses>
      DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
      DebugAgentLib|MdeModulePkg/Library/DebugAgentLibNull/DebugAgentLibNull.inf
      !if $(SOURCE_DEBUG_ENABLE) == TRUE
        SerialPortLib|MdeModulePkg/Library/BaseSerialPortLib16550/BaseSerialPortLib16550.inf
      !else
        SerialPortLib|$(PLATFORM_PACKAGE)/Library/SerialPortLib/SerialPortLib.inf
      !endif
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x0
      gEfiMdePkgTokenSpaceGuid.PcdReportStatusCodePropertyMask|0x0
  }
  
  !if $(MINNOW2_FSP_BUILD) == TRUE
  FspPkg/SecCore/SecCore.inf
  FspPkg/FspWrapperPei/FspWrapperPei.inf
  !endif
  
  MdeModulePkg/Core/Pei/PeiMain.inf {
!if $(TARGET) == DEBUG
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2E
!endif
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x80000046
  }

  $(PLATFORM_PACKAGE)/MonoStatusCode/MonoStatusCode.inf {
!if $(TARGET) == DEBUG
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2E
!endif
  }
  Vlv2DeviceRefCodePkg/ValleyView2Soc/NorthCluster/MemoryInit/Pei/MemoryInit.inf {
    <LibraryClasses>
      SerialPortLib|$(PLATFORM_PACKAGE)/Library/SerialPortLib/SerialPortLib.inf  
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x80000046
    <BuildOptions>

          *_*_IA32_CC_FLAGS      = /D LPDDR2_SUPPORT=0 /D DDR3_SUPPORT=1 /D LPDDR3_SUPPORT=0  
      !if $(MRCDEBUG_ENABLE) == TRUE
      *_*_IA32_CC_FLAGS      = /D DEBUG_MODE=1
      !endif
      !if $(SEC_ENABLE)==TRUE
        *_*_IA32_CC_FLAGS = /D SEC_SUPPORT_FLAG
      !endif
      !if $(FTPM_ENABLE)==TRUE
        *_*_IA32_CC_FLAGS = /D FTPM_ENABLE
      !endif
      !if $(TPM_ENABLED)==TRUE
        *_*_IA32_CC_FLAGS = /D TPM_ENABLED
      !endif
      !if $(DDR_DUAL_CHANNEL_ENABLE)==TRUE
        *_*_IA32_CC_FLAGS = /DDDR_DUAL_CHANNEL=1
      !endif
  }
  
  Vlv2DeviceRefCodePkg/Txe/SeCUma/SeCUmaPeim.inf

!if $(FTPM_ENABLE) == TRUE  
  Vlv2DeviceRefCodePkg/Txe/fTPM/Pei/fTPMInitPeim.inf
!endif

## Platform PEIM  
  $(PLATFORM_PACKAGE)/PlatformPei/PlatformPeiBB.inf {
    <LibraryClasses>
      SeCUmaLib|Vlv2DeviceRefCodePkg/Txe/SeCUma/SeCUma.inf
      #fTPMInitLib|Vlv2DeviceRefCodePkg/Txe/fTPM/Pei/fTPMInitPei.inf
      !if $(SeC_DEBUG_INFO_ENABLE) == TRUE
          <BuildOptions>
            *_*_IA32_CC_FLAGS      = /DSeC_DEBUG_INFO=1
      !else
          <BuildOptions>
            *_*_IA32_CC_FLAGS      = /DSeC_DEBUG_INFO=0
      !endif
  
!if $(TARGET) == DEBUG
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2E
!endif
  }

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  SourceLevelDebugPkg/DebugAgentPei/DebugAgentPei.inf{
    <LibraryClasses>
      PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
      DebugAgentLib|SourceLevelDebugPkg/Library/DebugAgent/SecPeiDebugAgentLib.inf
      PlatformHookLib|MdeModulePkg/Library/BasePlatformHookLibNull/BasePlatformHookLibNull.inf
      SerialPortLib|MdeModulePkg/Library/BaseSerialPortLib16550/BaseSerialPortLib16550.inf
    }
!endif


!if $(TPM_ENABLED) == TRUE
  SecurityPkg\Tcg\PhysicalPresencePei\PhysicalPresencePei.inf
  SecurityPkg\Tcg\TcgPei\TcgPei.inf {
    <LibraryClasses>
      NULL|SecurityPkg\Library\HashInstanceLibSha1\HashInstanceLibSha1.inf
      NULL|SecurityPkg\Library\HashInstanceLibSha256\HashInstanceLibSha256.inf
      PcdLib|MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
}
!endif

!if $(FTPM_ENABLE) == TRUE
 Vlv2DeviceRefCodePkg\Txe\Tpm2DeviceSec\PEI\Tpm2DeviceSeCPeim.inf {
   <LibraryClasses>
     PcdLib|MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
 }
!endif

## Platform PEIM
 $(PLATFORM_PACKAGE)/PlatformInitPei/PlatformEarlyInit.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x803805c6
    <LibraryClasses>
!if $(TARGET) != RELEASE
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif
      PcdLib|MdePkg/Library/PeiPcdLib/PeiPcdLib.inf
    <BuildOptions>	  
!if $(SOURCE_DEBUG_ENABLE_USE_USB3)==TRUE
        *_*_IA32_CC_FLAGS = /D SOURCE_DEBUG_ENABLE_USE_USB3
!endif

  }

  $(PLATFORM_PACKAGE)/FvInfoPei/FvInfoPei.inf

#  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SampleCode/PchPolicyInit/Pei/PchPolicyInitPei.inf

  Vlv2DeviceRefCodePkg/ValleyView2Soc/NorthCluster/VlvInit/Pei/VlvInitPeim.inf
!if $(PCIESC_ENABLE) == TRUE
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/PchInit/Pei/PchEarlyInitPeim.inf {
    <LibraryClasses>
      DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x2E
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x80000046
  }
!endif
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/PchInit/Pei/PchInitPeim.inf


  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Smbus/Pei/PchSmbusArpDisabled.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Spi/Pei/PchSpiPeim.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/SmmAccess/Pei/SmmAccess.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SmmControl/Pei/SmmControl.inf
  MdeModulePkg/Universal/PCD/Pei/Pcd.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/CpuInit/Pei/CpuPeim.inf
  UefiCpuPkg/CpuIoPei/CpuIoPei.inf
  UefiCpuPkg/Universal/Acpi/S3Resume2Pei/S3Resume2Pei.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/CpuS3/MpS3.inf
  EdkCompatibilityPkg/Compatibility/AcpiVariableHobOnSmramReserveHobThunk/AcpiVariableHobOnSmramReserveHobThunk.inf
  IA32FamilyCpuPkg/PiSmmCommunication/PiSmmCommunicationPei.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Usb/Pei/PchUsb.inf
!if $(CAPSULE_ENABLE) == TRUE
  MdeModulePkg/Universal/CapsulePei/CapsulePei.inf
!endif
  MdeModulePkg/Core/DxeIplPeim/DxeIpl.inf {
    <LibraryClasses>
!if $(LZMA_ENABLE) == TRUE
    NULL|IntelFrameworkModulePkg/Library/LzmaCustomDecompressLib/LzmaCustomDecompressLib.inf
!endif
  }


 MdeModulePkg/Universal/Variable/Pei/VariablePei.inf

 MdeModulePkg/Universal/FaultTolerantWritePei/FaultTolerantWritePei.inf

!if $(FTPM_ENABLE) == TRUE
   SecurityPkg/Tcg/TrEEPei/TrEEPei.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x80000046
    <LibraryClasses>
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
      NULL|SecurityPkg\Library\HashInstanceLibSha1\HashInstanceLibSha1.inf
      NULL|SecurityPkg\Library\HashInstanceLibSha256\HashInstanceLibSha256.inf
      PcdLib|MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
  }
!endif
!if $(TPM_ENABLED) == TRUE
  SecurityPkg\Tcg\TrEEConfig\TrEEConfigPei.inf {
    <LibraryClasses>
      PcdLib|MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
  }
!endif  
!if $(ACPI50_ENABLE) == TRUE
  MdeModulePkg/Universal/Acpi/FirmwarePerformanceDataTablePei/FirmwarePerformancePei.inf{
    <LibraryClasses>
      TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/PeiTscTimerLib.inf
  }
  
!endif
!if $(INTEL_FPDT_ENABLE) == TRUE
  DeviceCommonPkg/Universal/FpdtPei/FpdtPei.inf
!endif
!if $(PERFORMANCE_ENABLE) == TRUE  
  MdeModulePkg/Universal/ReportStatusCodeRouter/Pei/ReportStatusCodeRouterPei.inf
!endif 

###############  
## End of SEC and PEI Modules to Build
###############

[Components.X64]
  !if $(MINNOW2_FSP_BUILD) == TRUE
  FspPkg/FspWrapperDxe/FspWrapperDxe.inf
  !endif
  #
  # EDK II Related Platform codes
  #
  MdeModulePkg/Core/Dxe/DxeMain.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x80000046
    <LibraryClasses>
!if $(DXE_CRC32_SECTION_ENABLE) == TRUE
      NULL|MdeModulePkg/Library/DxeCrc32GuidedSectionExtractLib/DxeCrc32GuidedSectionExtractLib.inf
!endif
!if $(LZMA_ENABLE) == TRUE
      NULL|IntelFrameworkModulePkg/Library/LzmaCustomDecompressLib/LzmaCustomDecompressLib.inf
!endif
!if $(TARGET) != RELEASE
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif
  }
  IntelFrameworkModulePkg/Universal/Acpi/AcpiS3SaveDxe/AcpiS3SaveDxe.inf {
    <PcdsPatchableInModule>
        gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0xF0000043
    <PcdsFixedAtBuild>
        gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27
    <LibraryClasses>
    !if $(TARGET) != RELEASE  
          DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
    !endif 
       <BuildOptions>
#        MSFT:*_*_*_CC_FLAGS = /D MDEPKG_NDEBUG
        ICC:*_*_*_CC_FLAGS = /D MDEPKG_NDEBUG
        GCC:*_*_*_CC_FLAGS = -D MDEPKG_NDEBUG
  }
  MdeModulePkg/Universal/PCD/Dxe/Pcd.inf {
    <LibraryClasses>
      PcdLib|MdePkg/Library/BasePcdLibNull/BasePcdLibNull.inf
  }
#  MdeModulePkg/Universal/Acpi/S3SaveStateDxe/S3SaveStateDxe.inf
#  EdkCompatibilityPkg\Compatibility\BootScriptSaveOnS3SaveStateThunk\BootScriptSaveOnS3SaveStateThunk.inf
  IntelFrameworkModulePkg/Universal/CpuIoDxe/CpuIoDxe.inf
  UefiCpuPkg/CpuIo2Dxe/CpuIo2Dxe.inf
!if $(PERFORMANCE_ENABLE) == TRUE  
  MdeModulePkg/Universal/ReportStatusCodeRouter/Pei/ReportStatusCodeRouterPei.inf
!endif  
  MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf  {
    <LibraryClasses>
!if $(TARGET) != RELEASE
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif
  }

!if $(CAPSULE_ENABLE) == TRUE
  MdeModulePkg/Universal/CapsulePei/CapsuleX64.inf {
    <LibraryClasses>
    PcdLib|MdePkg/Library/PeiPcdLib/PeiPcdLib.inf
    MemoryAllocationLib|MdePkg/Library/PeiMemoryAllocationLib/PeiMemoryAllocationLib.inf
    HobLib|MdePkg/Library/PeiHobLib/PeiHobLib.inf
    UsbDebugPortLib|DeviceCommonPkg/Library/UsbDebugPortLib/UsbDebugPortLibPei.inf
  }
!endif

  MdeModulePkg/Universal/ReportStatusCodeRouter/Smm/ReportStatusCodeRouterSmm.inf
  MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf{
    <LibraryClasses>
!if $(SECURE_BOOT_ENABLE) == TRUE
      NULL|SecurityPkg/Library/DxeImageVerificationLib/DxeImageVerificationLib.inf
!endif
!if $(USER_IDENTIFICATION_ENABLE)
      NULL|SecurityPkg/Library/DxeDeferImageLoadLib/DxeDeferImageLoadLib.inf
!endif
!if $(TPM_ENABLED) == TRUE
      NULL|SecurityPkg/Library/DxeTpmMeasureBootLib/DxeTpmMeasureBootLib.inf
!endif
!if $(FTPM_ENABLE) == TRUE
      NULL|SecurityPkg/Library/DxeTpm2MeasureBootLib/DxeTpm2MeasureBootLib.inf
!endif
  }
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/CpuInit/Dxe/MpCpu.inf{
    <LibraryClasses>
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
  }
  $(PLATFORM_PACKAGE)/Metronome/LegacyMetronome.inf
  
  IntelFrameworkModulePkg/Universal/BdsDxe/BdsDxe.inf{
    <LibraryClasses>
      OpensslLib|CryptoPkg/Library/OpensslLib/OpensslLib.inf
      IntrinsicLib|CryptoPkg/Library/IntrinsicLib/IntrinsicLib.inf
      PlatformSecureLib|SecurityPkg\Library\PlatformSecureLibNull\PlatformSecureLibNull.inf
      BaseCryptLib|CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf     
      PlatformBdsLib|$(PLATFORM_PACKAGE)/Library/PlatformBdsLib/PlatformBdsLib_BB.inf
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
      SerialPortLib|$(PLATFORM_PACKAGE)/Library/SerialPortLib/SerialPortLib.inf
    !if $(FTPM_ENABLE) == TRUE  
      Tpm2DeviceLib|Vlv2DeviceRefCodePkg\Txe\Library\Tpm2DeviceLibSeCDxe\Tpm2DeviceLibSeC.inf
    !else
      TrEEPhysicalPresenceLib|$(PLATFORM_PACKAGE)/Library/DxeTrEEPhysicalPresenceLibNull/DxeTrEEPhysicalPresenceLibNull.inf
    !endif  
      
  }
  
  $(PLATFORM_PACKAGE)\UiApp\UiApp.inf

  MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  MdeModulePkg/Universal/FaultTolerantWriteDxe/FaultTolerantWriteDxe.inf
  #
  #Override: Disable assert for simics
  #
  
  MdeModulePkg/Universal/Variable/RuntimeDxe/VariableSmmRuntimeDxe.inf
  MdeModulePkg/Universal/Variable/RuntimeDxe/VariableSmm.inf{  
    <LibraryClasses>
      NULL|MdeModulePkg/Library/VarCheckUefiLib/VarCheckUefiLib.inf      
      #SerialPortLib|$(PLATFORM_PACKAGE)/Library/SerialPortLib/SerialPortLib.inf  
  }
  $(PLATFORM_PACKAGE)/FvbRuntimeDxe/FvbSmm.inf
  MdeModulePkg/Universal/FaultTolerantWriteDxe/FaultTolerantWriteSmm.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Spi/Smm/PchSpiSmm.inf  
!if $(SECURE_BOOT_ENABLE) == TRUE

  SecurityPkg/VariableAuthenticated/SecureBootConfigDxe/SecureBootConfigDxe.inf {
    <LibraryClasses>
      PlatformSecureLib|SecurityPkg\Library\PlatformSecureLibNull\PlatformSecureLibNull.inf
    <BuildOptions>
      #
      # Specify GUID gEfiIfrBootMaintenanceGuid, to install Secure Boot Configuration menu
      # into Boot Maintenance Manager menu
      #
      *_*_*_VFR_FLAGS   = -g b2dedc91-d59f-48d2-898a-12490c74a4e0
  }

!endif
   MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf {
    <LibraryClasses> 
      FileHandleLib|MdePkg/Library/UefiFileHandleLib/UefiFileHandleLib.inf
  }
 
  MdeModulePkg/Universal/MonotonicCounterRuntimeDxe/MonotonicCounterRuntimeDxe.inf
  PcAtChipsetPkg/PcatRealTimeClockRuntimeDxe/PcatRealTimeClockRuntimeDxe.inf
  MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
 
  $(PLATFORM_PACKAGE)/FvbRuntimeDxe/FvbRuntimeDxe.inf
  
  $(PLATFORM_PACKAGE)/PlatformSetupDxe/PlatformSetupDxeVLVA0BB.inf
  
!if $(DATAHUB_ENABLE) == TRUE
  IntelFrameworkModulePkg/Universal/DataHubDxe/DataHubDxe.inf {
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdMaximumLinkedListLength|0
  }
!endif
  IntelFrameworkModulePkg/Universal/StatusCode/DatahubStatusCodeHandlerDxe/DatahubStatusCodeHandlerDxe.inf
  MdeModulePkg/Universal/MemoryTest/NullMemoryTestDxe/NullMemoryTestDxe.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/S3Support/Dxe/PchS3Support.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0xF0000043
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27      
    <LibraryClasses>
#      DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
#      SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
  }
  !if $(USE_HPET_TIMER) == TRUE
    PcAtChipsetPkg/HpetTimerDxe/HpetTimerDxe.inf
  !else
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SmartTimer/Dxe/SmartTimer.inf {
    <LibraryClasses>
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
  }
  !endif
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/SmmControl/RuntimeDxe/SmmControl.inf

  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Smbus/Dxe/PchSmbusDxe.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/LegacyInterrupt/Dxe/LegacyInterrupt.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/ActiveBios/Dxe/ActiveBios.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Reset/RuntimeDxe/PchReset.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/PchInit/Dxe/PchInitDxe.inf{
    <PcdsPatchableInModule>
        gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0xF0000043
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27
    <LibraryClasses>
!if $(TARGET) != RELEASE
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
  }
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/PchSmiDispatcher/Smm/PchSmiDispatcher.inf

!if $(PCIESC_ENABLE) == TRUE
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Pcie/Smm/PchPcieSmm.inf
!endif
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Spi/RuntimeDxe/PchSpiRuntime.inf {
    <LibraryClasses>
    PciLib|Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Library/DxeRuntimePciLibPciExpress/DxeRuntimePciLibPciExpress.inf
  }
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SampleCode/PchPolicyInit/Dxe/PchPolicyInitDxe.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SampleCode/BiosWriteProtect/Smm/PchBiosWriteProtect.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/SmmAccess/Dxe/SmmAccess.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/NorthCluster/PciHostBridge/Dxe/PciHostBridge.inf{ 
    <BuildOptions>
      *_*_X64_CC_FLAGS = /O1=/Od
  }
  Vlv2DeviceRefCodePkg/ValleyView2Soc/NorthCluster/VlvInit/Dxe/VlvInit.inf{
    <LibraryClasses>
!if $(TARGET) != RELEASE
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
  }
  
  IntelFrameworkModulePkg\Universal\LegacyRegionDxe\LegacyRegionDxe.inf

  NewProjectPkg/VlvPlatformInitDxe/VlvPlatformInit.inf{
    <LibraryClasses>
!if $(TARGET) != RELEASE
      DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
!endif
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
  }

  $(PLATFORM_RC_PACKAGE)/Platform/Dptf/Dxe/Dptf.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/Pnp/Dxe/PnpDxe.inf

!if $(SEC_ENABLE) == TRUE
  Vlv2DeviceRefCodePkg/Txe/Heci/Dxe/Hecidrv.inf {
!if $(SEC_DEBUG_INFO_ENABLE) == TRUE
    <BuildOptions>
      *_*_X64_CC_FLAGS      = /DSEC_DEBUG_INFO=1
!else
    <BuildOptions>
      *_*_X64_CC_FLAGS      = /DSEC_DEBUG_INFO=0
!endif
  }
  Vlv2DeviceRefCodePkg\Platform\SeCPolicyInitDxe\SeCPolicyInitDxe.inf {
    <LibraryClasses>
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
      Tpm2DeviceLib|Vlv2DeviceRefCodePkg\Txe\Library\Tpm2DeviceLibSeCDxe\Tpm2DeviceLibSeC.inf
  }
!endif

!if $(FTPM_ENABLE) == TRUE
  Vlv2DeviceRefCodePkg\Txe\Tpm2DeviceSec\DXE\Tpm2DeviceSeCDxe.inf
  SecurityPkg\Tcg\MemoryOverwriteControl\TcgMor.inf
  SecurityPkg\Tcg\MemoryOverwriteRequestControlLock\TcgMorLockSmm.inf
  SecurityPkg\Tcg\TrEEDxe\TrEEDxe.inf{
    <LibraryClasses>
      NULL|SecurityPkg\Library\HashInstanceLibSha1\HashInstanceLibSha1.inf
      NULL|SecurityPkg\Library\HashInstanceLibSha256\HashInstanceLibSha256.inf
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
      Tpm2DeviceLib|Vlv2DeviceRefCodePkg\Txe\Library\Tpm2DeviceLibSeCDxe\Tpm2DeviceLibSeC.inf
  }
  Vlv2DeviceRefCodePkg\Txe\fTPM\Smm\FtpmSmm.inf{
    <LibraryClasses>
      Tpm2DeviceLib|Vlv2DeviceRefCodePkg\Txe\Library\Tpm2DeviceLibSeC\Tpm2DeviceLibSeC.inf
  }
!endif
!if $(TPM_ENABLED) == TRUE
  SecurityPkg\Tcg\TrEEConfig\TrEEConfigPei.inf {
    <LibraryClasses>
      PcdLib|MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
  }
  
  SecurityPkg\Tcg\TcgConfigDxe\TcgConfigDxe.inf { 
    <LibraryClasses>
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
    <BuildOptions> 
      #
      # specify GUID gEfiIfrNotInTPVPageGuid, this page will not
      # be showed in TPV page.
      #
      *_*_*_VFR_FLAGS   = -g e58809f8-fbc1-48e2-883a-a30fdc4b441e
  }
  
  SecurityPkg\Tcg\TcgDxe\TcgDxe.inf {
    <LibraryClasses>
      PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
  }
  SecurityPkg\Tcg\TcgSmm\TcgSmm.inf
!endif
!if $(AT_ENABLE) == TRUE
   Vlv2DeviceRefCodePkg/Txe/TDT/Dxe/Tdt.inf
   NewProjectPkg\TdtPlatformPolicy\TdtPlatformPolicy.inf
!endif

#######
# EDK II Related Platform Modules X64 (DXE UEFI BDS)
#######

  $(PLATFORM_PACKAGE)/PlatformSmm/PlatformBB.inf{
    <LibraryClasses>
    !if $(TARGET) != RELEASE
          DebugLib|MdePkg/Library/BaseDebugLibSerialPort/BaseDebugLibSerialPort.inf
    !endif
    PcdLib|MdePkg\Library\DxePcdLib\DxePcdLib.inf
  }
  $(PLATFORM_PACKAGE)/PlatformInfoDxe/PlatformInfoDxe.inf
  $(PLATFORM_PACKAGE)/PlatformCpuInfo/PlatformCpuInfoDxe.inf
  $(PLATFORM_PACKAGE)/PlatformDxe/PlatformBB.inf

  $(PLATFORM_PACKAGE)/PciPlatform/PciPlatform.inf
  $(PLATFORM_PACKAGE)/SaveMemoryConfig/SaveMemoryConfig.inf
  $(PLATFORM_PACKAGE)/PlatformCpuPolicy/PlatformCpuPolicy.inf
  $(PLATFORM_PACKAGE)/PpmPolicy/PpmPolicy.inf
  $(PLATFORM_PACKAGE)/SmramSaveInfoHandlerSmm/SmramSaveInfoHandlerSmm.inf
!if $(GOP_DRIVER_ENABLE) == TRUE
  $(PLATFORM_PACKAGE)/PlatformGopPolicy/PlatformGopPolicyBB.inf
 
!endif


  #
  # SMM
  #
  MdeModulePkg/Core/PiSmmCore/PiSmmIpl.inf
  MdeModulePkg/Core/PiSmmCore/PiSmmCore.inf
  IA32FamilyCpuPkg/PiSmmCpuDxeSmm/PiSmmCpuDxeSmm.inf
  #
  #Override: Fix 2 SliverMont cases in PiSmmCpuDxeSmm
  #
  #$(PLATFORM_PACKAGE)/Override/IA32FamilyCpuPkg/PiSmmCpuDxeSmm/PiSmmCpuDxeSmm.inf
  UefiCpuPkg/CpuIo2Smm/CpuIo2Smm.inf
  MdeModulePkg/Universal/LockBox/SmmLockBox/SmmLockBox.inf
  IA32FamilyCpuPkg/PiSmmCommunication/PiSmmCommunicationSmm.inf
  DeviceCommonPkg/Compatibility/SmmSwDispatch2OnSmmSwDispatchThunk/SmmSwDispatch2OnSmmSwDispatchThunk.inf
#  $(PLATFORM_RC_PACKAGE)/PowerManagement/Smm/PowerManagement.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/PowerManagement/Smm/PowerManagement.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/Dts/Smm/DigitalThermalSensor.inf

  #
  # ACPI
  #
   MdeModulePkg/Universal/Acpi/BootScriptExecutorDxe/BootScriptExecutorDxe.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0xF0000043
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27      
    <LibraryClasses>
#      DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
#      SerialPortLib|MdePkg/Library/BaseSerialPortLibNull/BaseSerialPortLibNull.inf
      PcdLib|MdePkg/Library/DxePcdLib/DxePcdLib.inf
  }
  
  $(PLATFORM_PACKAGE)/BootScriptSaveDxe/BootScriptSaveDxe.inf
  IntelFrameworkModulePkg/Universal/Acpi/AcpiSupportDxe/AcpiSupportDxe.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/CPU/PowerManagement/AcpiTables/PowerManagementAcpiTables.inf

  $(PLATFORM_RC_PACKAGE)/AcpiTablesPCAT/AcpiTables.inf
  $(PLATFORM_RC_PACKAGE)/AcpiTablesPCAT/ISCT/IsctAcpitable.inf

  $(PLATFORM_PACKAGE)/AcpiPlatform/AcpiPlatformBB.inf

  #
  # PCI
  #
  MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf

  Vlv2DeviceRefCodePkg/ValleyView2Soc/NorthCluster/ISPDxe/ISPDxe.inf


#
# ISA
#
  $(PLATFORM_PACKAGE)/Wpce791/SiO791.inf
  IntelFrameworkModulePkg/Bus/Isa/IsaBusDxe/IsaBusDxe.inf
  IntelFrameworkModulePkg/Bus/Isa/IsaIoDxe/IsaIoDxe.inf
  IntelFrameworkModulePkg/Bus/Isa/IsaSerialDxe/IsaSerialDxe.inf
  IntelFrameworkModulePkg/Bus/Isa/Ps2MouseDxe/Ps2MouseDxe.inf
  IntelFrameworkModulePkg/Bus/Isa/Ps2KeyboardDxe/Ps2keyboardDxe.inf
#
# SDIO
#
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SDControllerDxe/MmcHostDxe.inf
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SDMediaDeviceDxe/MmcMediaDeviceDxe.inf
!if $(ACPI50_ENABLE) == TRUE
  MdeModulePkg/Universal/Acpi/FirmwarePerformanceDataTableDxe/FirmwarePerformanceDxe.inf {
    <LibraryClasses>
      TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/DxeTscTimerLib.inf
  }
  MdeModulePkg/Universal/Acpi/FirmwarePerformanceDataTableSmm/FirmwarePerformanceSmm.inf {
    <LibraryClasses>
      TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/DxeTscTimerLib.inf
  }
!endif

#
# IDE/SCSI/AHCI
#
  MdeModulePkg/Bus/Ata/AtaAtapiPassThru/AtaAtapiPassThru.inf
  IntelFrameworkModulePkg/Bus/Pci/IdeBusDxe/IdeBusDxe.inf
  MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
!if $(SATA_ENABLE) == TRUE
  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SataController/Dxe/SataController.inf
!endif
  MdeModulePkg/Bus/Ata/AtaBusDxe/AtaBusDxe.inf
!if $(SCSI_ENABLE) == TRUE
  MdeModulePkg\Bus\Scsi\ScsiBusDxe\ScsiBusDxe.inf
  MdeModulePkg\Bus\Scsi\ScsiDiskDxe\ScsiDiskDxe.inf
!endif
#
# Console
#
  MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  IntelFrameworkModulePkg/Universal/Console/VgaClassDxe/VgaClassDxe.inf
  MdeModulePkg/Universal/Console/TerminalDxe/TerminalDxe.inf
  MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  MdeModulePkg/Universal/DisplayEngineDxe/DisplayEngineDxe.inf
  MdeModulePkg/Universal/SetupBrowserDxe/SetupBrowserDxe.inf

  #
  # USB
  #
!if $(USB_ENABLE) == TRUE
  MdeModulePkg/Bus/Pci/EhciDxe/EhciDxe.inf
  MdeModulePkg/Bus/Pci/UhciDxe/UhciDxe.inf
  MdeModulePkg/Bus/Pci/XhciDxe/XhciDxe.inf
  MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  MdeModulePkg/Bus/Usb/UsbMouseDxe/UsbMouseDxe.inf
  MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

!endif

  #
  #  ECP
  #
  EdkCompatibilityPkg/Compatibility/FrameworkHiiOnUefiHiiThunk/FrameworkHiiOnUefiHiiThunk.inf
  EdkCompatibilityPkg/Compatibility/LegacyRegion2OnLegacyRegionThunk/LegacyRegion2OnLegacyRegionThunk.inf
  EdkCompatibilityPkg/Compatibility/SmmBaseOnSmmBase2Thunk/SmmBaseOnSmmBase2Thunk.inf
  EdkCompatibilityPkg/Compatibility/SmmBaseHelper/SmmBaseHelper.inf
  EdkCompatibilityPkg/Compatibility/SmmAccess2OnSmmAccessThunk/SmmAccess2OnSmmAccessThunk.inf
  EdkCompatibilityPkg/Compatibility/SmmControl2OnSmmControlThunk/SmmControl2OnSmmControlThunk.inf
  EdkCompatibilityPkg/Compatibility/FrameworkSmmStatusCodeOnPiSmmStatusCodeThunk/FrameworkSmmStatusCodeOnPiSmmStatusCodeThunk.inf
  EdkCompatibilityPkg/Compatibility/FvOnFv2Thunk/FvOnFv2Thunk.inf
  #
  # SMBIOS
  #
  MdeModulePkg/Universal/SmbiosDxe/SmbiosDxe.inf
  $(PLATFORM_PACKAGE)/SmBiosMiscDxe/MiscSubclassBB.inf

  Vlv2DeviceRefCodePkg/ValleyView2Soc/NorthCluster/SmBiosMemory/Dxe/SmBiosMemory.inf
  #
  # CPU/FW Microde
  #
  $(PLATFORM_INTEL_RESTRICT_PACKAGE)/Microcode/MicrocodeUpdates.inf {
    <BuildOptions>
      *_*_*_GENFW_FLAGS = -a 0x800 -p 0xFF
  }


  PcAtChipsetPkg/8259InterruptControllerDxe/8259.inf


!if $(INTEL_FPDT_ENABLE) == TRUE
  DeviceCommonPkg/Compatibility/FpdtThunkDxe/FpdtThunkDxe.inf {
    <LibraryClasses>
      TimerLib|DeviceCommonPkg/Override/PerformancePkg/Library/TscTimerLib/DxeTscTimerLib.inf
  }
!endif

!if $(NETWORK_ENABLE) == TRUE 
  !if $(NETWORK_ISCSI_ENABLE) == TRUE 
    !if $(NETWORK_IP6_ENABLE) == TRUE 
      NetworkPkg\IScsiDxe\IScsiDxe.inf 
    !else 
      MdeModulePkg\Universal\Network\IScsiDxe\IScsiDxe.inf 
    !endif 
  !endif
  !if $(NETWORK_VLAN_ENABLE) == TRUE 
    MdeModulePkg\Universal\Network\VlanConfigDxe\VlanConfigDxe.inf 
  !endif
  !if $(CSM_ENABLE) == TRUE
    IntelFrameworkModulePkg\Csm\BiosThunk\Snp16Dxe\Snp16Dxe.inf 
  !endif  
!endif

!if $(NETWORK_ENABLE) == TRUE
  #
  # UEFI network modules
  #
    MdeModulePkg\Universal\Network\DpcDxe\DpcDxe.inf
    MdeModulePkg/Universal/Network/SnpDxe/SnpDxe.inf
#   For Undi driver bug, the Undi->Initialize cannot be called twice, this will cause frontpage hang when exit from shell and click "continue"
#   so we use override SnpDxe to skip Init for 2rd time.
#    NewProjectPkg\Override/MdeModulePkg/Universal/Network/SnpDxe/SnpDxe.inf

    MdeModulePkg\Universal\Network\MnpDxe\MnpDxe.inf
    MdeModulePkg\Universal\Network\ArpDxe\ArpDxe.inf
    MdeModulePkg\Universal\Network\Dhcp4Dxe\Dhcp4Dxe.inf
    #MdeModulePkg\Universal\Network\Ip4ConfigDxe\Ip4ConfigDxe.inf 
    MdeModulePkg\Universal\Network\Ip4Dxe\Ip4Dxe.inf
    MdeModulePkg\Universal\Network\Mtftp4Dxe\Mtftp4Dxe.inf
    MdeModulePkg\Universal\Network\Tcp4Dxe\Tcp4Dxe.inf { 
      <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x80000000 
    }
    MdeModulePkg\Universal\Network\Udp4Dxe\Udp4Dxe.inf
    !if $(NETWORK_IP6_ENABLE) == TRUE 
      NetworkPkg\Ip6Dxe\Ip6Dxe.inf
      NetworkPkg\Dhcp6Dxe\Dhcp6Dxe.inf
      NetworkPkg\IpSecDxe\IpSecDxe.inf
      NetworkPkg\TcpDxe\TcpDxe.inf
      NetworkPkg\Udp6Dxe\Udp6Dxe.inf
      NetworkPkg\Mtftp6Dxe\Mtftp6Dxe.inf 
    !endif
    !if $(NETWORK_IP6_ENABLE) == TRUE 
      NetworkPkg\UefiPxeBcDxe\UefiPxeBcDxe.inf 
    !else 
      MdeModulePkg\Universal\Network\UefiPxeBcDxe\UefiPxeBcDxe.inf 
    !endif 
!endif

  NewProjectPkg/Application/FirmwareUpdate/FirmwareUpdate.inf

## Capsule Update

  Vlv2DeviceRefCodePkg/ValleyView2Soc/SouthCluster/SysFwUpdateCapsule/SysFwUpdateCapsule.inf {
    <LibraryClasses>
      IntrinsicLib|CryptoPkg/Library/IntrinsicLib/IntrinsicLib.inf
      OpensslLib|CryptoPkg/Library/OpensslLib/OpensslLib.inf
      FileHandleLib|MdePkg/Library/UefiFileHandleLib/UefiFileHandleLib.inf
      BaseCryptLib|CryptoPkg/Library/BaseCryptLib/BaseCryptLib.inf
  }

#I2C,SPI support
  $(PLATFORM_RC_PACKAGE)/ValleyView2Soc/SouthCluster/I2cStack/I2cBus/I2cBus.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0xF0000043
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27
  }
  
  $(PLATFORM_RC_PACKAGE)/ValleyView2Soc/SouthCluster/I2cStack/I2cHost/I2cHost.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0xF0000043
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27
  }
  $(PLATFORM_RC_PACKAGE)/ValleyView2Soc/SouthCluster/I2cStack/I2cPortA0Pio/I2cPortA0Pio.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x00000043
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27
  }
  
  $(PLATFORM_RC_PACKAGE)/ValleyView2Soc/SouthCluster/I2cStack/I2cMmioDeviceDxe/I2cMmioDeviceDxe.inf {
    <PcdsPatchableInModule>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPrintErrorLevel|0x00000043
    <PcdsFixedAtBuild>
      gEfiMdePkgTokenSpaceGuid.PcdDebugPropertyMask|0x27
  }

 

###################################################################################################
#
# BuildOptions Section - Define the module specific tool chain flags that should be used as
#                        the default flags for a module. These flags are appended to any 
#                        standard flags that are defined by the build process. They can be 
#                        applied for any modules or only those modules with the specific 
#                        module style (EDK or EDKII) specified in [Components] section.
#
###################################################################################################

[BuildOptions]
#
# Define Build Options both for EDK and EDKII drivers.
#

#
# Define token for different Platform
#
!if $(MINNOW2_FSP_BUILD) == TRUE
  DEFINE MINNOW2_FSP_OPTION = /DMINNOW2_FSP_BUILD
!else
  DEFINE MINNOW2_FSP_OPTION =
!endif

!if $(MINNOW2_PO) == TRUE
  DEFINE MINNOW2_BUILD_OPTION = /DMINNOW2_PO
!else
  DEFINE MINNOW2_BUILD_OPTION =
!endif

!if $(ENBDT_PF_BUILD) == TRUE
  DEFINE ENBDT_PF_ENABLE = /DENBDT_PF_ENABLE=1
!else
  DEFINE ENBDT_PF_ENABLE = /DENBDT_PF_ENABLE=0
!endif


!if $(CLKGEN_CONFIG_EXTRA_ENABLE) == TRUE
  DEFINE CLKGEN_CONFIG_EXTRA_BUILD_OPTION = /DCLKGEN_CONFIG_EXTRA=1
!else
  DEFINE CLKGEN_CONFIG_EXTRA_BUILD_OPTION =
!endif



!if $(PCIESC_ENABLE) == TRUE
  DEFINE PCIESC_SUPPORT_BUILD_OPTION = /DPCIESC_SUPPORT=1
!else
  DEFINE PCIESC_SUPPORT_BUILD_OPTION =
!endif
!if $(SATA_ENABLE) == TRUE
  DEFINE SATA_SUPPORT_BUILD_OPTION = /DSATA_SUPPORT=1
!else
  DEFINE SATA_SUPPORT_BUILD_OPTION =
!endif
!if $(ENBDT_S3_SUPPORT) == TRUE
  DEFINE ENBDT_S3_SUPPORT_OPTIONS = /DNOCS_S3_SUPPORT
!else
  DEFINE ENBDT_S3_SUPPORT_OPTIONS =
!endif

!if $(X64_CONFIG) == TRUE
  DEFINE X64_BUILD_ENABLE = /DX64_BUILD_ENABLE=1
!else
  DEFINE X64_BUILD_ENABLE = 
!endif

!if $(FTPM_ENABLE) == TRUE
  DEFINE DSC_FTPM_BUILD_OPTIONS = /DFTPM_ENABLE
!else
  DEFINE DSC_FTPM_BUILD_OPTIONS = 
!endif

!if $(FTPM_ERROR_WR) == TRUE
  DEFINE DSC_FTPM_ERROR_WR_BUILD_OPTIONS = /DFTPM_ERROR_WR
!else
  DEFINE DSC_FTPM_ERROR_WR_BUILD_OPTIONS = 
!endif

!if $(TPM_ENABLED) == TRUE
  DEFINE DSC_TPM_BUILD_OPTIONS = /DTPM_ENABLED
!else
  DEFINE DSC_TPM_BUILD_OPTIONS = 
!endif


  DEFINE EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS = $(MINNOW2_FSP_OPTION) $(MINNOW2_BUILD_OPTION) $(ENBDT_PF_ENABLE) $(EXTERNAL_VGA_BUILD_OPTION) $(PCIE_ENUM_WA_BUILD_OPTION) $(X0_WA_ENABLE_BUILD_OPTION) $(A0_WA_ENABLE_BUILD_OPTION) $(MICROCODE_FREE_BUILD_OPTIONS) $(SIMICS_BUILD_OPTIONS) $(HYBRID_BUILD_OPTIONS) $(COMPACT_BUILD_OPTIONS) $(VP_BUILD_OPTIONS) $(SYSCTL_ID_BUILD_OPTION) $(CLKGEN_CONFIG_EXTRA_BUILD_OPTION) $(SYSCTL_X0_CONVERT_BOARD_OPTION) $(ENBDT_S3_SUPPORT_OPTIONS) $(SATA_SUPPORT_BUILD_OPTION) $(PCIESC_SUPPORT_BUILD_OPTION) $(DSC_FTPM_BUILD_OPTIONS) $(DSC_FTPM_ERROR_WR_BUILD_OPTIONS) $(DSC_TPM_BUILD_OPTIONS) $(DSC_BYTI_SECURE_BOOT_BUILD_OPTIONS)
!if $(PERFORMANCE_ENABLE) == TRUE
  DEFINE PDB_BUILD_OPTION = /Zi
!endif

!if $(SOURCE_DEBUG_ENABLE) == TRUE
  MSFT:*_*_X64_GENFW_FLAGS  = --keepexceptiontable
  GCC:*_*_X64_GENFW_FLAGS   = --keepexceptiontable
  INTEL:*_*_X64_GENFW_FLAGS = --keepexceptiontable
!if $(TARGET) == DEBUG
  DEFINE SOURCE_LEVEL_DEBUG_BUILD_OPTIONS = /Od /Oy-
!endif
!else
  DEFINE SOURCE_LEVEL_DEBUG_BUILD_OPTIONS = 

!endif

[BuildOptions.Common.EDK]

#
# Define token for different Platform
#
!if $(ENBDT_PF_BUILD) == TRUE
  DEFINE ENBDT_PF_ENABLE = /DENBDT_PF_ENABLE=1
!else
  DEFINE ENBDT_PF_ENABLE = /DENBDT_PF_ENABLE=0
!endif

!if $(PERFORMANCE_ENABLE) == TRUE
  RELEASE_*_*_DLINK_FLAGS = /DEBUG
!if $(INTEL_FPDT_ENABLE) == TRUE
  DEFINE PERFORMANCE_BUILD_OPTIONS = /D FIRMWARE_PERFORMANCE /D MAX_FIRMWARE_PERFORMANCE_ENTRIES=120
!endif
!endif

!if $(S3_ENABLE) == TRUE
  DEFINE DSC_S3_BUILD_OPTIONS = /DEFI_S3_RESUME
!else
  DEFINE DSC_S3_BUILD_OPTIONS =
!endif
!if $(SEC_ENABLE) == TRUE
  DEFINE DSC_SEC_BUILD_OPTIONS = /DSEC_SUPPORT_FLAG=1 /DiSEC_SUPPORT=1
!else
  DEFINE DSC_SEC_BUILD_OPTIONS =
!endif

!if $(ENBDT_S3_SUPPORT) == TRUE
  DEFINE ENBDT_S3_SUPPORT_OPTIONS = /DNOCS_S3_SUPPORT
!else
  DEFINE ENBDT_S3_SUPPORT_OPTIONS =
!endif

!if $(X64_CONFIG) == TRUE
  DEFINE X64_BUILD_ENABLE = /DX64_BUILD_ENABLE=1
!else
  DEFINE X64_BUILD_ENABLE = 
!endif


  DEFINE EDK_GLUE_LIB_DEBUG  =
  DEFINE DEBUG_BUILD_OPTIONS = /D EFI_DEBUG /D DEBUG_MODE=1  /GL- $(EDK_GLUE_LIB_DEBUG) /DEDKII_GLUE_DebugPrintErrorLevel=(EFI_D_ERROR)
  DEFINE EDK_DSC_FEATURE_BUILD_OPTIONS = $(DSC_S3_BUILD_OPTIONS) $(DSC_ACPI_BUILD_OPTIONS) $(DSC_SEC_BUILD_OPTIONS) $(DSC_FTPM_BUILD_OPTIONS) $(DSC_FTPM_ERROR_WR_BUILD_OPTIONS) $(DSC_TPM_BUILD_OPTIONS) $(SOFTSDV_BUILD_OPTIONS) $(SIMICS_BUILD_OPTIONS) $(HYBRID_BUILD_OPTIONS) $(COMPACT_BUILD_OPTIONS) $(VP_BUILD_OPTIONS) $(QT_BUILD_OPTIONS) $(DSC_BYTI_SECURE_BOOT_BUILD_OPTIONS) /D$(PROJECT_SC_CHIPSET) 

  DEFINE EDK_DSC_OTHER_BUILD_OPTIONS = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS) $(SV_BUILD_OPTIONS) $(INTEL_FASTBOOT_BUILD_OPTION)
  DEFINE EDK_DSC_GLOBAL_BUILD_OPTIONS = $(ENBDT_PF_ENABLE) $(EDK_DSC_FEATURE_BUILD_OPTIONS) $(EDK_DSC_OTHER_BUILD_OPTIONS) /D EFI_SPECIFICATION_VERSION=0x00020000  /D PI_SPECIFICATION_VERSION=0x00000009  /D TIANO_RELEASE_VERSION=0x00080006 /D SUPPORT_DEPRECATED_PCI_CFG_PPI /D CSM_SMMENTRY_PORT8DATA8 /D EDKII_GLUE_PciExpressBaseAddress=0x$(PLATFORM_PCIEXPRESS_BASE) /D MAX_VARIABLE_SIZE=0x2000 /D EFI_FIRMWARE_VENDOR="L/"INTEL/"" /D EFI_BUILD_VERSION="L/"EDKII/"" /DEFI_PEI_REPORT_STATUS_CODE_ON $(ENBDT_S3_SUPPORT_OPTIONS)

  *_*_IA32_ASM_FLAGS         = /DEFI32 /D EDKII_GLUE_PciExpressBaseAddress=$(PLATFORM_PCIEXPRESS_BASE)h /DNOCS_S3_SUPPORT
  DEBUG_*_IA32_CC_FLAGS      = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_IA32_CC_FLAGS    = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  DEBUG_*_IA32_VFRPP_FLAGS   = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_IA32_VFRPP_FLAGS = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  DEBUG_*_IA32_APP_FLAGS     = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_IA32_APP_FLAGS   = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  DEBUG_*_IA32_PP_FLAGS      = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_IA32_PP_FLAGS    = /D EFI32 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  *_*_IA32_ASLPP_FLAGS       = /D EDKII_GLUE_PciExpressBaseAddress=0x$(PLATFORM_PCIEXPRESS_BASE)
  *_*_IA32_ASLCC_FLAGS       = /D EDKII_GLUE_PciExpressBaseAddress=0x$(PLATFORM_PCIEXPRESS_BASE)
  *_*_IA32_ASM16_FLAGS       = /D EDKII_GLUE_PciExpressBaseAddress=$(PLATFORM_PCIEXPRESS_BASE)h

  *_*_X64_ASM_FLAGS          = /DEFIX64 /D EDKII_GLUE_PciExpressBaseAddress=$(PLATFORM_PCIEXPRESS_BASE)h /DNOCS_S3_SUPPORT
  DEBUG_*_X64_CC_FLAGS       = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_X64_CC_FLAGS     = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  DEBUG_*_X64_VFRPP_FLAGS    = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_X64_VFRPP_FLAGS  = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  DEBUG_*_X64_APP_FLAGS      = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_X64_APP_FLAGS    = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  DEBUG_*_X64_PP_FLAGS       = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS) $(DEBUG_BUILD_OPTIONS)
  RELEASE_*_X64_PP_FLAGS     = /D EFIX64 $(EDK_DSC_GLOBAL_BUILD_OPTIONS)
  *_*_X64_ASLPP_FLAGS        = /D EDKII_GLUE_PciExpressBaseAddress=0x$(PLATFORM_PCIEXPRESS_BASE)
  *_*_X64_ASLCC_FLAGS        = /D EDKII_GLUE_PciExpressBaseAddress=0x$(PLATFORM_PCIEXPRESS_BASE)
  *_*_X64_ASM16_FLAGS        = /D EDKII_GLUE_PciExpressBaseAddress=$(PLATFORM_PCIEXPRESS_BASE)h
 # *_*_*_BUILD_FLAGS = -s
  *_*_*_VFR_FLAGS   = -c
  *_*_*_BUILD_FLAGS = -c

[BuildOptions.Common.EDKII]
  *_*_IA32_ASM_FLAGS     = $(VP_BUILD_OPTIONS) /D EDKII_GLUE_PciExpressBaseAddress=$(PLATFORM_PCIEXPRESS_BASE)h /DNOCS_S3_SUPPORT

  *_*_IA32_CC_FLAGS      = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)
  *_*_IA32_VFRPP_FLAGS   = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)
  *_*_IA32_APP_FLAGS     = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)
  *_*_IA32_PP_FLAGS      = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)
  *_*_IA32_ASLPP_FLAGS   = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)

  *_*_X64_CC_FLAGS       = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS) $(SOURCE_LEVEL_DEBUG_BUILD_OPTIONS)
  *_*_X64_VFRPP_FLAGS    = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)
  *_*_X64_APP_FLAGS      = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)
  *_*_X64_PP_FLAGS       = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)
  *_*_X64_ASLPP_FLAGS    = $(EDK_EDKII_DSC_FEATURE_BUILD_OPTIONS)


##################
##
##  End of Build Option Section
##
##################

