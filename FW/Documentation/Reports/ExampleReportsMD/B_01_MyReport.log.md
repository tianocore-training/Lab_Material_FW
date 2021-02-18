```
Platform Summary
Platform Name:        EmulatorPkg
Platform DSC Path:    c:\fw\edk2-ws\edk2\EmulatorPkg\EmulatorPkg.dsc
Architectures:        X64
Tool Chain:           VS2015x86
Target:               DEBUG
SKUID:                DEFAULT
DefaultStore:         STANDARD
Output Path:          c:\fw\edk2-ws\Build\EmulatorX64
Build Environment:    Windows-10-10.0.18362-SP0
Build Duration:       00:00:35
AutoGen Duration:     00:00:12
Make Duration:        00:00:21
GenFds Duration:      00:00:02
Report Content:       PCD, LIBRARY, BUILD_FLAGS, DEPEX, HASH, FLASH, FIXED_ADDRESS
>======================================================================================================================<
PCDs not used by modules or in conditional directives
  *B  - PCD override in the build option
  *P  - Platform scoped PCD override in DSC file
  *F  - Platform scoped PCD override in FDF file
========================================================================================================================

gEmulatorPkgTokenSpaceGuid
 *P PcdEmuApCount                            :  FIXED    (VOID*) = L"1"
                                                     DEC DEFAULT = L"0"
    PcdEmuCpuModel                           :  FIXED    (VOID*) = L"Intel(R) Processor Model"
    PcdEmuCpuSpeed                           :  FIXED    (VOID*) = L"3000"
    PcdEmuSerialPort                         :  FIXED    (VOID*) = L"/dev/ttyS0"
<======================================================================================================================>

>======================================================================================================================<
Platform Configuration Database Report
  *B  - PCD override in the build option
  *P  - Platform scoped PCD override in DSC file
  *F  - Platform scoped PCD override in FDF file
  *M  - Module scoped PCD override
========================================================================================================================

gEfiMdeModulePkgTokenSpaceGuid
    PcdAllowVariablePolicyEnforcementDisable   :  FIXED  (BOOLEAN) = 0
    PcdAriSupport                            :  FIXED  (BOOLEAN) = 1
 *P PcdBootManagerMenuFile                   :  FIXED    (VOID*) = {
0x21,0xAA,0x2C,0x46,0x14,0x76,0x03,0x45,0x83,0x6E,0x8A,0xB6,0xF4,0x66,0x23,0x31}
                                                     DEC DEFAULT = {
0xDC,0x5B,0xC2,0xEE,0xF2,0x67,0x95,0x4D,0xB1,0xD5,0xF8,0x1B,0x20,0x39,0xD1,0x1D}
    PcdBoottimeReservedNvVariableSpaceSize   :  FIXED   (UINT32) = 0x00 (0)
    PcdBrowerGrayOutReadOnlyMenu             :   FLAG  (BOOLEAN) = 0
    PcdBrowserFieldBackgroundHighlightColor   :  FIXED    (UINT8) = 0x00 (0)
    PcdBrowserFieldTextColor                 :  FIXED    (UINT8) = 0x00 (0)
    PcdBrowserFieldTextHighlightColor        :  FIXED    (UINT8) = 0x07 (7)
    PcdBrowserGrayOutTextStatement           :   FLAG  (BOOLEAN) = 0
    PcdBrowserSubtitleTextColor              :  FIXED    (UINT8) = 0x01 (1)
    PcdCapsuleInRamSupport                   :  FIXED  (BOOLEAN) = 1
    PcdCapsuleOnDiskSupport                  :  FIXED  (BOOLEAN) = 0
    PcdCapsulePeiLongModeStackSize           :  FIXED   (UINT32) = 0x8000 (32768)
    PcdConInConnectOnDemand                  :  FIXED  (BOOLEAN) = 0
    PcdConOutColumn                          : DYNHII   (UINT32) = 0x50 (80)
                         gEmuSystemConfigGuid: L"Setup": 0x0
    PcdConOutGopSupport                      :   FLAG  (BOOLEAN) = 1
    PcdConOutRow                             : DYNHII   (UINT32) = 0x19 (25)
                         gEmuSystemConfigGuid: L"Setup": 0x4
    PcdConOutUgaSupport                      :   FLAG  (BOOLEAN) = 1
    PcdCpuStackGuard                         :  FIXED  (BOOLEAN) = 0
    PcdDevicePathSupportDevicePathFromText   :   FLAG  (BOOLEAN) = 1
    PcdDevicePathSupportDevicePathToText     :   FLAG  (BOOLEAN) = 1
    PcdDiskIoDataBufferBlockNum              :  FIXED   (UINT32) = 0x40 (64)
    PcdDriverHealthConfigureForm             :  FIXED    (VOID*) = {
0xF4,0xD9,0x96,0x42,0xFC,0xF6,0xDE,0x4D,0x86,0x85,0x8C,0xE2,0xD7,0x9D,0x90,0xF0}
 *P PcdDxeIplBuildPageTables                 :   FLAG  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdDxeIplSupportUefiDecompress           :   FLAG  (BOOLEAN) = 1
 *P PcdDxeIplSwitchToLongMode                :   FLAG  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdDxeNxMemoryProtectionPolicy           :  FIXED   (UINT64) = 0x0000000 (0)
    PcdEmuVariableNvModeEnable               :  FIXED  (BOOLEAN) = 0
    PcdEmuVariableNvStoreReserved            :  FIXED   (UINT64) = 0x0 (0)
    PcdErrorCodeSetVariable                  :  FIXED   (UINT32) = 0x03058002 (50692098)
    PcdFirmwareReleaseDateString             :  FIXED    (VOID*) = L""
    PcdFirmwareRevision                      :  FIXED   (UINT32) = 0x00010000 (65536)
    PcdFirmwareVendor                        :  FIXED    (VOID*) = L"EDK II"
    PcdFirmwareVersionString                 :  FIXED    (VOID*) = L""
    PcdFlashNvStorageFtwSpareBase            :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageFtwSpareBase64          :    DYN   (UINT64) = 0x0 (0)
 *F PcdFlashNvStorageFtwSpareSize            :  FIXED   (UINT32) = 0x00010000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase          :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase64        :    DYN   (UINT64) = 0x0 (0)
 *F PcdFlashNvStorageFtwWorkingSize          :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageVariableBase            :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageVariableBase64          :    DYN   (UINT64) = 0x0 (0)
 *F PcdFlashNvStorageVariableSize            :  FIXED   (UINT32) = 0x0000C000 (49152)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFrontPageFormSetGuid                  :  FIXED    (VOID*) = {
0xBC,0x30,0x0C,0x9E,0x06,0x3F,0xA6,0x4B,0x82,0x88,0x09,0x17,0x9B,0x85,0x5D,0xBE}
    PcdFullFtwServiceEnable                  :   FLAG  (BOOLEAN) = 1
    PcdFwVolDxeMaxEncapsulationDepth         :  FIXED   (UINT32) = 0x10 (16)
    PcdGhcbBase                              :    DYN   (UINT64) = 0x0 (0)
    PcdGhcbSize                              :    DYN   (UINT64) = 0x0 (0)
    PcdHeapGuardPageType                     :  FIXED   (UINT64) = 0x0 (0)
    PcdHeapGuardPoolType                     :  FIXED   (UINT64) = 0x0 (0)
    PcdHeapGuardPropertyMask                 :  FIXED    (UINT8) = 0x0 (0)
    PcdHelloWorldPrintEnable                 :   FLAG  (BOOLEAN) = 1
    PcdHelloWorldPrintString                 :  FIXED    (VOID*) = L"UEFI Hello World!\n"
    PcdHelloWorldPrintTimes                  :  FIXED   (UINT32) = 0x1 (1)
    PcdHiiOsRuntimeSupport                   :   FLAG  (BOOLEAN) = 1
    PcdHwErrStorageSize                      :  FIXED   (UINT32) = 0x0000 (0)
 *P PcdImageProtectionPolicy                 :  FIXED   (UINT32) = 0x00000000 (0)
                                                     DEC DEFAULT = 0x00000002 (2)
    PcdInitValueInTempStack                  :  FIXED   (UINT32) = 0x5AA55AA5 (1520786085)
    PcdLoadFixAddressBootTimeCodePageNumber   :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadFixAddressPeiCodePageNumber       :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadFixAddressRuntimeCodePageNumber   :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadModuleAtFixAddressEnable          :  FIXED   (UINT64) = 0x0 (0)
    PcdMaxAuthVariableSize                   :  FIXED   (UINT32) = 0x00 (0)
    PcdMaxEfiSystemTablePointerAddress       :  FIXED   (UINT64) = 0x0 (0)
    PcdMaxHardwareErrorVariableSize          :  FIXED   (UINT32) = 0x8000 (32768)
    PcdMaxPeiPcdCallBackNumberPerPcdEntry    :  FIXED   (UINT32) = 0x08 (8)
    PcdMaxRepairCount                        :  FIXED   (UINT32) = 0x00 (0)
 *P PcdMaxSizeNonPopulateCapsule             :  FIXED   (UINT32) = 0x0 (0)
                                                     DEC DEFAULT = 0xa00000 (10485760)
 *P PcdMaxSizePopulateCapsule                :  FIXED   (UINT32) = 0x0 (0)
                                                     DEC DEFAULT = 0x6400000 (104857600)
    PcdMaxUserNvVariableSpaceSize            :  FIXED   (UINT32) = 0x00 (0)
    PcdMaxVariableSize                       :  FIXED   (UINT32) = 0x400 (1024)
    PcdMaxVolatileVariableSize               :  FIXED   (UINT32) = 0x00 (0)
    PcdMemoryProfileDriverPath               :  FIXED    (VOID*) = {0x0}
    PcdMemoryProfileMemoryType               :  FIXED   (UINT64) = 0x0 (0)
    PcdMemoryProfilePropertyMask             :  FIXED    (UINT8) = 0x0 (0)
    PcdMigrateTemporaryRamFirmwareVolumes    :  FIXED  (BOOLEAN) = 0
    PcdMrIovSupport                          :  FIXED  (BOOLEAN) = 0
    PcdNullPointerDetectionPropertyMask      :  FIXED    (UINT8) = 0x0 (0)
    PcdNvStoreDefaultValueBuffer             :    DEX    (VOID*) = {0x0}
    PcdPciBridgeIoAlignmentProbe             :   FLAG  (BOOLEAN) = 0
    PcdPciBusHotplugDeviceSupport            :   FLAG  (BOOLEAN) = 1
    PcdPciDegradeResourceForOptionRom        :   FLAG  (BOOLEAN) = 1
    PcdPciDisableBusEnumeration              :  FIXED  (BOOLEAN) = 0
    PcdPcieResizableBarSupport               :  FIXED  (BOOLEAN) = 0
 *P PcdPeiCoreImageLoaderSearchTeSectionFirst   :   FLAG  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdPeiCoreMaxPeiStackSize                :  FIXED   (UINT32) = 0x20000 (131072)
    PcdPeiFullPcdDatabaseEnable              :   FLAG  (BOOLEAN) = 1
    PcdPlatformRecoverySupport               :  FIXED  (BOOLEAN) = 1
    PcdProgressCodeOsLoaderLoad              :  FIXED   (UINT32) = 0x03058000 (50692096)
    PcdProgressCodeOsLoaderStart             :  FIXED   (UINT32) = 0x03058001 (50692097)
    PcdPteMemoryEncryptionAddressOrMask      :  FIXED   (UINT64) = 0x0 (0)
    PcdReclaimVariableSpaceAtEndOfDxe        :  FIXED  (BOOLEAN) = 0
 *P PcdResetOnMemoryTypeInformationChange    :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdSetNvStoreDefaultId                   :    DEX   (UINT16) = 0x0 (0)
    PcdSetNxForStack                         :  FIXED  (BOOLEAN) = 0
    PcdSetupConOutColumn                     :  PATCH   (UINT32) = 0x50 (80)
    PcdSetupConOutRow                        :  PATCH   (UINT32) = 0x19 (25)
    PcdSetupVideoHorizontalResolution        :  PATCH   (UINT32) = 0x320 (800)
    PcdSetupVideoVerticalResolution          :  PATCH   (UINT32) = 0x258 (600)
    PcdShadowPeimOnBoot                      :  FIXED  (BOOLEAN) = 1
    PcdShadowPeimOnS3Boot                    :  FIXED  (BOOLEAN) = 0
    PcdSmbiosDocRev                          :  FIXED    (UINT8) = 0x0 (0)
    PcdSmbiosEntryPointProvideMethod         :  FIXED   (UINT32) = 0x3 (3)
    PcdSmbiosVersion                         :  FIXED   (UINT16) = 0x0303 (771)
    PcdSrIovSupport                          :  FIXED  (BOOLEAN) = 1
    PcdSrIovSystemPageSize                   :  FIXED   (UINT32) = 0x1 (1)
    PcdStatusCodeMemorySize                  :  FIXED   (UINT16) = 0x1 (1)
 *M     StatusCodeHandlerRuntimeDxe.inf                          = 0x80 (128)
    PcdStatusCodeReplayIn                    :   FLAG  (BOOLEAN) = 0
    PcdStatusCodeUseMemory                   :  FIXED  (BOOLEAN) = 0
    PcdStatusCodeUseSerial                   :  FIXED  (BOOLEAN) = 1
    PcdSupportHiiImageProtocol               :   FLAG  (BOOLEAN) = 1
    PcdSupportProcessCapsuleAtRuntime        :   FLAG  (BOOLEAN) = 0
    PcdSupportUpdateCapsuleReset             :   FLAG  (BOOLEAN) = 0
    PcdTestKeyUsed                           :    DYN  (BOOLEAN) = 0
    PcdUnalignedPciIoEnable                  :   FLAG  (BOOLEAN) = 0
    PcdUnicodeCollation2Support              :   FLAG  (BOOLEAN) = 1
    PcdUnicodeCollationSupport               :   FLAG  (BOOLEAN) = 1
    PcdUse1GPageTable                        :  FIXED  (BOOLEAN) = 0
    PcdUse5LevelPageTable                    :  FIXED  (BOOLEAN) = 0
    PcdVariableCollectStatistics             :   FLAG  (BOOLEAN) = 0
    PcdVariableStoreSize                     :  FIXED   (UINT32) = 0x10000 (65536)
    PcdVideoHorizontalResolution             :  PATCH   (UINT32) = 0x320 (800)
    PcdVideoVerticalResolution               :  PATCH   (UINT32) = 0x258 (600)
    PcdVpdBaseAddress                        :  FIXED   (UINT32) = 0x0 (0)
    PcdVpdBaseAddress64                      :    DEX   (UINT64) = 0x0 (0)

gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *P PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *P PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
 *M     Shell.inf                                                = 0xFF (255)
 *P PcdDefaultTerminalType                   :  FIXED    (UINT8) = 0x1 (1)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdHardwareErrorRecordLevel              :  FIXED   (UINT16) = 0x0 (0)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumGuidedExtractHandler           :  FIXED   (UINT32) = 0x10 (16)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *P PcdPlatformBootTimeOut                   : DYNHII   (UINT16) = 0xA (10)
                       gEfiGlobalVariableGuid: L"Timeout": 0x0
                                                     DEC DEFAULT = 0xffff (65535)
 *P PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdSpinLockTimeout                       :  FIXED   (UINT32) = 0x989680 (10000000)
    PcdUartDefaultBaudRate                   :  FIXED   (UINT64) = 0x1C200 (115200)
    PcdUartDefaultDataBits                   :  FIXED    (UINT8) = 0x8 (8)
    PcdUartDefaultParity                     :  FIXED    (UINT8) = 0x1 (1)
    PcdUartDefaultReceiveFifoDepth           :  FIXED   (UINT16) = 0x1 (1)
    PcdUartDefaultStopBits                   :  FIXED    (UINT8) = 0x1 (1)
    PcdUefiFileHandleLibPrintBufferSize      :  FIXED   (UINT16) = 0x600 (1536)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
 *M     Shell.inf                                                = 0x1F40 (8000)
    PcdUefiVariableDefaultLang               :  FIXED    (VOID*) = "eng"
    PcdUefiVariableDefaultLangCodes          :  FIXED    (VOID*) = "engfraengfra"
    PcdUefiVariableDefaultLangDeprecate      :   FLAG  (BOOLEAN) = 0
    PcdUefiVariableDefaultPlatformLang       :  FIXED    (VOID*) = "en-US"
    PcdUefiVariableDefaultPlatformLangCodes   :  FIXED    (VOID*) = "en;fr;en-US;fr-FR"
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdValidateOrderedCollection             :   FLAG  (BOOLEAN) = 0
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0

gEfiNetworkPkgTokenSpaceGuid
    PcdIPv4PXESupport                        :  FIXED    (UINT8) = 0x01 (1)
    PcdIPv6PXESupport                        :  FIXED    (UINT8) = 0x01 (1)
    PcdPxeTftpWindowSize                     :  FIXED   (UINT64) = 0x4 (4)
    PcdTftpBlockSize                         :  FIXED   (UINT64) = 0x0 (0)

gEfiShellPkgTokenSpaceGuid
    PcdShellDecodeIScsiMapNames              :  FIXED  (BOOLEAN) = 0
    PcdShellFileOperationSize                :  FIXED   (UINT32) = 0x1000 (4096)
    PcdShellForceConsole                     :   FLAG  (BOOLEAN) = 0
    PcdShellIncludeNtGuids                   :   FLAG  (BOOLEAN) = 1
    PcdShellInsertModeDefault                :  FIXED  (BOOLEAN) = 1
    PcdShellLibAutoInitialize                :  FIXED  (BOOLEAN) = 1
 *M     TftpDynamicCommand.inf                                   = 0
 *M     Shell.inf                                                = 0
    PcdShellMapNameLength                    :  FIXED    (UINT8) = 0x32 (50)
    PcdShellMaxHistoryCommandCount           :  FIXED   (UINT16) = 0x0020 (32)
    PcdShellPageBreakDefault                 :  FIXED  (BOOLEAN) = 0
    PcdShellPrintBufferSize                  :  FIXED   (UINT16) = 0x3E80 (16000)
    PcdShellProfileMask                      :  FIXED    (UINT8) = 0xFF (255)
    PcdShellRequireHiiPlatform               :   FLAG  (BOOLEAN) = 1
    PcdShellScreenLogCount                   :  FIXED    (UINT8) = 0x3 (3)
    PcdShellSupplier                         :  FIXED    (VOID*) = L"EDK II"
    PcdShellSupportFrameworkHii              :   FLAG  (BOOLEAN) = 0
    PcdShellSupportLevel                     :  FIXED    (UINT8) = 0x3 (3)
    PcdShellSupportOldProtocols              :  FIXED  (BOOLEAN) = 0
    PcdShellVendorExtendedDecode             :  FIXED   (UINT32) = 0x0 (0)
    PcdUsbExtendedDecode                     :  FIXED  (BOOLEAN) = 1

gEmulatorPkgTokenSpaceGuid
 *P PcdEmuBootMode                           :  FIXED   (UINT32) = 0x0 (0)
                                                     DEC DEFAULT = 0x1 (1)
 *F PcdEmuFdBaseAddress                      :  FIXED   (UINT64) = 0x102000000 (4328521728)
                                                     DEC DEFAULT = 0x0 (0)
    PcdEmuFileSystem                         :  FIXED    (VOID*) = L"."
 *P PcdEmuFirmwareBlockSize                  :  FIXED   (UINT32) = 0x10000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
 *F PcdEmuFirmwareFdSize                     :  FIXED   (UINT32) = 0x005a0000 (5898240)
                                                     DEC DEFAULT = 0x0 (0)
 *P PcdEmuFirmwareVolume                     :  FIXED    (VOID*) = L"../FV/FV_RECOVERY.fd"
                                                     DEC DEFAULT = L"..\\Fv\\Fv_Recovery.fd"
 *F PcdEmuFlashFvRecoveryBase                :  FIXED   (UINT64) = 0x102000000 (4328521728)
                                                     DEC DEFAULT = 0x0 (0)
 *F PcdEmuFlashFvRecoverySize                :  FIXED   (UINT32) = 0x00580000 (5767168)
                                                     DEC DEFAULT = 0x0 (0)
 *F PcdEmuFlashNvStorageEventLogBase         :  FIXED   (UINT64) = 0x10258C000 (4334338048)
                                                     DEC DEFAULT = 0x0 (0)
 *F PcdEmuFlashNvStorageEventLogSize         :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
 *F PcdEmuFlashNvStorageFtwSpareBase         :  FIXED   (UINT64) = 0x102590000 (4334354432)
                                                     DEC DEFAULT = 0x0 (0)
 *F PcdEmuFlashNvStorageFtwWorkingBase       :  FIXED   (UINT64) = 0x10258E000 (4334346240)
                                                     DEC DEFAULT = 0x0 (0)
 *F PcdEmuFlashNvStorageVariableBase         :  FIXED   (UINT64) = 0x102580000 (4334288896)
                                                     DEC DEFAULT = 0x0 (0)
 *P PcdEmuGop                                :  FIXED    (VOID*) = L"GOP Window 1!GOP Window 2"
                                                     DEC DEFAULT = L"GOP Window"
    PcdEmuMemorySize                         :  FIXED    (VOID*) = L"64!64"
    PcdEmuMpServicesPollingInterval          :  FIXED   (UINT64) = 0x100 (256)
    PcdEmuNetworkInterface                   :  FIXED    (VOID*) = L"en0"
    PcdEmuVirtualDisk                        :  FIXED    (VOID*) = L"disk.dmg:FW"
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<======================================================================================================================>

>======================================================================================================================<
Firmware Device (FD)
FD Name:            FV_RECOVERY
Base Address:       0x102000000
Size:               0x5A0000 (5760K)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
Fd Region
Type:               FV
Base Address:       0x0
Size:               0x580000 (5632K)
Fv Name:            FVRECOVERY (48.9% Full)
Occupied Size:      0x2B0140 (2752K)
Free Size:          0x2CFEC0 (2880K)
Offset     Module
------------------------------------------------------------------------------------------------------------------------
0x00000078 PEI Apriori
0x000000C8 DXE Apriori
0x00000FE8 EmuSec (c:\fw\edk2-ws\edk2\EmulatorPkg\Sec\Sec.inf)
0x0000DFE8 PeiCore (c:\fw\edk2-ws\edk2\MdeModulePkg\Core\Pei\PeiMain.inf)
0x0002FFE8 PcdPeim (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\PCD\Pei\Pcd.inf)
0x0003FFE8 ReportStatusCodeRouterPei (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\ReportStatusCodeRouter\Pei
\ReportStatusCodeRouterPei.inf)
0x0004BFE8 StatusCodeHandlerPei (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\StatusCodeHandler\Pei
\StatusCodeHandlerPei.inf)
0x0005BFE8 BootModePei (c:\fw\edk2-ws\edk2\EmulatorPkg\BootModePei\BootModePei.inf)
0x00067FE8 AutoScanPei (c:\fw\edk2-ws\edk2\EmulatorPkg\AutoScanPei\AutoScanPei.inf)
0x00073FE8 FirmwareVolumePei (c:\fw\edk2-ws\edk2\EmulatorPkg\FirmwareVolumePei\FirmwareVolumePei.inf)
0x0007FFE8 FlashMapPei (c:\fw\edk2-ws\edk2\EmulatorPkg\FlashMapPei\FlashMapPei.inf)
0x0008BFE8 ThunkPpiToProtocolPei (c:\fw\edk2-ws\edk2\EmulatorPkg\ThunkPpiToProtocolPei\ThunkPpiToProtocolPei.inf)
0x00097FE8 FaultTolerantWritePei (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\FaultTolerantWritePei
\FaultTolerantWritePei.inf)
0x000A3FE8 PeiVariable (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Variable\Pei\VariablePei.inf)
0x000B1FE8 DxeIpl (c:\fw\edk2-ws\edk2\MdeModulePkg\Core\DxeIplPeim\DxeIpl.inf)
0x000C4028 DxeCore (c:\fw\edk2-ws\edk2\MdeModulePkg\Core\Dxe\DxeMain.inf)
0x000DB4B8 PcdDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\PCD\Dxe\Pcd.inf)
0x000DF280 ReportStatusCodeRouterRuntimeDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\ReportStatusCodeRouter
\RuntimeDxe\ReportStatusCodeRouterRuntimeDxe.inf)
0x000E1658 StatusCodeHandlerRuntimeDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\StatusCodeHandler\RuntimeDxe
\StatusCodeHandlerRuntimeDxe.inf)
0x000E3788 Metronome (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Metronome\Metronome.inf)
0x000E50A0 RealTimeClock (c:\fw\edk2-ws\edk2\EmulatorPkg\RealTimeClockRuntimeDxe\RealTimeClock.inf)
0x000E6700 EmuReset (c:\fw\edk2-ws\edk2\EmulatorPkg\ResetRuntimeDxe\Reset.inf)
0x000E7CE0 RuntimeDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Core\RuntimeDxe\RuntimeDxe.inf)
0x000E9E68 FwBlockService (c:\fw\edk2-ws\edk2\EmulatorPkg\FvbServicesRuntimeDxe\FvbServicesRuntimeDxe.inf)
0x000EC158 SecurityStubDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\SecurityStubDxe\SecurityStubDxe.inf)
0x000F10D0 EbcDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\EbcDxe\EbcDxe.inf)
0x000F52A8 NullMemoryTestDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\MemoryTest\NullMemoryTestDxe
\NullMemoryTestDxe.inf)
0x000F68D8 EmuThunk (c:\fw\edk2-ws\edk2\EmulatorPkg\EmuThunkDxe\EmuThunk.inf)
0x000F7E08 Cpu (c:\fw\edk2-ws\edk2\EmulatorPkg\CpuRuntimeDxe\Cpu.inf)
0x000FAB28 FaultTolerantWriteDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\FaultTolerantWriteDxe
\FaultTolerantWriteDxe.inf)
0x000FE240 PlatformSmbiosDxe (c:\fw\edk2-ws\edk2\EmulatorPkg\PlatformSmbiosDxe\PlatformSmbiosDxe.inf)
0x00100130 EmuTimer (c:\fw\edk2-ws\edk2\EmulatorPkg\TimerDxe\Timer.inf)
0x00101888 VariableRuntimeDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Variable\RuntimeDxe\VariableRuntimeDxe.inf)
0x0010A158 WatchdogTimer (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\WatchdogTimerDxe\WatchdogTimer.inf)
0x0010B610 MonotonicCounterRuntimeDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\MonotonicCounterRuntimeDxe
\MonotonicCounterRuntimeDxe.inf)
0x0010CD38 CapsuleRuntimeDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\CapsuleRuntimeDxe\CapsuleRuntimeDxe.inf)
0x0010F1C8 ConPlatformDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Console\ConPlatformDxe\ConPlatformDxe.inf)
0x00111A10 ConSplitterDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Console\ConSplitterDxe\ConSplitterDxe.inf)
0x00116600 GraphicsConsoleDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Console\GraphicsConsoleDxe
\GraphicsConsoleDxe.inf)
0x00119DD0 SerialDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\SerialDxe\SerialDxe.inf)
0x0011A9F0 TerminalDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Console\TerminalDxe\TerminalDxe.inf)
0x0011FE58 DevicePathDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\DevicePathDxe\DevicePathDxe.inf)
0x00126D30 DiskIoDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Disk\DiskIoDxe\DiskIoDxe.inf)
0x00129CA8 PartitionDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Disk\PartitionDxe\PartitionDxe.inf)
0x0012DEC8 EnglishDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\Disk\UnicodeCollation\EnglishDxe\EnglishDxe.inf)
0x0012F590 PciBusDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Bus\Pci\PciBusDxe\PciBusDxe.inf)
0x0013BD80 ScsiBus (c:\fw\edk2-ws\edk2\MdeModulePkg\Bus\Scsi\ScsiBusDxe\ScsiBusDxe.inf)
0x0013E9C0 ScsiDisk (c:\fw\edk2-ws\edk2\MdeModulePkg\Bus\Scsi\ScsiDiskDxe\ScsiDiskDxe.inf)
0x00144630 SmbiosDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\SmbiosDxe\SmbiosDxe.inf)
0x00147108 EmuBusDriver (c:\fw\edk2-ws\edk2\EmulatorPkg\EmuBusDriverDxe\EmuBusDriverDxe.inf)
0x00149748 EmuGopDxe (c:\fw\edk2-ws\edk2\EmulatorPkg\EmuGopDxe\EmuGopDxe.inf)
0x0014C3B8 EmuSimpleFileSystem (c:\fw\edk2-ws\edk2\EmulatorPkg\EmuSimpleFileSystemDxe\EmuSimpleFileSystemDxe.inf)
0x0014E5C0 EmuBlockIo (c:\fw\edk2-ws\edk2\EmulatorPkg\EmuBlockIoDxe\EmuBlockIoDxe.inf)
0x00150EE0 EmuSnpDxe (c:\fw\edk2-ws\edk2\EmulatorPkg\EmuSnpDxe\EmuSnpDxe.inf)
0x001533E8 HiiDatabase (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\HiiDatabaseDxe\HiiDatabaseDxe.inf)
0x00165A18 DisplayEngine (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\DisplayEngineDxe\DisplayEngineDxe.inf)
0x00172128 SetupBrowser (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\SetupBrowserDxe\SetupBrowserDxe.inf)
0x00181F58 PrintDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\PrintDxe\PrintDxe.inf)
0x00184550 BdsDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\BdsDxe\BdsDxe.inf)
0x00192E18 LogoDxe (c:\fw\edk2-ws\edk2\MdeModulePkg\Logo\LogoDxe.inf)
0x00195890 LoadFileOnFv2 (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\LoadFileOnFv2\LoadFileOnFv2.inf)
0x00197A30 UiApp (c:\fw\edk2-ws\edk2\MdeModulePkg\Application\UiApp\UiApp.inf)
0x001DCAB0 BootManagerMenuApp (c:\fw\edk2-ws\edk2\MdeModulePkg\Application\BootManagerMenuApp\BootManagerMenuApp.inf)
0x001E90B0 DriverSample (c:\fw\edk2-ws\edk2\MdeModulePkg\Universal\DriverSampleDxe\DriverSampleDxe.inf)
0x001F4D28 DpcDxe (c:\fw\edk2-ws\edk2\NetworkPkg\DpcDxe\DpcDxe.inf)
0x001F6420 VlanConfigDxe (c:\fw\edk2-ws\edk2\NetworkPkg\VlanConfigDxe\VlanConfigDxe.inf)
0x001FB638 MnpDxe (c:\fw\edk2-ws\edk2\NetworkPkg\MnpDxe\MnpDxe.inf)
0x00202ED0 ArpDxe (c:\fw\edk2-ws\edk2\NetworkPkg\ArpDxe\ArpDxe.inf)
0x00206C20 Dhcp4Dxe (c:\fw\edk2-ws\edk2\NetworkPkg\Dhcp4Dxe\Dhcp4Dxe.inf)
0x0020D568 Ip4Dxe (c:\fw\edk2-ws\edk2\NetworkPkg\Ip4Dxe\Ip4Dxe.inf)
0x0021AAB0 Udp4Dxe (c:\fw\edk2-ws\edk2\NetworkPkg\Udp4Dxe\Udp4Dxe.inf)
0x00221728 Mtftp4Dxe (c:\fw\edk2-ws\edk2\NetworkPkg\Mtftp4Dxe\Mtftp4Dxe.inf)
0x00228328 TcpDxe (c:\fw\edk2-ws\edk2\NetworkPkg\TcpDxe\TcpDxe.inf)
0x00234A20 UefiPxeBcDxe (c:\fw\edk2-ws\edk2\NetworkPkg\UefiPxeBcDxe\UefiPxeBcDxe.inf)
0x00240168 Fat (c:\fw\edk2-ws\edk2\FatPkg\EnhancedFatDxe\Fat.inf)
0x00246A00 tftpDynamicCommand (c:\fw\edk2-ws\edk2\ShellPkg\DynamicCommand\TftpDynamicCommand\TftpDynamicCommand.inf)
0x0024D430 Shell (c:\fw\edk2-ws\edk2\ShellPkg\Application\Shell\Shell.inf)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
FD Region
Type:               DATA
Base Address:       0x580000
Size:               0xC000 (48K)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
FD Region
Type:               None
Base Address:       0x58C000
Size:               0x2000 (8K)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
FD Region
Type:               DATA
Base Address:       0x58E000
Size:               0x2000 (8K)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
FD Region
Type:               None
Base Address:       0x590000
Size:               0x10000 (64K)
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          WinHost
Module Arch:          X64
Module INF Path:      EmulatorPkg\Win\Host\WinHost.inf
File GUID:            62E8F833-2B0A-4C19-A966-63C180588BE7
Module Build Time:    2141ms
Driver Type:          0x2 (FREE_FORM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdInitValueInTempStack                  :  FIXED   (UINT32) = 0x5AA55AA5 (1520786085)
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
 *M PcdEmuBootMode                           :  FIXED   (UINT32) = 0x0 (0)
                                                     DEC DEFAULT = 0x1 (1)
 *M PcdEmuFdBaseAddress                      :  FIXED   (UINT64) = 0x102000000 (4328521728)
                                                     DEC DEFAULT = 0x0 (0)
    PcdEmuFileSystem                         :  FIXED    (VOID*) = L"."
 *M PcdEmuFirmwareVolume                     :  FIXED    (VOID*) = L"../FV/FV_RECOVERY.fd"
                                                     DEC DEFAULT = L"..\\Fv\\Fv_Recovery.fd"
 *M PcdEmuGop                                :  FIXED    (VOID*) = L"GOP Window 1!GOP Window 2"
                                                     INF DEFAULT = L"GOP Window 1!GOP Window 2"
                                                     DEC DEFAULT = L"GOP Window"
    PcdEmuMemorySize                         :  FIXED    (VOID*) = L"64!64"
    PcdEmuNetworkInterface                   :  FIXED    (VOID*) = L"en0"
                                                     INF DEFAULT = L"0"
    PcdEmuVirtualDisk                        :  FIXED    (VOID*) = L"disk.dmg:FW"
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePcdLibNull\BasePcdLibNull.inf
{PcdLib:  Time = 348ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugLibNull\BaseDebugLibNull.inf
{DebugLib:  Time = 344ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffExtraActionLibNull\BasePeCoffExtraActionLibNull.inf
{PeCoffExtraActionLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\SecPpiListLib\SecPpiListLib.inf
{PpiListLib:  Time = 377ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffLib\BasePeCoffLib.inf
{PeCoffLib:  Time = 433ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\ThunkPpiList\ThunkPpiList.inf
{MemoryAllocationLib:  Time = 437ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\ThunkProtocolList\ThunkProtocolList.inf
{MemoryAllocationLib:  Time = 374ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\SecPeiServicesLib\SecPeiServicesLib.inf
{PeiServicesLib:  Time = 446ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\FrameBufferBltLib\FrameBufferBltLib.inf
{FrameBufferBltLib:  Time = 394ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /W4 /WX /Gy /c /D UNICODE /Od /Oy- /FIAutoGen.h /EHs-c- /GF /Gs8192 /Zi /Gm /D
_CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE -D DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /out:"$(BIN_DIR)\$(BASE_NAME).exe" /base:0x10000000 /pdb:"$(BIN_DIR)\$(BASE_NAME).pdb"
/LIBPATH:"%VS2015_PREFIX%VC\Lib\AMD64" /LIBPATH:"%UniversalCRTSdkDir%lib\%UCRTVersion%\ucrt\x64"
/LIBPATH:"%WindowsSdkDir%lib\%WindowsSDKLibVersion%\um\x64" /NOLOGO /SUBSYSTEM:CONSOLE /NODEFAULTLIB /IGNORE:4086 /MAP
/OPT:REF /DEBUG /MACHINE:AMD64 /LTCG Kernel32.lib MSVCRTD.lib vcruntimed.lib ucrtd.lib Gdi32.lib User32.lib Winmm.lib
Advapi32.lib /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT) /BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSec
Module Arch:          X64
Module INF Path:      EmulatorPkg\Sec\Sec.inf
File GUID:            BCAF98C9-22B0-3B4F-9CBD-C8A6B4DBCEE9
Size:                 0xB000 (44.00K)
SHA1 HASH:            9d4f0445659776a7b36e2c410f3c938796f2684b *EmuSec.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    455ms
Driver Type:          0x3 (SECURITY_CORE)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePcdLibNull\BasePcdLibNull.inf
{PcdLib:  Time = 348ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\SecPpiListLib\SecPpiListLib.inf
{PpiListLib:  Time = 377ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\SecPeiServicesLib\SecPeiServicesLib.inf
{PeiServicesLib:  Time = 446ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiEmuSerialPortLib\PeiEmuSerialPortLib.inf
{SerialPortLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugLibSerialPort\BaseDebugLibSerialPort.inf
{DebugLib:  C = BaseDebugLibSerialPortConstructor Time = 330ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiEmuPeCoffGetEntryPointLib\PeiEmuPeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 344ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
PP_FLAGS =  /nologo /E /TC /FIAutoGen.h
------------------------------------------------------------------------------------------------------------------------
ASM_FLAGS =  /nologo /c /WX /W3 /Cx /Zd /Zi
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PeiCore
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\Pei\PeiMain.inf
File GUID:            52C05B14-0B98-496c-BC3B-04B50211D680
Size:                 0x20000 (128.00K)
SHA1 HASH:            bda5dcf077f9135ef13718bf52ca18baaa0644bc *PeiCore.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    465ms
Driver Type:          0x4 (PEI_CORE)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdInitValueInTempStack                  :  FIXED   (UINT32) = 0x5AA55AA5 (1520786085)
    PcdLoadFixAddressBootTimeCodePageNumber   :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadFixAddressPeiCodePageNumber       :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadFixAddressRuntimeCodePageNumber   :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadModuleAtFixAddressEnable          :  FIXED   (UINT64) = 0x0 (0)
    PcdMigrateTemporaryRamFirmwareVolumes    :  FIXED  (BOOLEAN) = 0
 *M PcdPeiCoreImageLoaderSearchTeSectionFirst   :   FLAG  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdPeiCoreMaxPeiStackSize                :  FIXED   (UINT32) = 0x20000 (131072)
    PcdShadowPeimOnBoot                      :  FIXED  (BOOLEAN) = 1
    PcdShadowPeimOnS3Boot                    :  FIXED  (BOOLEAN) = 0
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePcdLibNull\BasePcdLibNull.inf
{PcdLib:  Time = 348ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiEmuPeCoffExtraActionLib\PeiEmuPeCoffExtraActionLib.inf
{PeCoffExtraActionLib:  Time = 393ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiEmuPeCoffGetEntryPointLib\PeiEmuPeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 344ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiCoreEntryPoint\PeiCoreEntryPoint.inf
{PeiCoreEntryPoint:  Time = 341ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseCacheMaintenanceLib\BaseCacheMaintenanceLib.inf
{CacheMaintenanceLib:  Time = 339ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffLib\BasePeCoffLib.inf
{PeCoffLib:  Time = 433ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x010200f000      (Image Base)
*EF  0x0102010068      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PcdPeim
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PCD\Pei\Pcd.inf
File GUID:            9B3ADA4F-AE56-4c24-8DEA-F03B7558AE50
Size:                 0xE000 (56.00K)
SHA1 HASH:            7c14043512a2ffe40725bc9c2115449db01ca00d *PcdPeim.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    397ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdMaxPeiPcdCallBackNumberPerPcdEntry    :  FIXED   (UINT32) = 0x08 (8)
    PcdNvStoreDefaultValueBuffer             :    DEX    (VOID*) = {0x0}
    PcdPeiFullPcdDatabaseEnable              :   FLAG  (BOOLEAN) = 1
    PcdSetNvStoreDefaultId                   :    DEX   (UINT16) = 0x0 (0)
    PcdVpdBaseAddress                        :  FIXED   (UINT32) = 0x0 (0)
    PcdVpdBaseAddress64                      :    DEX   (UINT64) = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePcdLibNull\BasePcdLibNull.inf
{PcdLib:  Time = 348ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  TRUE
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (None)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x0102031000      (Image Base)
*EF  0x0102032000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ReportStatusCodeRouterPei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\ReportStatusCodeRouter\Pei\ReportStatusCodeRouterPei.inf
File GUID:            A3610442-E69F-4DF3-82CA-2360C4031A23
Size:                 0xA000 (40.00K)
SHA1 HASH:            90f7e3cd2979e1b69886b25cee48bd26a63f483c *ReportStatusCodeRouterPei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    404ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPeiPcdPpiGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x0102041000      (Image Base)
*EF  0x0102042000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          StatusCodeHandlerPei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\StatusCodeHandler\Pei\StatusCodeHandlerPei.inf
File GUID:            9D225237-FA01-464C-A949-BAABC02D31D0
Size:                 0xE000 (56.00K)
SHA1 HASH:            7bc946f550116926b7b3bd6a2520a1fc57abae98 *StatusCodeHandlerPei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    535ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdStatusCodeMemorySize                  :  FIXED   (UINT16) = 0x1 (1)
    PcdStatusCodeUseMemory                   :  FIXED  (BOOLEAN) = 0
    PcdStatusCodeUseSerial                   :  FIXED  (BOOLEAN) = 1
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiEmuSerialPortLib\PeiEmuSerialPortLib.inf
{SerialPortLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPeiRscHandlerPpiGuid
  PUSH gEfiPeiPcdPpiGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiPeiRscHandlerPpiGuid) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiPeiRscHandlerPpiGuid
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x010204d000      (Image Base)
*EF  0x010204e000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BootModePei
Module Arch:          X64
Module INF Path:      EmulatorPkg\BootModePei\BootModePei.inf
File GUID:            64196C76-58E3-0B4D-9484-B54F7C4349CA
Size:                 0xA000 (40.00K)
SHA1 HASH:            c065492e33370cbdb3ada215b15a62b02a47a5aa *BootModePei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    337ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
 *M PcdEmuBootMode                           :  FIXED   (UINT32) = 0x0 (0)
                                                     DEC DEFAULT = 0x1 (1)
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPeiPcdPpiGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x010205d000      (Image Base)
*EF  0x010205e000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FaultTolerantWritePei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\FaultTolerantWritePei\FaultTolerantWritePei.inf
File GUID:            AAC33064-9ED0-4b89-A5AD-3EA767960B22
Size:                 0xA000 (40.00K)
SHA1 HASH:            f8dfdc3510365f653359cffdde955d960d6d4000 *FaultTolerantWritePei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    421ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdFlashNvStorageFtwSpareBase            :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageFtwSpareBase64          :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageFtwSpareSize            :  FIXED   (UINT32) = 0x00010000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase          :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase64        :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageFtwWorkingSize          :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPeiPcdPpiGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x0102099000      (Image Base)
*EF  0x010209a000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PeiVariable
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Variable\Pei\VariablePei.inf
File GUID:            34C8C28F-B61C-45a2-8F2E-89E46BECC63B
Size:                 0xC000 (48.00K)
SHA1 HASH:            8c20122741b255c6820cfcfd6d1bdd039243aad7 *PeiVariable.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    338ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdEmuVariableNvModeEnable               :  FIXED  (BOOLEAN) = 0
    PcdFlashNvStorageVariableBase            :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageVariableBase64          :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageVariableSize            :  FIXED   (UINT32) = 0x0000C000 (49152)
                                                     DEC DEFAULT = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEdkiiFaultTolerantWriteGuid
  PUSH gEfiPeiPcdPpiGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEdkiiFaultTolerantWriteGuid) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEdkiiFaultTolerantWriteGuid
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x01020a5000      (Image Base)
*EF  0x01020a6000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          AutoScanPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\AutoScanPei\AutoScanPei.inf
File GUID:            2D6F6BCC-9681-8E42-8579-B57DCD0060F0
Size:                 0xA000 (40.00K)
SHA1 HASH:            da9aba338471cf35a48f49b5e1504f418cfbc331 *AutoScanPei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    332ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEmuThunkPpiGuid
  PUSH gEfiPeiMasterBootModePpiGuid
  PUSH gEfiPeiPcdPpiGuid
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEmuThunkPpiGuid AND gEfiPeiMasterBootModePpiGuid) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEmuThunkPpiGuid AND gEfiPeiMasterBootModePpiGuid
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x0102069000      (Image Base)
*EF  0x010206a000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FirmwareVolumePei
Module Arch:          X64
Module INF Path:      EmulatorPkg\FirmwareVolumePei\FirmwareVolumePei.inf
File GUID:            6DB075DE-449E-2644-96D0-CC5A1B4C3B2A
Size:                 0xA000 (40.00K)
SHA1 HASH:            e6baee5f58c4117a444809413e5e510f6d56b9b5 *FirmwareVolumePei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    378ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
 *M PcdFlashNvStorageFtwSpareSize            :  FIXED   (UINT32) = 0x00010000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdFlashNvStorageFtwWorkingSize          :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdFlashNvStorageVariableSize            :  FIXED   (UINT32) = 0x0000C000 (49152)
                                                     DEC DEFAULT = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
 *M PcdEmuFlashNvStorageEventLogSize         :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFlashNvStorageVariableBase         :  FIXED   (UINT64) = 0x102580000 (4334288896)
                                                     DEC DEFAULT = 0x0 (0)
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEmuThunkPpiGuid
  PUSH gEfiPeiMemoryDiscoveredPpiGuid
  PUSH gEfiPeiPcdPpiGuid
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEmuThunkPpiGuid AND gEfiPeiMemoryDiscoveredPpiGuid) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEmuThunkPpiGuid AND gEfiPeiMemoryDiscoveredPpiGuid
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x0102075000      (Image Base)
*EF  0x0102076000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FlashMapPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\FlashMapPei\FlashMapPei.inf
File GUID:            C9FAF091-57F8-A64C-A07A-445B124F0D93
Size:                 0xA000 (40.00K)
SHA1 HASH:            00cf8fac9caf96f4a4b9f5810b2b2287265a5566 *FlashMapPei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    361ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdFlashNvStorageFtwSpareBase64          :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageFtwSpareSize            :  FIXED   (UINT32) = 0x00010000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase64        :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageFtwWorkingSize          :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageVariableBase64          :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageVariableSize            :  FIXED   (UINT32) = 0x0000C000 (49152)
                                                     DEC DEFAULT = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
 *M PcdEmuFlashNvStorageFtwSpareBase         :  FIXED   (UINT64) = 0x102590000 (4334354432)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFlashNvStorageFtwWorkingBase       :  FIXED   (UINT64) = 0x10258E000 (4334346240)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFlashNvStorageVariableBase         :  FIXED   (UINT64) = 0x102580000 (4334288896)
                                                     DEC DEFAULT = 0x0 (0)
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEmuThunkPpiGuid
  PUSH gEfiPeiPcdPpiGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEmuThunkPpiGuid) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEmuThunkPpiGuid
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x0102081000      (Image Base)
*EF  0x0102082000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ThunkPpiToProtocolPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\ThunkPpiToProtocolPei\ThunkPpiToProtocolPei.inf
File GUID:            C32A66D5-D8B7-2640-B768-082C8F083C37
Size:                 0xA000 (40.00K)
SHA1 HASH:            9a0065d8dc726aa87345d629cf31678ff3abcc7b *ThunkPpiToProtocolPei.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    349ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEmuThunkPpiGuid
  PUSH gEfiPeiMemoryDiscoveredPpiGuid
  PUSH gEfiPeiPcdPpiGuid
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEmuThunkPpiGuid AND gEfiPeiMemoryDiscoveredPpiGuid) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEmuThunkPpiGuid AND gEfiPeiMemoryDiscoveredPpiGuid
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x010208d000      (Image Base)
*EF  0x010208e000      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DxeIpl
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\DxeIplPeim\DxeIpl.inf
File GUID:            86D70125-BAA3-4296-A62F-602BEBBB9081
Size:                 0x11000 (68.00K)
SHA1 HASH:            445e01227dcb78ef1ec55a5c665916343091a4db *DxeIpl.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    386ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdCpuStackGuard                         :  FIXED  (BOOLEAN) = 0
 *M PcdDxeIplBuildPageTables                 :   FLAG  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdDxeIplSupportUefiDecompress           :   FLAG  (BOOLEAN) = 1
    PcdDxeNxMemoryProtectionPolicy           :  FIXED   (UINT64) = 0x0000000 (0)
    PcdGhcbBase                              :    DYN   (UINT64) = 0x0 (0)
    PcdGhcbSize                              :    DYN   (UINT64) = 0x0 (0)
    PcdHeapGuardPropertyMask                 :  FIXED    (UINT8) = 0x0 (0)
 *M PcdImageProtectionPolicy                 :  FIXED   (UINT32) = 0x00000000 (0)
                                                     DEC DEFAULT = 0x00000002 (2)
    PcdNullPointerDetectionPropertyMask      :  FIXED    (UINT8) = 0x0 (0)
    PcdPteMemoryEncryptionAddressOrMask      :  FIXED   (UINT64) = 0x0 (0)
    PcdSetNxForStack                         :  FIXED  (BOOLEAN) = 0
    PcdUse1GPageTable                        :  FIXED  (BOOLEAN) = 0
    PcdUse5LevelPageTable                    :  FIXED  (BOOLEAN) = 0
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumGuidedExtractHandler           :  FIXED   (UINT32) = 0x10 (16)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdPeiServicesTablePage                  :  FIXED   (UINT64) = 0x1013000000 (69038243840)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\OemHookStatusCodeLibNull\OemHookStatusCodeLibNull.inf
{OemHookStatusCodeLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PeiServicesTablePointerLibMagicPage\PeiServicesTablePointerLibMagicPage.inf
{PeiServicesTablePointerLib:  Time = 378ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiHobLib\PeiHobLib.inf
{HobLib:  Time = 322ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiServicesLib\PeiServicesLib.inf
{PeiServicesLib:  Time = 320ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiReportStatusCodeLib\PeiReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiMemoryAllocationLib\PeiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiPcdLib\PeiPcdLib.inf
{PcdLib:  Depex = gEfiPeiPcdPpiGuid  Time = 382ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeiExtractGuidedSectionLib\PeiExtractGuidedSectionLib.inf
{ExtractGuidedSectionLib:  Time = 372ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseUefiDecompressLib\BaseUefiDecompressLib.inf
{UefiDecompressLib:  Time = 330ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\PeimEntryPoint\PeimEntryPoint.inf
{PeimEntryPoint:  Time = 342ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DebugAgentLibNull\DebugAgentLibNull.inf
{DebugAgentLib:  Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPeiLoadFilePpiGuid
  PUSH gEfiPeiMasterBootModePpiGuid
  PUSH gEfiPeiPcdPpiGuid
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiPeiLoadFilePpiGuid AND gEfiPeiMasterBootModePpiGuid) AND (gEfiPeiPcdPpiGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiPeiLoadFilePpiGuid AND gEfiPeiMasterBootModePpiGuid
From Library INF: (gEfiPeiPcdPpiGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Fixed Address Prediction
*I  Image Loading Address
*E  Entry Point Address
*N  Notification Function Address
*F  Flash Address
*M  Memory Address
*S  SMM RAM Offset
TOM Top of Memory
Type Address           Name
------------------------------------------------------------------------------------------------------------------------
*IF  0x01020b3000      (Image Base)
*EF  0x01020b40c0      _ModuleEntryPoint
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DxeCore
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\Dxe\DxeMain.inf
File GUID:            D6A2CB7F-6A18-4e2f-B43B-9920A733700A
Size:                 0x46000 (280.00K)
SHA1 HASH:            bae0f48c8aac3dbbae32aa33cb2f03f47896f2ad *DxeCore.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    1347ms
Driver Type:          0x5 (DXE_CORE)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdCpuStackGuard                         :  FIXED  (BOOLEAN) = 0
    PcdDxeNxMemoryProtectionPolicy           :  FIXED   (UINT64) = 0x0000000 (0)
    PcdFwVolDxeMaxEncapsulationDepth         :  FIXED   (UINT32) = 0x10 (16)
    PcdHeapGuardPageType                     :  FIXED   (UINT64) = 0x0 (0)
    PcdHeapGuardPoolType                     :  FIXED   (UINT64) = 0x0 (0)
    PcdHeapGuardPropertyMask                 :  FIXED    (UINT8) = 0x0 (0)
 *M PcdImageProtectionPolicy                 :  FIXED   (UINT32) = 0x00000000 (0)
                                                     DEC DEFAULT = 0x00000002 (2)
    PcdLoadFixAddressBootTimeCodePageNumber   :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadFixAddressRuntimeCodePageNumber   :  PATCH   (UINT32) = 0x0 (0)
    PcdLoadModuleAtFixAddressEnable          :  FIXED   (UINT64) = 0x0 (0)
    PcdMaxEfiSystemTablePointerAddress       :  FIXED   (UINT64) = 0x0 (0)
    PcdMemoryProfileDriverPath               :  FIXED    (VOID*) = {0x0}
    PcdMemoryProfileMemoryType               :  FIXED   (UINT64) = 0x0 (0)
    PcdMemoryProfilePropertyMask             :  FIXED    (UINT8) = 0x0 (0)
    PcdNullPointerDetectionPropertyMask      :  FIXED    (UINT8) = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePcdLibNull\BasePcdLibNull.inf
{PcdLib:  Time = 348ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuStdErrSerialPortLib\DxeEmuStdErrSerialPortLib.inf
{SerialPortLib:  Time = 390ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugLibSerialPort\BaseDebugLibSerialPort.inf
{DebugLib:  C = BaseDebugLibSerialPortConstructor Time = 330ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeCoreEntryPoint\DxeCoreEntryPoint.inf
{DxeCoreEntryPoint:  Time = 400ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeCoreHobLib\DxeCoreHobLib.inf
{HobLib:  Time = 417ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeCoreMemoryAllocationLib\DxeCoreMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 420ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuPeCoffExtraActionLib\DxeEmuPeCoffExtraActionLib.inf
{PeCoffExtraActionLib:  C = DxeEmuPeCoffLibExtraActionConstructor Time = 476ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeExtractGuidedSectionLib\DxeExtractGuidedSectionLib.inf
{ExtractGuidedSectionLib:  C = DxeExtractGuidedSectionLibConstructor Time = 404ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseCacheMaintenanceLib\BaseCacheMaintenanceLib.inf
{CacheMaintenanceLib:  Time = 339ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseUefiDecompressLib\BaseUefiDecompressLib.inf
{UefiDecompressLib:  Time = 330ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffLib\BasePeCoffLib.inf
{PeCoffLib:  Time = 433ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffGetEntryPointLib\BasePeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 491ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DebugAgentLibNull\DebugAgentLibNull.inf
{DebugAgentLib:  Time = 342ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\CpuExceptionHandlerLibNull\CpuExceptionHandlerLibNull.inf
{CpuExceptionHandlerLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeCrc32GuidedSectionExtractLib\DxeCrc32GuidedSectionExtractLib.inf
{NULL:  C = DxeCrc32GuidedSectionExtractLibConstructor Time = 365ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\LzmaCustomDecompressLib\LzmaCustomDecompressLib.inf
{NULL:  C = LzmaDecompressLibConstructor Time = 394ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PcdDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PCD\Dxe\Pcd.inf
File GUID:            80CF7257-87AB-47f9-A3FE-D50B76D89541
Size:                 0x11000 (68.00K)
SHA1 HASH:            6ae1cbf010837e04d29d3ec21730a8b85669450a *PcdDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    436ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdSetNvStoreDefaultId                   :    DEX   (UINT16) = 0x0 (0)
    PcdVpdBaseAddress                        :  FIXED   (UINT32) = 0x0 (0)
    PcdVpdBaseAddress64                      :    DEX   (UINT64) = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePcdLibNull\BasePcdLibNull.inf
{PcdLib:  Time = 348ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  TRUE
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (None)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ReportStatusCodeRouterRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\ReportStatusCodeRouter\RuntimeDxe\ReportStatusCodeRouterRuntimeDxe.inf
File GUID:            D93CE3D8-A7EB-4730-8C8E-CC466A9ECC3C
Size:                 0xC000 (48.00K)
SHA1 HASH:            1ec98347a61bbafad7a937d0b2aa21b823324a7d *ReportStatusCodeRouterRuntimeDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    410ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdSpinLockTimeout                       :  FIXED   (UINT32) = 0x989680 (10000000)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeTimerLib\DxeTimerLib.inf
{TimerLib:  C = DxeTimerLibConstructor Time = 380ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeLib\UefiRuntimeLib.inf
{UefiRuntimeLib:  C = RuntimeDriverLibConstruct D = RuntimeDriverLibDeconstruct Time = 361ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseSynchronizationLib\BaseSynchronizationLib.inf
{SynchronizationLib:  Time = 394ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          StatusCodeHandlerRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\StatusCodeHandler\RuntimeDxe\StatusCodeHandlerRuntimeDxe.inf
File GUID:            6C2004EF-4E0E-4BE4-B14C-340EB4AA5891
Size:                 0xD000 (52.00K)
SHA1 HASH:            d1bec9ea4ee326af791f01e7d2ddc38071e9d1b6 *StatusCodeHandlerRuntimeDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    429ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
 *M PcdStatusCodeMemorySize                  :  FIXED   (UINT16) = 0x80 (128)
                                                     DEC DEFAULT = 0x1 (1)
    PcdStatusCodeReplayIn                    :   FLAG  (BOOLEAN) = 0
    PcdStatusCodeUseMemory                   :  FIXED  (BOOLEAN) = 0
    PcdStatusCodeUseSerial                   :  FIXED  (BOOLEAN) = 1
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuStdErrSerialPortLib\DxeEmuStdErrSerialPortLib.inf
{SerialPortLib:  Time = 390ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugLibSerialPort\BaseDebugLibSerialPort.inf
{DebugLib:  C = BaseDebugLibSerialPortConstructor Time = 330ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeLib\UefiRuntimeLib.inf
{UefiRuntimeLib:  C = RuntimeDriverLibConstruct D = RuntimeDriverLibDeconstruct Time = 361ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiRscHandlerProtocolGuid
  PUSH gEfiPcdProtocolGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiRscHandlerProtocolGuid) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiRscHandlerProtocolGuid
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Metronome
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Metronome\Metronome.inf
File GUID:            C8339973-A563-4561-B858-D8476F9DEFC4
Size:                 0xB000 (44.00K)
SHA1 HASH:            98c613b8f128f6bf10a160bc1a359a14512d2592 *Metronome.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    444ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeTimerLib\DxeTimerLib.inf
{TimerLib:  C = DxeTimerLibConstructor Time = 380ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          RealTimeClock
Module Arch:          X64
Module INF Path:      EmulatorPkg\RealTimeClockRuntimeDxe\RealTimeClock.inf
File GUID:            f3552032-8985-11db-8429-0040d02b1835
Size:                 0xA000 (40.00K)
SHA1 HASH:            e6b742f7a10fd8304788637ddcb04200f8d1a8bc *RealTimeClock.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    405ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuReset
Module Arch:          X64
Module INF Path:      EmulatorPkg\ResetRuntimeDxe\Reset.inf
File GUID:            50A18017-37AD-8743-BCF2-DF1A8FF12FAB
Size:                 0xA000 (40.00K)
SHA1 HASH:            78702c60a672ae54e8efc6d5db0bc9b4ca4a771c *EmuReset.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    470ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          RuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\RuntimeDxe\RuntimeDxe.inf
File GUID:            B601F8C4-43B7-4784-95B1-F4226CB40CEE
Size:                 0xC000 (48.00K)
SHA1 HASH:            eb519868af0841e82c56e1985a10bf11d0c9dfc1 *RuntimeDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    414ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuPeCoffExtraActionLib\DxeEmuPeCoffExtraActionLib.inf
{PeCoffExtraActionLib:  C = DxeEmuPeCoffLibExtraActionConstructor Time = 476ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffLib\BasePeCoffLib.inf
{PeCoffLib:  Time = 433ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseCacheMaintenanceLib\BaseCacheMaintenanceLib.inf
{CacheMaintenanceLib:  Time = 339ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FwBlockService
Module Arch:          X64
Module INF Path:      EmulatorPkg\FvbServicesRuntimeDxe\FvbServicesRuntimeDxe.inf
File GUID:            A01E498C-96E8-2A4C-95F4-85248F989753
Size:                 0xC000 (48.00K)
SHA1 HASH:            e87a863a1803d569c372edc850432b554453b64e *FwBlockService.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    393ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdFlashNvStorageFtwSpareBase            :  FIXED   (UINT32) = 0x0 (0)
 *M PcdFlashNvStorageFtwSpareSize            :  FIXED   (UINT32) = 0x00010000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase          :  FIXED   (UINT32) = 0x0 (0)
 *M PcdFlashNvStorageFtwWorkingSize          :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageVariableBase            :  FIXED   (UINT32) = 0x0 (0)
 *M PcdFlashNvStorageVariableSize            :  FIXED   (UINT32) = 0x0000C000 (49152)
                                                     DEC DEFAULT = 0x0 (0)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
 *M PcdEmuFirmwareBlockSize                  :  FIXED   (UINT32) = 0x10000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFirmwareFdSize                     :  FIXED   (UINT32) = 0x005a0000 (5898240)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFlashFvRecoveryBase                :  FIXED   (UINT64) = 0x102000000 (4328521728)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFlashFvRecoverySize                :  FIXED   (UINT32) = 0x00580000 (5767168)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFlashNvStorageEventLogBase         :  FIXED   (UINT64) = 0x10258C000 (4334338048)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdEmuFlashNvStorageEventLogSize         :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeLib\UefiRuntimeLib.inf
{UefiRuntimeLib:  C = RuntimeDriverLibConstruct D = RuntimeDriverLibDeconstruct Time = 361ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SecurityStubDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SecurityStubDxe\SecurityStubDxe.inf
File GUID:            F80697E9-7FD6-4665-8646-88E33EF71DFC
Size:                 0x14000 (80.00K)
SHA1 HASH:            c055cf4029d0199421b1ff1107f945307d12fff4 *SecurityStubDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    438ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeSecurityManagementLib\DxeSecurityManagementLib.inf
{SecurityManagementLib:  Time = 371ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EbcDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\EbcDxe\EbcDxe.inf
File GUID:            13AC6DD0-73D0-11D4-B06B-00AA00BD6DE7
Size:                 0x13000 (76.00K)
SHA1 HASH:            a3501943d21ca9e20846bfbadc77259f157c71f1 *EbcDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    471ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuPeCoffExtraActionLib\DxeEmuPeCoffExtraActionLib.inf
{PeCoffExtraActionLib:  C = DxeEmuPeCoffLibExtraActionConstructor Time = 476ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseCacheMaintenanceLib\BaseCacheMaintenanceLib.inf
{CacheMaintenanceLib:  Time = 339ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffLib\BasePeCoffLib.inf
{PeCoffLib:  Time = 433ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          NullMemoryTestDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\MemoryTest\NullMemoryTestDxe\NullMemoryTestDxe.inf
File GUID:            96B5C032-DF4C-4b6e-8232-438DCF448D0E
Size:                 0xA000 (40.00K)
SHA1 HASH:            6779290e54825b406ccd249cde0933b004ffffd6 *NullMemoryTestDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    389ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuThunk
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuThunkDxe\EmuThunk.inf
File GUID:            2F62A818-4A72-CD40-90B9-FF00DAABEE7B
Size:                 0xA000 (40.00K)
SHA1 HASH:            60b1255047242075b64acc1d4a7647241ac29191 *EmuThunk.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    426ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Cpu
Module Arch:          X64
Module INF Path:      EmulatorPkg\CpuRuntimeDxe\Cpu.inf
File GUID:            f3794b60-8985-11db-8e53-0040d02b1835
Size:                 0xD000 (52.00K)
SHA1 HASH:            060441e52748947ac54070c829ad41b8736eb087 *Cpu.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    592ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
    PcdEmuMpServicesPollingInterval          :  FIXED   (UINT64) = 0x100 (256)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Depex = gEfiHiiStringProtocolGuid AND
 gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid  Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiSmbiosProtocolGuid
  PUSH gEfiPcdProtocolGuid
  PUSH gEfiHiiStringProtocolGuid
  PUSH gEfiHiiDatabaseProtocolGuid
  PUSH gEfiHiiConfigRoutingProtocolGuid
  AND
  AND
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiSmbiosProtocolGuid) AND (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiSmbiosProtocolGuid
From Library INF: (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FaultTolerantWriteDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\FaultTolerantWriteDxe\FaultTolerantWriteDxe.inf
File GUID:            FE5CEA76-4F72-49e8-986F-2CD899DFFE5D
Size:                 0x11000 (68.00K)
SHA1 HASH:            7edccfa4edf0f03a9a575bdf43713e3fb8764dca *FaultTolerantWriteDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    491ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdFlashNvStorageFtwSpareBase            :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageFtwSpareBase64          :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageFtwSpareSize            :  FIXED   (UINT32) = 0x00010000 (65536)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase          :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageFtwWorkingBase64        :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageFtwWorkingSize          :  FIXED   (UINT32) = 0x00002000 (8192)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFullFtwServiceEnable                  :   FLAG  (BOOLEAN) = 1
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiFirmwareVolumeBlock2ProtocolGuid
  PUSH gEfiRuntimeArchProtocolGuid
  PUSH gEfiPcdProtocolGuid
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiFirmwareVolumeBlockProtocolGuid AND gEfiRuntimeArchProtocolGuid) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiFirmwareVolumeBlockProtocolGuid AND gEfiRuntimeArchProtocolGuid
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PlatformSmbiosDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\PlatformSmbiosDxe\PlatformSmbiosDxe.inf
File GUID:            67FA951E-4FA2-9F4E-A658-4DBD954AC22E
Size:                 0xB000 (44.00K)
SHA1 HASH:            87859c4a29a6fdc0a226910ff22b7fba9497103c *PlatformSmbiosDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    478ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdFirmwareReleaseDateString             :  FIXED    (VOID*) = L""
    PcdFirmwareVersionString                 :  FIXED    (VOID*) = L""
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUefiVariableDefaultPlatformLang       :  FIXED    (VOID*) = "en-US"
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEmulatorPkgTokenSpaceGuid
 *M PcdEmuFirmwareFdSize                     :  FIXED   (UINT32) = 0x005a0000 (5898240)
                                                     DEC DEFAULT = 0x0 (0)
    PcdEmuMemorySize                         :  FIXED    (VOID*) = L"64!64"
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\SmbiosLib\SmbiosLib.inf
{SmbiosLib:  C = SmbiosLibConstructor Depex = gEfiSmbiosProtocolGuid  Time = 370ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  PUSH gEfiSmbiosProtocolGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid) AND (gEfiSmbiosProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid) AND (gEfiSmbiosProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuTimer
Module Arch:          X64
Module INF Path:      EmulatorPkg\TimerDxe\Timer.inf
File GUID:            87E1BB14-4D5C-7C4E-A90E-E1415687D062
Size:                 0xA000 (40.00K)
SHA1 HASH:            3f869da08f63d7b5070e2868e04f2b740b6c2fbe *EmuTimer.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    412ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiCpuArchProtocolGuid
  PUSH gEfiPcdProtocolGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiCpuArchProtocolGuid) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiCpuArchProtocolGuid
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          VariableRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Variable\RuntimeDxe\VariableRuntimeDxe.inf
File GUID:            CBD2E4D5-7068-4FF5-B462-9822B4AD8D60
Size:                 0x1C000 (112.00K)
SHA1 HASH:            beca93e6ededd1ff4d2a2a532a90c0270495f654 *VariableRuntimeDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    719ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdAllowVariablePolicyEnforcementDisable   :  FIXED  (BOOLEAN) = 0
    PcdBoottimeReservedNvVariableSpaceSize   :  FIXED   (UINT32) = 0x00 (0)
    PcdEmuVariableNvModeEnable               :  FIXED  (BOOLEAN) = 0
    PcdEmuVariableNvStoreReserved            :  FIXED   (UINT64) = 0x0 (0)
    PcdFlashNvStorageVariableBase            :  FIXED   (UINT32) = 0x0 (0)
    PcdFlashNvStorageVariableBase64          :    DYN   (UINT64) = 0x0 (0)
 *M PcdFlashNvStorageVariableSize            :  FIXED   (UINT32) = 0x0000C000 (49152)
                                                     DEC DEFAULT = 0x0 (0)
    PcdHwErrStorageSize                      :  FIXED   (UINT32) = 0x0000 (0)
    PcdMaxAuthVariableSize                   :  FIXED   (UINT32) = 0x00 (0)
    PcdMaxHardwareErrorVariableSize          :  FIXED   (UINT32) = 0x8000 (32768)
    PcdMaxUserNvVariableSpaceSize            :  FIXED   (UINT32) = 0x00 (0)
    PcdMaxVariableSize                       :  FIXED   (UINT32) = 0x400 (1024)
    PcdMaxVolatileVariableSize               :  FIXED   (UINT32) = 0x00 (0)
    PcdReclaimVariableSpaceAtEndOfDxe        :  FIXED  (BOOLEAN) = 0
    PcdVariableCollectStatistics             :   FLAG  (BOOLEAN) = 0
    PcdVariableStoreSize                     :  FIXED   (UINT32) = 0x10000 (65536)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdSpinLockTimeout                       :  FIXED   (UINT32) = 0x989680 (10000000)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUefiVariableDefaultLangDeprecate      :   FLAG  (BOOLEAN) = 0
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeTimerLib\DxeTimerLib.inf
{TimerLib:  C = DxeTimerLibConstructor Time = 380ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseSafeIntLib\BaseSafeIntLib.inf
{SafeIntLib:  Time = 331ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\VarCheckLib\VarCheckLib.inf
{VarCheckLib:  Time = 369ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseSynchronizationLib\BaseSynchronizationLib.inf
{SynchronizationLib:  Time = 394ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeLib\UefiRuntimeLib.inf
{UefiRuntimeLib:  C = RuntimeDriverLibConstruct D = RuntimeDriverLibDeconstruct Time = 361ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\TpmMeasurementLibNull\TpmMeasurementLibNull.inf
{TpmMeasurementLib:  Time = 353ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\AuthVariableLibNull\AuthVariableLibNull.inf
{AuthVariableLib:  Time = 340ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\VariablePolicyLib\VariablePolicyLibRuntimeDxe.inf
{VariablePolicyLib:  Time = 422ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\VariablePolicyHelperLib\VariablePolicyHelperLib.inf
{VariablePolicyHelperLib:  Time = 353ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\VarCheckUefiLib\VarCheckUefiLib.inf
{NULL:  C = VarCheckUefiLibNullClassConstructor Time = 367ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          WatchdogTimer
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\WatchdogTimerDxe\WatchdogTimer.inf
File GUID:            F099D67F-71AE-4c36-B2A3-DCEB0EB2B7D8
Size:                 0xA000 (40.00K)
SHA1 HASH:            69fd021748e1fdf692bbfa3257893c20ac409e9a *WatchdogTimer.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    365ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiTimerArchProtocolGuid
  PUSH gEfiPcdProtocolGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiTimerArchProtocolGuid) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiTimerArchProtocolGuid
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MonotonicCounterRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\MonotonicCounterRuntimeDxe\MonotonicCounterRuntimeDxe.inf
File GUID:            AD608272-D07F-4964-801E-7BD3B7888652
Size:                 0xA000 (40.00K)
SHA1 HASH:            0ea5f5a28ca6feef5f729782255b86b84369c0e7 *MonotonicCounterRuntimeDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    381ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeLib\UefiRuntimeLib.inf
{UefiRuntimeLib:  C = RuntimeDriverLibConstruct D = RuntimeDriverLibDeconstruct Time = 361ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiVariableArchProtocolGuid
  PUSH gEfiVariableWriteArchProtocolGuid
  PUSH gEfiPcdProtocolGuid
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiVariableArchProtocolGuid AND gEfiVariableWriteArchProtocolGuid) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiVariableArchProtocolGuid AND gEfiVariableWriteArchProtocolGuid
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          CapsuleRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\CapsuleRuntimeDxe\CapsuleRuntimeDxe.inf
File GUID:            42857F0A-13F2-4B21-8A23-53D3F714B840
Size:                 0xD000 (52.00K)
SHA1 HASH:            8d7454a521ef2d334b0bd6823838ded004d46d18 *CapsuleRuntimeDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    431ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdCapsuleInRamSupport                   :  FIXED  (BOOLEAN) = 1
    PcdCapsulePeiLongModeStackSize           :  FIXED   (UINT32) = 0x8000 (32768)
 *M PcdDxeIplSwitchToLongMode                :   FLAG  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
 *M PcdMaxSizeNonPopulateCapsule             :  FIXED   (UINT32) = 0x0 (0)
                                                     DEC DEFAULT = 0xa00000 (10485760)
 *M PcdMaxSizePopulateCapsule                :  FIXED   (UINT32) = 0x0 (0)
                                                     DEC DEFAULT = 0x6400000 (104857600)
    PcdSupportProcessCapsuleAtRuntime        :   FLAG  (BOOLEAN) = 0
    PcdSupportUpdateCapsuleReset             :   FLAG  (BOOLEAN) = 0
    PcdUse1GPageTable                        :  FIXED  (BOOLEAN) = 0
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeCapsuleLibNull\DxeCapsuleLibNull.inf
{CapsuleLib:  Time = 430ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeLib\UefiRuntimeLib.inf
{UefiRuntimeLib:  C = RuntimeDriverLibConstruct D = RuntimeDriverLibDeconstruct Time = 361ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseCacheMaintenanceLib\BaseCacheMaintenanceLib.inf
{CacheMaintenanceLib:  Time = 339ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiVariableWriteArchProtocolGuid
  PUSH gEfiPcdProtocolGuid
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiVariableWriteArchProtocolGuid) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiVariableWriteArchProtocolGuid
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ConPlatformDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\ConPlatformDxe\ConPlatformDxe.inf
File GUID:            51ccf399-4fdf-4e55-a45b-e123f84d456a
Size:                 0xD000 (52.00K)
SHA1 HASH:            001f87bf63653d764271d2a20be4f2a99964b481 *ConPlatformDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    435ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
 *M PcdBootManagerMenuFile                   :  FIXED    (VOID*) = {
0x21,0xAA,0x2C,0x46,0x14,0x76,0x03,0x45,0x83,0x6E,0x8A,0xB6,0xF4,0x66,0x23,0x31}
                                                     DEC DEFAULT = {
0xDC,0x5B,0xC2,0xEE,0xF2,0x67,0x95,0x4D,0xB1,0xD5,0xF8,0x1B,0x20,0x39,0xD1,0x1D}
    PcdDriverHealthConfigureForm             :  FIXED    (VOID*) = {
0xF4,0xD9,0x96,0x42,0xFC,0xF6,0xDE,0x4D,0x86,0x85,0x8C,0xE2,0xD7,0x9D,0x90,0xF0}
    PcdErrorCodeSetVariable                  :  FIXED   (UINT32) = 0x03058002 (50692098)
    PcdMaxRepairCount                        :  FIXED   (UINT32) = 0x00 (0)
    PcdProgressCodeOsLoaderLoad              :  FIXED   (UINT32) = 0x03058000 (50692096)
    PcdProgressCodeOsLoaderStart             :  FIXED   (UINT32) = 0x03058001 (50692097)
 *M PcdResetOnMemoryTypeInformationChange    :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BaseSortLib\BaseSortLib.inf
{SortLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffGetEntryPointLib\BasePeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 491ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiBootManagerLib\UefiBootManagerLib.inf
{UefiBootManagerLib:  Time = 668ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ConSplitterDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\ConSplitterDxe\ConSplitterDxe.inf
File GUID:            408edcec-cf6d-477c-a5a8-b4844e3de281
Size:                 0x14000 (80.00K)
SHA1 HASH:            97ce36e9f1d93367b661d6d98435fe66749fe0ad *ConSplitterDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    430ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdConInConnectOnDemand                  :  FIXED  (BOOLEAN) = 0
    PcdConOutColumn                          : DYNHII   (UINT32) = 0x50 (80)
                         gEmuSystemConfigGuid: L"Setup": 0x0
    PcdConOutGopSupport                      :   FLAG  (BOOLEAN) = 1
    PcdConOutRow                             : DYNHII   (UINT32) = 0x19 (25)
                         gEmuSystemConfigGuid: L"Setup": 0x4
    PcdConOutUgaSupport                      :   FLAG  (BOOLEAN) = 1
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          GraphicsConsoleDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\GraphicsConsoleDxe\GraphicsConsoleDxe.inf
File GUID:            CCCB0C28-4B24-11d5-9A5A-0090273FC14D
Size:                 0xF000 (60.00K)
SHA1 HASH:            c971461ab027f6b681338e458fc3b1e8e0575fca *GraphicsConsoleDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    397ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdConOutColumn                          : DYNHII   (UINT32) = 0x50 (80)
                         gEmuSystemConfigGuid: L"Setup": 0x0
    PcdConOutRow                             : DYNHII   (UINT32) = 0x19 (25)
                         gEmuSystemConfigGuid: L"Setup": 0x4
    PcdVideoHorizontalResolution             :  PATCH   (UINT32) = 0x320 (800)
    PcdVideoVerticalResolution               :  PATCH   (UINT32) = 0x258 (600)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SerialDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SerialDxe\SerialDxe.inf
File GUID:            9A5163E7-5C29-453F-825C-837A46A81E15
Size:                 0x9000 (36.00K)
SHA1 HASH:            ae4f3c4b4dd301a5ac8cc86aef9829e6df8c0be2 *SerialDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    386ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUartDefaultBaudRate                   :  FIXED   (UINT64) = 0x1C200 (115200)
    PcdUartDefaultDataBits                   :  FIXED    (UINT8) = 0x8 (8)
    PcdUartDefaultParity                     :  FIXED    (UINT8) = 0x1 (1)
    PcdUartDefaultReceiveFifoDepth           :  FIXED   (UINT16) = 0x1 (1)
    PcdUartDefaultStopBits                   :  FIXED    (UINT8) = 0x1 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugLibNull\BaseDebugLibNull.inf
{DebugLib:  Time = 344ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuLib\DxeEmuLib.inf
{EmuThunkLib:  C = DxeEmuLibConstructor Time = 363ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\DxeEmuSerialPortLib\DxeEmuSerialPortLib.inf
{SerialPortLib:  Time = 377ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          TerminalDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\TerminalDxe\TerminalDxe.inf
File GUID:            9E863906-A40F-4875-977F-5B93FF237FC6
Size:                 0x14000 (80.00K)
SHA1 HASH:            85edcff53c67e55afebf65d2e755169e94cdc4d6 *TerminalDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    552ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdErrorCodeSetVariable                  :  FIXED   (UINT32) = 0x03058002 (50692098)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
 *M PcdDefaultTerminalType                   :  FIXED    (UINT8) = 0x1 (1)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BdsDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\BdsDxe\BdsDxe.inf
File GUID:            6D33944A-EC75-4855-A54D-809C75241F6C
Size:                 0x2D000 (180.00K)
SHA1 HASH:            00d70663c0e26a217d9c9989c713e587633b25d0 *BdsDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    478ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
 *M PcdBootManagerMenuFile                   :  FIXED    (VOID*) = {
0x21,0xAA,0x2C,0x46,0x14,0x76,0x03,0x45,0x83,0x6E,0x8A,0xB6,0xF4,0x66,0x23,0x31}
                                                     DEC DEFAULT = {
0xDC,0x5B,0xC2,0xEE,0xF2,0x67,0x95,0x4D,0xB1,0xD5,0xF8,0x1B,0x20,0x39,0xD1,0x1D}
    PcdCapsuleOnDiskSupport                  :  FIXED  (BOOLEAN) = 0
    PcdConInConnectOnDemand                  :  FIXED  (BOOLEAN) = 0
    PcdConOutColumn                          : DYNHII   (UINT32) = 0x50 (80)
                         gEmuSystemConfigGuid: L"Setup": 0x0
    PcdConOutRow                             : DYNHII   (UINT32) = 0x19 (25)
                         gEmuSystemConfigGuid: L"Setup": 0x4
    PcdDriverHealthConfigureForm             :  FIXED    (VOID*) = {
0xF4,0xD9,0x96,0x42,0xFC,0xF6,0xDE,0x4D,0x86,0x85,0x8C,0xE2,0xD7,0x9D,0x90,0xF0}
    PcdErrorCodeSetVariable                  :  FIXED   (UINT32) = 0x03058002 (50692098)
    PcdFirmwareRevision                      :  FIXED   (UINT32) = 0x00010000 (65536)
    PcdFirmwareVendor                        :  FIXED    (VOID*) = L"EDK II"
    PcdMaxRepairCount                        :  FIXED   (UINT32) = 0x00 (0)
    PcdPlatformRecoverySupport               :  FIXED  (BOOLEAN) = 1
    PcdProgressCodeOsLoaderLoad              :  FIXED   (UINT32) = 0x03058000 (50692096)
    PcdProgressCodeOsLoaderStart             :  FIXED   (UINT32) = 0x03058001 (50692097)
 *M PcdResetOnMemoryTypeInformationChange    :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdTestKeyUsed                           :    DYN  (BOOLEAN) = 0
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdHardwareErrorRecordLevel              :  FIXED   (UINT16) = 0x0 (0)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdPlatformBootTimeOut                   : DYNHII   (UINT16) = 0xA (10)
                       gEfiGlobalVariableGuid: L"Timeout": 0x0
                                                     DEC DEFAULT = 0xffff (65535)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUefiVariableDefaultLang               :  FIXED    (VOID*) = "eng"
    PcdUefiVariableDefaultLangCodes          :  FIXED    (VOID*) = "engfraengfra"
    PcdUefiVariableDefaultLangDeprecate      :   FLAG  (BOOLEAN) = 0
    PcdUefiVariableDefaultPlatformLang       :  FIXED    (VOID*) = "en-US"
    PcdUefiVariableDefaultPlatformLangCodes   :  FIXED    (VOID*) = "en;fr;en-US;fr-FR"
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Depex = gEfiHiiStringProtocolGuid AND
 gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid  Time = 391ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BaseSortLib\BaseSortLib.inf
{SortLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffGetEntryPointLib\BasePeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 491ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BootLogoLib\BootLogoLib.inf
{BootLogoLib:  Time = 580ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiBootManagerLib\UefiBootManagerLib.inf
{UefiBootManagerLib:  Time = 668ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\PlatformBmLib\PlatformBmLib.inf
{PlatformBootManagerLib:  Depex = gEfiVariableArchProtocolGuid AND gEfiVariableWriteArchProtocolGuid  Time = 452ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  PUSH gEfiHiiStringProtocolGuid
  PUSH gEfiHiiDatabaseProtocolGuid
  PUSH gEfiHiiConfigRoutingProtocolGuid
  PUSH gEfiVariableArchProtocolGuid
  PUSH gEfiVariableWriteArchProtocolGuid
  AND
  AND
  AND
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid) AND (gEfiVariableArchProtocolGuid AND gEfiVariableWriteArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid) AND (gEfiVariableArchProtocolGuid AND gEfiVariableWriteArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          LogoDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Logo\LogoDxe.inf
File GUID:            F74D20EE-37E7-48FC-97F7-9B1047749C69
Size:                 0x23000 (140.00K)
SHA1 HASH:            fbfbf9b614e8132ac0b98aea3360dfc7a6e09f90 *LogoDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    577ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiHiiDatabaseProtocolGuid
  PUSH gEfiHiiImageExProtocolGuid
  PUSH gEfiPcdProtocolGuid
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiHiiDatabaseProtocolGuid AND gEfiHiiImageExProtocolGuid) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiHiiDatabaseProtocolGuid AND gEfiHiiImageExProtocolGuid
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          LoadFileOnFv2
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\LoadFileOnFv2\LoadFileOnFv2.inf
File GUID:            BD712601-082F-4c59-8677-2C8A3C297948
Size:                 0xC000 (48.00K)
SHA1 HASH:            eb508836486f0aa4626a75cab75f27b0a1fd49bb *LoadFileOnFv2.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    435ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          UiApp
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\UiApp\UiApp.inf
File GUID:            462CAA21-7614-4503-836E-8AB6F4662331
Size:                 0x45000 (276.00K)
SHA1 HASH:            0d047db8dbbab3b1e5bf9be15b440e79deeeade1 *UiApp.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    502ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
 *M PcdBootManagerMenuFile                   :  FIXED    (VOID*) = {
0x21,0xAA,0x2C,0x46,0x14,0x76,0x03,0x45,0x83,0x6E,0x8A,0xB6,0xF4,0x66,0x23,0x31}
                                                     DEC DEFAULT = {
0xDC,0x5B,0xC2,0xEE,0xF2,0x67,0x95,0x4D,0xB1,0xD5,0xF8,0x1B,0x20,0x39,0xD1,0x1D}
    PcdConOutColumn                          : DYNHII   (UINT32) = 0x50 (80)
                         gEmuSystemConfigGuid: L"Setup": 0x0
    PcdConOutRow                             : DYNHII   (UINT32) = 0x19 (25)
                         gEmuSystemConfigGuid: L"Setup": 0x4
    PcdDriverHealthConfigureForm             :  FIXED    (VOID*) = {
0xF4,0xD9,0x96,0x42,0xFC,0xF6,0xDE,0x4D,0x86,0x85,0x8C,0xE2,0xD7,0x9D,0x90,0xF0}
    PcdErrorCodeSetVariable                  :  FIXED   (UINT32) = 0x03058002 (50692098)
    PcdFirmwareVersionString                 :  FIXED    (VOID*) = L""
    PcdMaxRepairCount                        :  FIXED   (UINT32) = 0x00 (0)
    PcdProgressCodeOsLoaderLoad              :  FIXED   (UINT32) = 0x03058000 (50692096)
    PcdProgressCodeOsLoaderStart             :  FIXED   (UINT32) = 0x03058001 (50692097)
 *M PcdResetOnMemoryTypeInformationChange    :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdSetupConOutColumn                     :  PATCH   (UINT32) = 0x50 (80)
    PcdSetupConOutRow                        :  PATCH   (UINT32) = 0x19 (25)
    PcdSetupVideoHorizontalResolution        :  PATCH   (UINT32) = 0x320 (800)
    PcdSetupVideoVerticalResolution          :  PATCH   (UINT32) = 0x258 (600)
    PcdTestKeyUsed                           :    DYN  (BOOLEAN) = 0
    PcdVideoHorizontalResolution             :  PATCH   (UINT32) = 0x320 (800)
    PcdVideoVerticalResolution               :  PATCH   (UINT32) = 0x258 (600)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdPlatformBootTimeOut                   : DYNHII   (UINT16) = 0xA (10)
                       gEfiGlobalVariableGuid: L"Timeout": 0x0
                                                     DEC DEFAULT = 0xffff (65535)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUefiVariableDefaultPlatformLangCodes   :  FIXED    (VOID*) = "en;fr;en-US;fr-FR"
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BaseSortLib\BaseSortLib.inf
{SortLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffGetEntryPointLib\BasePeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 491ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiBootManagerLib\UefiBootManagerLib.inf
{UefiBootManagerLib:  Time = 668ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\FileExplorerLib\FileExplorerLib.inf
{FileExplorerLib:  C = FileExplorerLibConstructor D = FileExplorerLibDestructor Time = 481ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiApplicationEntryPoint\UefiApplicationEntryPoint.inf
{UefiApplicationEntryPoint:  Time = 430ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DeviceManagerUiLib\DeviceManagerUiLib.inf
{NULL:  C = DeviceManagerUiLibConstructor D = DeviceManagerUiLibDestructor Time = 386ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BootManagerUiLib\BootManagerUiLib.inf
{NULL:  C = BootManagerUiLibConstructor D = BootManagerUiLibDestructor Time = 416ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BootMaintenanceManagerUiLib\BootMaintenanceManagerUiLib.inf
{NULL:  C = BootMaintenanceManagerUiLibConstructor D = BootMaintenanceManagerUiLibDestructor Time = 617ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
VFRPP_FLAGS =  /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h
------------------------------------------------------------------------------------------------------------------------
VFR_FLAGS =  -l -n
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BootManagerMenuApp
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\BootManagerMenuApp\BootManagerMenuApp.inf
File GUID:            EEC25BDC-67F2-4D95-B1D5-F81B2039D11D
Size:                 0x27000 (156.00K)
SHA1 HASH:            14a0cff91873fcdaddde9eebb7feec1508c53de3 *BootManagerMenuApp.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    459ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
 *M PcdBootManagerMenuFile                   :  FIXED    (VOID*) = {
0x21,0xAA,0x2C,0x46,0x14,0x76,0x03,0x45,0x83,0x6E,0x8A,0xB6,0xF4,0x66,0x23,0x31}
                                                     DEC DEFAULT = {
0xDC,0x5B,0xC2,0xEE,0xF2,0x67,0x95,0x4D,0xB1,0xD5,0xF8,0x1B,0x20,0x39,0xD1,0x1D}
    PcdConOutColumn                          : DYNHII   (UINT32) = 0x50 (80)
                         gEmuSystemConfigGuid: L"Setup": 0x0
    PcdConOutRow                             : DYNHII   (UINT32) = 0x19 (25)
                         gEmuSystemConfigGuid: L"Setup": 0x4
    PcdDriverHealthConfigureForm             :  FIXED    (VOID*) = {
0xF4,0xD9,0x96,0x42,0xFC,0xF6,0xDE,0x4D,0x86,0x85,0x8C,0xE2,0xD7,0x9D,0x90,0xF0}
    PcdErrorCodeSetVariable                  :  FIXED   (UINT32) = 0x03058002 (50692098)
    PcdMaxRepairCount                        :  FIXED   (UINT32) = 0x00 (0)
    PcdProgressCodeOsLoaderLoad              :  FIXED   (UINT32) = 0x03058000 (50692096)
    PcdProgressCodeOsLoaderStart             :  FIXED   (UINT32) = 0x03058001 (50692097)
 *M PcdResetOnMemoryTypeInformationChange    :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdSetupConOutColumn                     :  PATCH   (UINT32) = 0x50 (80)
    PcdSetupConOutRow                        :  PATCH   (UINT32) = 0x19 (25)
    PcdSetupVideoHorizontalResolution        :  PATCH   (UINT32) = 0x320 (800)
    PcdSetupVideoVerticalResolution          :  PATCH   (UINT32) = 0x258 (600)
    PcdVideoHorizontalResolution             :  PATCH   (UINT32) = 0x320 (800)
    PcdVideoVerticalResolution               :  PATCH   (UINT32) = 0x258 (600)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BaseSortLib\BaseSortLib.inf
{SortLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffGetEntryPointLib\BasePeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 491ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiApplicationEntryPoint\UefiApplicationEntryPoint.inf
{UefiApplicationEntryPoint:  Time = 430ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiBootManagerLib\UefiBootManagerLib.inf
{UefiBootManagerLib:  Time = 668ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DevicePathDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DevicePathDxe\DevicePathDxe.inf
File GUID:            9B680FCE-AD6B-4F3A-B60B-F59899003443
Size:                 0x1A000 (104.00K)
SHA1 HASH:            b31adf0ce99c7b63761640a674a8d01feb8f84ea *DevicePathDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    410ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdDevicePathSupportDevicePathFromText   :   FLAG  (BOOLEAN) = 1
    PcdDevicePathSupportDevicePathToText     :   FLAG  (BOOLEAN) = 1
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DiskIoDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\DiskIoDxe\DiskIoDxe.inf
File GUID:            6B38F7B4-AD98-40e9-9093-ACA2B5A253C4
Size:                 0xF000 (60.00K)
SHA1 HASH:            cda36aaa89be01b77b389e2d24e339e2635e56f0 *DiskIoDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    437ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdDiskIoDataBufferBlockNum              :  FIXED   (UINT32) = 0x40 (64)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PartitionDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\PartitionDxe\PartitionDxe.inf
File GUID:            1FA1F39E-FEFF-4aae-BD7B-38A070A3B609
Size:                 0x12000 (72.00K)
SHA1 HASH:            b126561c59e50daea211406a81002673aad0a7bb *PartitionDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    497ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EnglishDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\UnicodeCollation\EnglishDxe\EnglishDxe.inf
File GUID:            CD3BAFB6-50FB-4fe8-8E4E-AB74D2C1A600
Size:                 0xA000 (40.00K)
SHA1 HASH:            91f505caed55a5790de5767a73da0e30a39b4a09 *EnglishDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    387ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdUnicodeCollation2Support              :   FLAG  (BOOLEAN) = 1
    PcdUnicodeCollationSupport               :   FLAG  (BOOLEAN) = 1
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PciBusDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Pci\PciBusDxe\PciBusDxe.inf
File GUID:            93B80004-9FB3-11d4-9A3A-0090273FC14D
Size:                 0x2A000 (168.00K)
SHA1 HASH:            be4a700c70db60800e601149fdba0d08e03e9438 *PciBusDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    964ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdAriSupport                            :  FIXED  (BOOLEAN) = 1
    PcdMrIovSupport                          :  FIXED  (BOOLEAN) = 0
    PcdPciBridgeIoAlignmentProbe             :   FLAG  (BOOLEAN) = 0
    PcdPciBusHotplugDeviceSupport            :   FLAG  (BOOLEAN) = 1
    PcdPciDegradeResourceForOptionRom        :   FLAG  (BOOLEAN) = 1
    PcdPciDisableBusEnumeration              :  FIXED  (BOOLEAN) = 0
    PcdPcieResizableBarSupport               :  FIXED  (BOOLEAN) = 0
    PcdSrIovSupport                          :  FIXED  (BOOLEAN) = 1
    PcdSrIovSystemPageSize                   :  FIXED   (UINT32) = 0x1 (1)
    PcdUnalignedPciIoEnable                  :   FLAG  (BOOLEAN) = 0
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ScsiBus
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Scsi\ScsiBusDxe\ScsiBusDxe.inf
File GUID:            0167CCC4-D0F7-4f21-A3EF-9E64B7CDCE8B
Size:                 0xE000 (56.00K)
SHA1 HASH:            24d0628f9dee372b9ca5c68dcdd3569162226023 *ScsiBus.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    390ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiScsiLib\UefiScsiLib.inf
{UefiScsiLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ScsiDisk
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Scsi\ScsiDiskDxe\ScsiDiskDxe.inf
File GUID:            0A66E322-3740-4cce-AD62-BD172CECCA35
Size:                 0x19000 (100.00K)
SHA1 HASH:            1dbfc22b3efb4a1bd2d1da1ac72e889673cc0604 *ScsiDisk.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    391ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiScsiLib\UefiScsiLib.inf
{UefiScsiLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuBusDriver
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuBusDriverDxe\EmuBusDriverDxe.inf
File GUID:            9842073D-95D9-9F49-BD3F-2E29525125DF
Size:                 0xD000 (52.00K)
SHA1 HASH:            4462b7bca438094c0fe9d45e656d3dafd9661ca8 *EmuBusDriver.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    440ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuGopDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuGopDxe\EmuGopDxe.inf
File GUID:            BCC87E0D-86D6-4D4D-8040-2D983D368BD1
Size:                 0xE000 (56.00K)
SHA1 HASH:            eef8c53aef5d7b692382922f7501d193a87cdd53 *EmuGopDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    428ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\EmulatorPkg\Library\KeyMapLibNull\KeyMapLibNull.inf
{KeyMapLib:  Time = 338ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSimpleFileSystem
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuSimpleFileSystemDxe\EmuSimpleFileSystemDxe.inf
File GUID:            35B72237-3926-CF4A-A7F3-1449F9E0E4BD
Size:                 0xC000 (48.00K)
SHA1 HASH:            0caaccddd629c239c6b18710c4251eefe1995a28 *EmuSimpleFileSystem.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    435ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuBlockIo
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuBlockIoDxe\EmuBlockIoDxe.inf
File GUID:            C6760651-A38D-5F4F-AEAF-F6661549DF75
Size:                 0xE000 (56.00K)
SHA1 HASH:            3fe5602b6bbcd5e9249a483509c4e389c4c175e0 *EmuBlockIo.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    406ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSnpDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuSnpDxe\EmuSnpDxe.inf
File GUID:            22597239-6107-DF44-AD3F-5F053E92222E
Size:                 0xD000 (52.00K)
SHA1 HASH:            08e7b226d945d91df6bf7166687e1c7062d6fe6c *EmuSnpDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    413ms
Driver Type:          0x7 (DRIVER)
UEFI Spec Version:    0x00020000
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          HelloWorld
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\HelloWorld\HelloWorld.inf
File GUID:            6987936E-ED34-44db-AE97-1FA5E4ED2116
Size:                 0xE000 (56.00K)
SHA1 HASH:            b9e65ad44eefab468015fcdd8a7135f33cdf49c0 *HelloWorld.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    391ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdHelloWorldPrintEnable                 :   FLAG  (BOOLEAN) = 1
    PcdHelloWorldPrintString                 :  FIXED    (VOID*) = L"UEFI Hello World!\n"
    PcdHelloWorldPrintTimes                  :  FIXED   (UINT32) = 0x1 (1)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiApplicationEntryPoint\UefiApplicationEntryPoint.inf
{UefiApplicationEntryPoint:  Time = 430ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SmbiosDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SmbiosDxe\SmbiosDxe.inf
File GUID:            F9D88642-0737-49bc-81B5-6889CD57D9EA
Size:                 0xE000 (56.00K)
SHA1 HASH:            8af01c816df668bf0948de814a1b6e1d439c8356 *SmbiosDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    538ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdSmbiosDocRev                          :  FIXED    (UINT8) = 0x0 (0)
    PcdSmbiosEntryPointProvideMethod         :  FIXED   (UINT32) = 0x3 (3)
    PcdSmbiosVersion                         :  FIXED   (UINT16) = 0x0303 (771)
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          HiiDatabase
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\HiiDatabaseDxe\HiiDatabaseDxe.inf
File GUID:            348C4D62-BFBD-4882-9ECE-C80BB1C4783B
Size:                 0x3A000 (232.00K)
SHA1 HASH:            8b35d7da12feededb906640ec71c6de96cb2613f *HiiDatabase.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    553ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdHiiOsRuntimeSupport                   :   FLAG  (BOOLEAN) = 1
    PcdNvStoreDefaultValueBuffer             :    DEX    (VOID*) = {0x0}
    PcdSupportHiiImageProtocol               :   FLAG  (BOOLEAN) = 1
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUefiVariableDefaultPlatformLang       :  FIXED    (VOID*) = "en-US"
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DisplayEngine
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DisplayEngineDxe\DisplayEngineDxe.inf
File GUID:            E660EA85-058E-4b55-A54B-F02F83A24707
Size:                 0x29000 (164.00K)
SHA1 HASH:            4f12a957743e3179d0c99d4beec804118f64a267 *DisplayEngine.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    437ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
    PcdBrowerGrayOutReadOnlyMenu             :   FLAG  (BOOLEAN) = 0
    PcdBrowserFieldBackgroundHighlightColor   :  FIXED    (UINT8) = 0x00 (0)
    PcdBrowserFieldTextColor                 :  FIXED    (UINT8) = 0x00 (0)
    PcdBrowserFieldTextHighlightColor        :  FIXED    (UINT8) = 0x07 (7)
    PcdBrowserGrayOutTextStatement           :   FLAG  (BOOLEAN) = 0
    PcdBrowserSubtitleTextColor              :  FIXED    (UINT8) = 0x01 (1)
    PcdFrontPageFormSetGuid                  :  FIXED    (VOID*) = {
0xBC,0x30,0x0C,0x9E,0x06,0x3F,0xA6,0x4B,0x82,0x88,0x09,0x17,0x9B,0x85,0x5D,0xBE}
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Depex = gEfiHiiStringProtocolGuid AND
 gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid  Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\CustomizedDisplayLib\CustomizedDisplayLib.inf
{CustomizedDisplayLib:  C = CustomizedDisplayLibConstructor D = CustomizedDisplayLibDestructor Time = 491ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiHiiDatabaseProtocolGuid
  PUSH gEfiHiiConfigRoutingProtocolGuid
  PUSH gEdkiiFormBrowserEx2ProtocolGuid
  PUSH gEfiPcdProtocolGuid
  PUSH gEfiHiiStringProtocolGuid
  AND
  AND
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid AND gEdkiiFormBrowserEx2ProtocolGuid) AND
(gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid AND gEdkiiFormBrowserEx2ProtocolGuid
From Library INF: (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SetupBrowser
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SetupBrowserDxe\SetupBrowserDxe.inf
File GUID:            EBf342FE-B1D3-4EF8-957C-8048606FF671
Size:                 0x30000 (192.00K)
SHA1 HASH:            434c7697a94a2d4d4dcc481f578868b6342f7e43 *SetupBrowser.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    457ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Depex = gEfiHiiStringProtocolGuid AND
 gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid  Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiHiiDatabaseProtocolGuid
  PUSH gEfiHiiConfigRoutingProtocolGuid
  PUSH gEfiPcdProtocolGuid
  PUSH gEfiHiiStringProtocolGuid
  AND
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid) AND (gEfiPcdProtocolGuid) AND
(gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid
From Library INF: (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PrintDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PrintDxe\PrintDxe.inf
File GUID:            79E4A61C-ED73-4312-94FE-E3E7563362A9
Size:                 0xE000 (56.00K)
SHA1 HASH:            af6c17a5d8d1475116898de5baf8f93475dd07a5 *PrintDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    421ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DriverSample
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DriverSampleDxe\DriverSampleDxe.inf
File GUID:            FE3542FE-C1D3-4EF8-657C-8048606FF671
Size:                 0x29000 (164.00K)
SHA1 HASH:            9e695aa9c26aea11499c5435ef38e63ef26f58f9 *DriverSample.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    472ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePcdLibNull\BasePcdLibNull.inf
{PcdLib:  Time = 348ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Depex = gEfiHiiStringProtocolGuid AND
 gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid  Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiSimpleTextOutProtocolGuid
  PUSH gEfiHiiDatabaseProtocolGuid
  PUSH gEfiVariableArchProtocolGuid
  PUSH gEfiVariableWriteArchProtocolGuid
  PUSH gEfiHiiStringProtocolGuid
  PUSH gEfiHiiConfigRoutingProtocolGuid
  AND
  AND
  AND
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(gEfiSimpleTextOutProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND gEfiVariableArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  gEfiSimpleTextOutProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND gEfiVariableArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid
From Library INF: (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
VFRPP_FLAGS =  /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h
------------------------------------------------------------------------------------------------------------------------
VFR_FLAGS =  -l -n
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Fat
Module Arch:          X64
Module INF Path:      FatPkg\EnhancedFatDxe\Fat.inf
File GUID:            961578FE-B6B7-44c3-AF35-6BC705CD2B1F
Size:                 0x18000 (96.00K)
SHA1 HASH:            c4842e9ff6d67a41bc47d011161e646770bc7c91 *Fat.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    642ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUefiVariableDefaultLang               :  FIXED    (VOID*) = "eng"
    PcdUefiVariableDefaultPlatformLang       :  FIXED    (VOID*) = "en-US"
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          tftpDynamicCommand
Module Arch:          X64
Module INF Path:      ShellPkg\DynamicCommand\TftpDynamicCommand\TftpDynamicCommand.inf
File GUID:            A487A478-51EF-48AA-8794-7BEE2A0562F1
Size:                 0x1A000 (104.00K)
SHA1 HASH:            b6db7d8cd6efcffe9c0805c67d1c1cac6e665667 *tftpDynamicCommand.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    469ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiFileHandleLibPrintBufferSize      :  FIXED   (UINT16) = 0x600 (1536)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEfiShellPkgTokenSpaceGuid
 *M PcdShellLibAutoInitialize                :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdShellPrintBufferSize                  :  FIXED   (UINT16) = 0x3E80 (16000)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Depex = gEfiHiiStringProtocolGuid AND
 gEfiHiiDatabaseProtocolGuid AND gEfiHiiConfigRoutingProtocolGuid  Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\BaseSortLib\BaseSortLib.inf
{SortLib:  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiFileHandleLib\UefiFileHandleLib.inf
{FileHandleLib:  Time = 399ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellLib\UefiShellLib.inf
{ShellLib:  C = ShellLibConstructor D = ShellLibDestructor Time = 357ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  PUSH gEfiHiiStringProtocolGuid
  PUSH gEfiHiiDatabaseProtocolGuid
  PUSH gEfiHiiConfigRoutingProtocolGuid
  AND
  AND
  AND
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid) AND (gEfiHiiStringProtocolGuid AND gEfiHiiDatabaseProtocolGuid AND
gEfiHiiConfigRoutingProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Shell
Module Arch:          X64
Module INF Path:      ShellPkg\Application\Shell\Shell.inf
File GUID:            7C04A583-9E3E-4f1c-AD65-E05268D0B4D1
Size:                 0x15C000 (1392.00K)
SHA1 HASH:            716fcd2286cbd257a62998429cef2852a873a4c9 *Shell.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    525ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdeModulePkgTokenSpaceGuid
 *M PcdBootManagerMenuFile                   :  FIXED    (VOID*) = {
0x21,0xAA,0x2C,0x46,0x14,0x76,0x03,0x45,0x83,0x6E,0x8A,0xB6,0xF4,0x66,0x23,0x31}
                                                     DEC DEFAULT = {
0xDC,0x5B,0xC2,0xEE,0xF2,0x67,0x95,0x4D,0xB1,0xD5,0xF8,0x1B,0x20,0x39,0xD1,0x1D}
    PcdDriverHealthConfigureForm             :  FIXED    (VOID*) = {
0xF4,0xD9,0x96,0x42,0xFC,0xF6,0xDE,0x4D,0x86,0x85,0x8C,0xE2,0xD7,0x9D,0x90,0xF0}
    PcdErrorCodeSetVariable                  :  FIXED   (UINT32) = 0x03058002 (50692098)
    PcdMaxRepairCount                        :  FIXED   (UINT32) = 0x00 (0)
    PcdProgressCodeOsLoaderLoad              :  FIXED   (UINT32) = 0x03058000 (50692096)
    PcdProgressCodeOsLoaderStart             :  FIXED   (UINT32) = 0x03058001 (50692097)
 *M PcdResetOnMemoryTypeInformationChange    :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0xFF (255)
                                                     DSC DEFAULT = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdPerformanceLibraryPropertyMask        :  FIXED    (UINT8) = 0x0 (0)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiFileHandleLibPrintBufferSize      :  FIXED   (UINT16) = 0x600 (1536)
 *M PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x1F40 (8000)
                                                     DEC DEFAULT = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdValidateOrderedCollection             :   FLAG  (BOOLEAN) = 0
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEfiShellPkgTokenSpaceGuid
    PcdShellDecodeIScsiMapNames              :  FIXED  (BOOLEAN) = 0
    PcdShellFileOperationSize                :  FIXED   (UINT32) = 0x1000 (4096)
    PcdShellForceConsole                     :   FLAG  (BOOLEAN) = 0
    PcdShellIncludeNtGuids                   :   FLAG  (BOOLEAN) = 1
    PcdShellInsertModeDefault                :  FIXED  (BOOLEAN) = 1
 *M PcdShellLibAutoInitialize                :  FIXED  (BOOLEAN) = 0
                                                     DEC DEFAULT = 1
    PcdShellMapNameLength                    :  FIXED    (UINT8) = 0x32 (50)
    PcdShellMaxHistoryCommandCount           :  FIXED   (UINT16) = 0x0020 (32)
    PcdShellPageBreakDefault                 :  FIXED  (BOOLEAN) = 0
    PcdShellPrintBufferSize                  :  FIXED   (UINT16) = 0x3E80 (16000)
    PcdShellProfileMask                      :  FIXED    (UINT8) = 0xFF (255)
    PcdShellRequireHiiPlatform               :   FLAG  (BOOLEAN) = 1
    PcdShellScreenLogCount                   :  FIXED    (UINT8) = 0x3 (3)
    PcdShellSupplier                         :  FIXED    (VOID*) = L"EDK II"
    PcdShellSupportFrameworkHii              :   FLAG  (BOOLEAN) = 0
    PcdShellSupportLevel                     :  FIXED    (UINT8) = 0x3 (3)
    PcdShellSupportOldProtocols              :  FIXED  (BOOLEAN) = 0
    PcdShellVendorExtendedDecode             :  FIXED   (UINT32) = 0x0 (0)
    PcdUsbExtendedDecode                     :  FIXED  (BOOLEAN) = 1
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeHobLib\DxeHobLib.inf
{HobLib:  C = HobLibConstructor Time = 381ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiSortLib\UefiSortLib.inf
{SortLib:  Time = 369ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiFileHandleLib\UefiFileHandleLib.inf
{FileHandleLib:  Time = 399ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePeCoffGetEntryPointLib\BasePeCoffGetEntryPointLib.inf
{PeCoffGetEntryPointLib:  Time = 491ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesLib\DxeServicesLib.inf
{DxeServicesLib:  Time = 546ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxeServicesTableLib\DxeServicesTableLib.inf
{DxeServicesTableLib:  C = DxeServicesTableLibConstructor Time = 522ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePerformanceLibNull\BasePerformanceLibNull.inf
{PerformanceLib:  Time = 338ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseOrderedCollectionRedBlackTreeLib\BaseOrderedCollectionRedBlackTreeLib.inf
{OrderedCollectionLib:  Time = 358ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellLib\UefiShellLib.inf
{ShellLib:  C = ShellLibConstructor D = ShellLibDestructor Time = 357ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiHandleParsingLib\UefiHandleParsingLib.inf
{HandleParsingLib:  C = HandleParsingLibConstructor D = HandleParsingLibDestructor Time = 476ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiBootManagerLib\UefiBootManagerLib.inf
{UefiBootManagerLib:  Time = 668ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellCommandLib\UefiShellCommandLib.inf
{ShellCommandLib:  C = ShellCommandLibConstructor D = ShellCommandLibDestructor Depex =
 gEfiUnicodeCollation2ProtocolGuid  Time = 365ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseIoLibIntrinsic\BaseIoLibIntrinsic.inf
{IoLib:  Time = 386ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellBcfgCommandLib\UefiShellBcfgCommandLib.inf
{BcfgCommandLib:  Time = 354ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiApplicationEntryPoint\UefiApplicationEntryPoint.inf
{UefiApplicationEntryPoint:  Time = 430ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellLevel2CommandsLib\UefiShellLevel2CommandsLib.inf
{NULL:  C = ShellLevel2CommandsLibConstructor D = ShellLevel2CommandsLibDestructor Time = 610ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellLevel1CommandsLib\UefiShellLevel1CommandsLib.inf
{NULL:  C = ShellLevel1CommandsLibConstructor D = ShellLevel1CommandsLibDestructor Time = 486ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellLevel3CommandsLib\UefiShellLevel3CommandsLib.inf
{NULL:  C = ShellLevel3CommandsLibConstructor D = ShellLevel3CommandsLibDestructor Time = 545ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellDriver1CommandsLib\UefiShellDriver1CommandsLib.inf
{NULL:  C = UefiShellDriver1CommandsLibConstructor D = UefiShellDriver1CommandsLibDestructor Time = 662ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellDebug1CommandsLib\UefiShellDebug1CommandsLib.inf
{NULL:  C = UefiShellDebug1CommandsLibConstructor D = UefiShellDebug1CommandsLibDestructor Time = 1257ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellInstall1CommandsLib\UefiShellInstall1CommandsLib.inf
{NULL:  C = ShellInstall1CommandsLibConstructor D = ShellInstall1CommandsLibDestructor Time = 576ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellNetwork1CommandsLib\UefiShellNetwork1CommandsLib.inf
{NULL:  C = ShellNetwork1CommandsLibConstructor D = ShellNetwork1CommandsLibDestructor Time = 625ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellNetwork2CommandsLib\UefiShellNetwork2CommandsLib.inf
{NULL:  C = ShellNetwork2CommandsLibConstructor D = ShellNetwork2CommandsLibDestructor Time = 685ms}
c:\fw\edk2-ws\edk2\ShellPkg\Library\UefiShellAcpiViewCommandLib\UefiShellAcpiViewCommandLib.inf
{AcpiViewCommandLib:  C = UefiShellAcpiViewCommandLibConstructor D = UefiShellAcpiViewCommandLibDestructor Time = 932ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DpcDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\DpcDxe\DpcDxe.inf
File GUID:            A210F973-229D-4f4d-AA37-9895E6C9EABA
Size:                 0xA000 (40.00K)
SHA1 HASH:            2733a699742c28e57bae6ac56d6fe97cb069d900 *DpcDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    370ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Depex = gEfiPcdProtocolGuid  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Time = 373ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Final Dependency Expression (DEPEX) Instructions
  PUSH gEfiPcdProtocolGuid
  END
------------------------------------------------------------------------------------------------------------------------
Dependency Expression (DEPEX) from INF
(TRUE) AND (gEfiPcdProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  TRUE
From Library INF: (gEfiPcdProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          VlanConfigDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\VlanConfigDxe\VlanConfigDxe.inf
File GUID:            E4F61863-FE2C-4b56-A8F4-08519BC439DF
Size:                 0x14000 (80.00K)
SHA1 HASH:            313d388234ffe201eb23b31e04da802dca343df9 *VlanConfigDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    419ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
VFRPP_FLAGS =  /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h
------------------------------------------------------------------------------------------------------------------------
VFR_FLAGS =  -l -n
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MnpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\MnpDxe\MnpDxe.inf
File GUID:            025BBFC7-E6A9-4b8b-82AD-6815A1AEAF4A
Size:                 0x1B000 (108.00K)
SHA1 HASH:            c71c9e79368f1102191e828d1ea6b6e1d9c70e47 *MnpDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    490ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ArpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\ArpDxe\ArpDxe.inf
File GUID:            529D3F93-E8E9-4e73-B1E1-BDF6A9D50113
Size:                 0x11000 (68.00K)
SHA1 HASH:            b0a5b7940b217227333d0526ab12f4540e0606a9 *ArpDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    516ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Dhcp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Dhcp4Dxe\Dhcp4Dxe.inf
File GUID:            94734718-0BBC-47fb-96A5-EE7A5AE6A2AD
Size:                 0x17000 (92.00K)
SHA1 HASH:            1d209390a5c3397f33643ee37ba4b003cb7104d4 *Dhcp4Dxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    434ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeUdpIoLib\DxeUdpIoLib.inf
{UdpIoLib:  Time = 378ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Ip4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Ip4Dxe\Ip4Dxe.inf
File GUID:            9FB1A1F3-3B71-4324-B39A-745CBB015FFF
Size:                 0x2A000 (168.00K)
SHA1 HASH:            cd9c99b9864d710c2748b1c543d6a5f4a961d3e8 *Ip4Dxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    667ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
VFRPP_FLAGS =  /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h
------------------------------------------------------------------------------------------------------------------------
VFR_FLAGS =  -l -n
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Udp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Udp4Dxe\Udp4Dxe.inf
File GUID:            6d6963ab-906d-4a65-a7ca-bd40e5d6af2b
Size:                 0x19000 (100.00K)
SHA1 HASH:            78c724e778c803da19e47d3aaec8d342ff17a4f6 *Udp4Dxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    476ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeIpIoLib\DxeIpIoLib.inf
{IpIoLib:  Time = 358ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Mtftp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Mtftp4Dxe\Mtftp4Dxe.inf
File GUID:            DC3641B8-2FA8-4ed3-BC1F-F9962A03454B
Size:                 0x19000 (100.00K)
SHA1 HASH:            9b2f509e8e10827a3b992f68d5ee7b15464431fe *Mtftp4Dxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    461ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeUdpIoLib\DxeUdpIoLib.inf
{UdpIoLib:  Time = 378ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          TcpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\TcpDxe\TcpDxe.inf
File GUID:            1A7E4468-2F55-4a56-903C-01265EB7622B
Size:                 0x28000 (160.00K)
SHA1 HASH:            aab147bb742d68a0f2dce56d09000e2fc2515fcb *TcpDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    572ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeIpIoLib\DxeIpIoLib.inf
{IpIoLib:  Time = 358ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          UefiPxeBcDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\UefiPxeBcDxe\UefiPxeBcDxe.inf
File GUID:            B95E9FDA-26DE-48d2-8807-1F9107AC5E3A
Size:                 0x27000 (156.00K)
SHA1 HASH:            789c4daf5505b5acb60d1237ffba681901e8a6ab *UefiPxeBcDxe.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    531ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
gEfiNetworkPkgTokenSpaceGuid
    PcdIPv4PXESupport                        :  FIXED    (UINT8) = 0x01 (1)
    PcdIPv6PXESupport                        :  FIXED    (UINT8) = 0x01 (1)
    PcdPxeTftpWindowSize                     :  FIXED   (UINT64) = 0x4 (4)
    PcdTftpBlockSize                         :  FIXED   (UINT64) = 0x0 (0)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeNetLib\DxeNetLib.inf
{NetLib:  Time = 429ms}
c:\fw\edk2-ws\edk2\NetworkPkg\Library\DxeDpcLib\DxeDpcLib.inf
{DpcLib:  C = DpcLibConstructor Time = 340ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MyWizardDriver
Module Arch:          X64
Module INF Path:      MyWizardDriver\MyWizardDriver.inf
File GUID:            9d1a5ec0-254e-11eb-b570-4485002a4585
Size:                 0xC000 (48.00K)
SHA1 HASH:            9b9cf2b399c2e7e190b1a7d3a03b8307d2296828 *MyWizardDriver.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    476ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
VFRPP_FLAGS =  /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h
------------------------------------------------------------------------------------------------------------------------
VFR_FLAGS =  -l -n
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SampleApp
Module Arch:          X64
Module INF Path:      SampleApp\SampleApp.inf
File GUID:            0A4E32F9-9A0F-40EE-9741-45F1CC1B0715
Size:                 0xD000 (52.00K)
SHA1 HASH:            66cd7bc506c34a5aa564664013d032ff2fd00cab *SampleApp.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    365ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiApplicationEntryPoint\UefiApplicationEntryPoint.inf
{UefiApplicationEntryPoint:  Time = 430ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BlankDrv
Module Arch:          X64
Module INF Path:      BlankDrv\BlankDrv.inf
File GUID:            08830B50-5822-4f13-99D8-D0DCAED583C3
Size:                 0x12000 (72.00K)
SHA1 HASH:            39d71ae7a3dbd2efb8d64a6c5bf32341a8395015 *BlankDrv.efi
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    427ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
>----------------------------------------------------------------------------------------------------------------------<
PCD
------------------------------------------------------------------------------------------------------------------------
gEfiMdePkgTokenSpaceGuid
    PcdComponentName2Disable                 :   FLAG  (BOOLEAN) = 0
    PcdComponentNameDisable                  :   FLAG  (BOOLEAN) = 0
    PcdControlFlowEnforcementPropertyMask    :  FIXED   (UINT32) = 0x0 (0)
    PcdDebugClearMemoryValue                 :  FIXED    (UINT8) = 0xAF (175)
 *M PcdDebugPrintErrorLevel                  :  FIXED   (UINT32) = 0x80000040 (2147483712)
                                                     DEC DEFAULT = 0x80000000 (2147483648)
 *M PcdDebugPropertyMask                     :  FIXED    (UINT8) = 0x1f (31)
                                                     DEC DEFAULT = 0x0 (0)
    PcdDriverDiagnostics2Disable             :   FLAG  (BOOLEAN) = 0
    PcdDriverDiagnosticsDisable              :   FLAG  (BOOLEAN) = 0
    PcdFixedDebugPrintErrorLevel             :  FIXED   (UINT32) = 0xFFFFFFFF (4294967295)
    PcdMaximumAsciiStringLength              :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumDevicePathNodeCount            :  FIXED   (UINT32) = 0x0 (0)
    PcdMaximumLinkedListLength               :  FIXED   (UINT32) = 0xF4240 (1000000)
    PcdMaximumUnicodeStringLength            :  FIXED   (UINT32) = 0xF4240 (1000000)
 *M PcdReportStatusCodePropertyMask          :  FIXED    (UINT8) = 0x0f (15)
                                                     DEC DEFAULT = 0x0 (0)
    PcdSpeculationBarrierType                :  FIXED    (UINT8) = 0x01 (1)
    PcdUefiLibMaxPrintBufferSize             :  FIXED   (UINT32) = 0x140 (320)
    PcdUgaConsumeSupport                     :   FLAG  (BOOLEAN) = 1
    PcdVerifyNodeInList                      :   FLAG  (BOOLEAN) = 0
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Library
------------------------------------------------------------------------------------------------------------------------
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseDebugPrintErrorLevelLib\BaseDebugPrintErrorLevelLib.inf
{DebugPrintErrorLevelLib:  Time = 305ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\DxeReportStatusCodeLib\DxeReportStatusCodeLib.inf
{ReportStatusCodeLib:  Time = 329ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\DxePcdLib\DxePcdLib.inf
{PcdLib:  Time = 351ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BasePrintLib\BasePrintLib.inf
{PrintLib:  Time = 319ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib.inf
{DevicePathLib:  Time = 398ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseLib\BaseLib.inf
{BaseLib:  Time = 1383ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\PeiDxeDebugLibReportStatusCode\PeiDxeDebugLibReportStatusCode.inf
{DebugLib:  Time = 314ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib.inf
{MemoryAllocationLib:  Time = 347ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\BaseMemoryLib\BaseMemoryLib.inf
{BaseMemoryLib:  Time = 458ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib.inf
{UefiBootServicesTableLib:  C = UefiBootServicesTableLibConstructor Time = 342ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib.inf
{UefiRuntimeServicesTableLib:  C = UefiRuntimeServicesTableLibConstructor Time = 319ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib.inf
{UefiHiiServicesLib:  C = UefiHiiServicesLibConstructor Time = 391ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiLib\UefiLib.inf
{UefiLib:  C = UefiLibConstructor Time = 548ms}
c:\fw\edk2-ws\edk2\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint.inf
{UefiDriverEntryPoint:  Depex = gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid
 AND gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
 gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
 gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid  Time = 373ms}
c:\fw\edk2-ws\edk2\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib.inf
{HiiLib:  Time = 449ms}
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Dependency Expression (DEPEX) from INF
(gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
------------------------------------------------------------------------------------------------------------------------
From Module INF:  (None)
From Library INF: (gEfiBdsArchProtocolGuid AND gEfiCpuArchProtocolGuid AND gEfiMetronomeArchProtocolGuid AND
gEfiMonotonicCounterArchProtocolGuid AND gEfiRealTimeClockArchProtocolGuid AND gEfiResetArchProtocolGuid AND
gEfiRuntimeArchProtocolGuid AND gEfiSecurityArchProtocolGuid AND gEfiTimerArchProtocolGuid AND
gEfiVariableWriteArchProtocolGuid AND gEfiVariableArchProtocolGuid AND gEfiWatchdogTimerArchProtocolGuid)
<---------------------------------------------------------------------------------------------------------------------->
>----------------------------------------------------------------------------------------------------------------------<
Build Flags
Tool Chain Tag: VS2015x86
------------------------------------------------------------------------------------------------------------------------
CC_FLAGS =  /nologo /c /WX /GS- /W4 /Gs32768 /D UNICODE /O1b2s /GL /Gy /FIAutoGen.h /EHs-c- /GR- /GF /Z7 /Gw -D
DISABLE_NEW_DEPRECATED_INTERFACES /Od /Oy-
------------------------------------------------------------------------------------------------------------------------
SLINK_FLAGS =  /NOLOGO /LTCG
------------------------------------------------------------------------------------------------------------------------
DLINK_FLAGS =  /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D
/SECTION:.pdata,D /Machine:X64 /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO
/BASE:0 /DRIVER /DEBUG /ALIGN:4096 /FILEALIGN:4096 /SUBSYSTEM:CONSOLE /EXPORT:InitializeDriver=$(IMAGE_ENTRY_POINT)
/BASE:0x10000
------------------------------------------------------------------------------------------------------------------------
VFRPP_FLAGS =  /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h
------------------------------------------------------------------------------------------------------------------------
VFR_FLAGS =  -l -n
<---------------------------------------------------------------------------------------------------------------------->
<======================================================================================================================>
```
