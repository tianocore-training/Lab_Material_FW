# Build -Y PCD
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
Build Duration:       00:00:41
AutoGen Duration:     00:00:11
Make Duration:        00:00:27
GenFds Duration:      00:00:02
Report Content:       PCD
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
Module Summary
Module Name:          WinHost
Module Arch:          X64
Module INF Path:      EmulatorPkg\Win\Host\WinHost.inf
File GUID:            62E8F833-2B0A-4C19-A966-63C180588BE7
Module Build Time:    2390ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSec
Module Arch:          X64
Module INF Path:      EmulatorPkg\Sec\Sec.inf
File GUID:            BCAF98C9-22B0-3B4F-9CBD-C8A6B4DBCEE9
Size:                 0xB000 (44.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    427ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PeiCore
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\Pei\PeiMain.inf
File GUID:            52C05B14-0B98-496c-BC3B-04B50211D680
Size:                 0x20000 (128.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    558ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PcdPeim
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PCD\Pei\Pcd.inf
File GUID:            9B3ADA4F-AE56-4c24-8DEA-F03B7558AE50
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    486ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ReportStatusCodeRouterPei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\ReportStatusCodeRouter\Pei\ReportStatusCodeRouterPei.inf
File GUID:            A3610442-E69F-4DF3-82CA-2360C4031A23
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    541ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          StatusCodeHandlerPei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\StatusCodeHandler\Pei\StatusCodeHandlerPei.inf
File GUID:            9D225237-FA01-464C-A949-BAABC02D31D0
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    556ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BootModePei
Module Arch:          X64
Module INF Path:      EmulatorPkg\BootModePei\BootModePei.inf
File GUID:            64196C76-58E3-0B4D-9484-B54F7C4349CA
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    378ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FaultTolerantWritePei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\FaultTolerantWritePei\FaultTolerantWritePei.inf
File GUID:            AAC33064-9ED0-4b89-A5AD-3EA767960B22
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    408ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PeiVariable
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Variable\Pei\VariablePei.inf
File GUID:            34C8C28F-B61C-45a2-8F2E-89E46BECC63B
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    363ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          AutoScanPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\AutoScanPei\AutoScanPei.inf
File GUID:            2D6F6BCC-9681-8E42-8579-B57DCD0060F0
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    358ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FirmwareVolumePei
Module Arch:          X64
Module INF Path:      EmulatorPkg\FirmwareVolumePei\FirmwareVolumePei.inf
File GUID:            6DB075DE-449E-2644-96D0-CC5A1B4C3B2A
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    425ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FlashMapPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\FlashMapPei\FlashMapPei.inf
File GUID:            C9FAF091-57F8-A64C-A07A-445B124F0D93
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    364ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ThunkPpiToProtocolPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\ThunkPpiToProtocolPei\ThunkPpiToProtocolPei.inf
File GUID:            C32A66D5-D8B7-2640-B768-082C8F083C37
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    393ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DxeIpl
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\DxeIplPeim\DxeIpl.inf
File GUID:            86D70125-BAA3-4296-A62F-602BEBBB9081
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    416ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DxeCore
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\Dxe\DxeMain.inf
File GUID:            D6A2CB7F-6A18-4e2f-B43B-9920A733700A
Size:                 0x46000 (280.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    1401ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PcdDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PCD\Dxe\Pcd.inf
File GUID:            80CF7257-87AB-47f9-A3FE-D50B76D89541
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    462ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ReportStatusCodeRouterRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\ReportStatusCodeRouter\RuntimeDxe\ReportStatusCodeRouterRuntimeDxe.inf
File GUID:            D93CE3D8-A7EB-4730-8C8E-CC466A9ECC3C
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    442ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          StatusCodeHandlerRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\StatusCodeHandler\RuntimeDxe\StatusCodeHandlerRuntimeDxe.inf
File GUID:            6C2004EF-4E0E-4BE4-B14C-340EB4AA5891
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    470ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Metronome
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Metronome\Metronome.inf
File GUID:            C8339973-A563-4561-B858-D8476F9DEFC4
Size:                 0xB000 (44.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    489ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          RealTimeClock
Module Arch:          X64
Module INF Path:      EmulatorPkg\RealTimeClockRuntimeDxe\RealTimeClock.inf
File GUID:            f3552032-8985-11db-8429-0040d02b1835
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    452ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuReset
Module Arch:          X64
Module INF Path:      EmulatorPkg\ResetRuntimeDxe\Reset.inf
File GUID:            50A18017-37AD-8743-BCF2-DF1A8FF12FAB
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    495ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          RuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\RuntimeDxe\RuntimeDxe.inf
File GUID:            B601F8C4-43B7-4784-95B1-F4226CB40CEE
Size:                 0xC000 (48.00K)
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FwBlockService
Module Arch:          X64
Module INF Path:      EmulatorPkg\FvbServicesRuntimeDxe\FvbServicesRuntimeDxe.inf
File GUID:            A01E498C-96E8-2A4C-95F4-85248F989753
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    459ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SecurityStubDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SecurityStubDxe\SecurityStubDxe.inf
File GUID:            F80697E9-7FD6-4665-8646-88E33EF71DFC
Size:                 0x14000 (80.00K)
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EbcDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\EbcDxe\EbcDxe.inf
File GUID:            13AC6DD0-73D0-11D4-B06B-00AA00BD6DE7
Size:                 0x13000 (76.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    511ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          NullMemoryTestDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\MemoryTest\NullMemoryTestDxe\NullMemoryTestDxe.inf
File GUID:            96B5C032-DF4C-4b6e-8232-438DCF448D0E
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    450ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuThunk
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuThunkDxe\EmuThunk.inf
File GUID:            2F62A818-4A72-CD40-90B9-FF00DAABEE7B
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    467ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Cpu
Module Arch:          X64
Module INF Path:      EmulatorPkg\CpuRuntimeDxe\Cpu.inf
File GUID:            f3794b60-8985-11db-8e53-0040d02b1835
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    475ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FaultTolerantWriteDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\FaultTolerantWriteDxe\FaultTolerantWriteDxe.inf
File GUID:            FE5CEA76-4F72-49e8-986F-2CD899DFFE5D
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    589ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PlatformSmbiosDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\PlatformSmbiosDxe\PlatformSmbiosDxe.inf
File GUID:            67FA951E-4FA2-9F4E-A658-4DBD954AC22E
Size:                 0xB000 (44.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    442ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuTimer
Module Arch:          X64
Module INF Path:      EmulatorPkg\TimerDxe\Timer.inf
File GUID:            87E1BB14-4D5C-7C4E-A90E-E1415687D062
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    446ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          VariableRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Variable\RuntimeDxe\VariableRuntimeDxe.inf
File GUID:            CBD2E4D5-7068-4FF5-B462-9822B4AD8D60
Size:                 0x1C000 (112.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    690ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          WatchdogTimer
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\WatchdogTimerDxe\WatchdogTimer.inf
File GUID:            F099D67F-71AE-4c36-B2A3-DCEB0EB2B7D8
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    437ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MonotonicCounterRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\MonotonicCounterRuntimeDxe\MonotonicCounterRuntimeDxe.inf
File GUID:            AD608272-D07F-4964-801E-7BD3B7888652
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    452ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          CapsuleRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\CapsuleRuntimeDxe\CapsuleRuntimeDxe.inf
File GUID:            42857F0A-13F2-4B21-8A23-53D3F714B840
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    506ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ConPlatformDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\ConPlatformDxe\ConPlatformDxe.inf
File GUID:            51ccf399-4fdf-4e55-a45b-e123f84d456a
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    415ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ConSplitterDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\ConSplitterDxe\ConSplitterDxe.inf
File GUID:            408edcec-cf6d-477c-a5a8-b4844e3de281
Size:                 0x14000 (80.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    471ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          GraphicsConsoleDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\GraphicsConsoleDxe\GraphicsConsoleDxe.inf
File GUID:            CCCB0C28-4B24-11d5-9A5A-0090273FC14D
Size:                 0xF000 (60.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    414ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SerialDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SerialDxe\SerialDxe.inf
File GUID:            9A5163E7-5C29-453F-825C-837A46A81E15
Size:                 0x9000 (36.00K)
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          TerminalDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\TerminalDxe\TerminalDxe.inf
File GUID:            9E863906-A40F-4875-977F-5B93FF237FC6
Size:                 0x14000 (80.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    520ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BdsDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\BdsDxe\BdsDxe.inf
File GUID:            6D33944A-EC75-4855-A54D-809C75241F6C
Size:                 0x2D000 (180.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    502ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          LogoDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Logo\LogoDxe.inf
File GUID:            F74D20EE-37E7-48FC-97F7-9B1047749C69
Size:                 0x23000 (140.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    402ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          LoadFileOnFv2
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\LoadFileOnFv2\LoadFileOnFv2.inf
File GUID:            BD712601-082F-4c59-8677-2C8A3C297948
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    517ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          UiApp
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\UiApp\UiApp.inf
File GUID:            462CAA21-7614-4503-836E-8AB6F4662331
Size:                 0x45000 (276.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    487ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BootManagerMenuApp
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\BootManagerMenuApp\BootManagerMenuApp.inf
File GUID:            EEC25BDC-67F2-4D95-B1D5-F81B2039D11D
Size:                 0x27000 (156.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    434ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DevicePathDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DevicePathDxe\DevicePathDxe.inf
File GUID:            9B680FCE-AD6B-4F3A-B60B-F59899003443
Size:                 0x1A000 (104.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    367ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DiskIoDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\DiskIoDxe\DiskIoDxe.inf
File GUID:            6B38F7B4-AD98-40e9-9093-ACA2B5A253C4
Size:                 0xF000 (60.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    412ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PartitionDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\PartitionDxe\PartitionDxe.inf
File GUID:            1FA1F39E-FEFF-4aae-BD7B-38A070A3B609
Size:                 0x12000 (72.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    528ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EnglishDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\UnicodeCollation\EnglishDxe\EnglishDxe.inf
File GUID:            CD3BAFB6-50FB-4fe8-8E4E-AB74D2C1A600
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    422ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PciBusDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Pci\PciBusDxe\PciBusDxe.inf
File GUID:            93B80004-9FB3-11d4-9A3A-0090273FC14D
Size:                 0x2A000 (168.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    770ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ScsiBus
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Scsi\ScsiBusDxe\ScsiBusDxe.inf
File GUID:            0167CCC4-D0F7-4f21-A3EF-9E64B7CDCE8B
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    541ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ScsiDisk
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Scsi\ScsiDiskDxe\ScsiDiskDxe.inf
File GUID:            0A66E322-3740-4cce-AD62-BD172CECCA35
Size:                 0x19000 (100.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    579ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuBusDriver
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuBusDriverDxe\EmuBusDriverDxe.inf
File GUID:            9842073D-95D9-9F49-BD3F-2E29525125DF
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    455ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuGopDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuGopDxe\EmuGopDxe.inf
File GUID:            BCC87E0D-86D6-4D4D-8040-2D983D368BD1
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    533ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSimpleFileSystem
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuSimpleFileSystemDxe\EmuSimpleFileSystemDxe.inf
File GUID:            35B72237-3926-CF4A-A7F3-1449F9E0E4BD
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    445ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuBlockIo
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuBlockIoDxe\EmuBlockIoDxe.inf
File GUID:            C6760651-A38D-5F4F-AEAF-F6661549DF75
Size:                 0xE000 (56.00K)
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSnpDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuSnpDxe\EmuSnpDxe.inf
File GUID:            22597239-6107-DF44-AD3F-5F053E92222E
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    450ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          HelloWorld
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\HelloWorld\HelloWorld.inf
File GUID:            6987936E-ED34-44db-AE97-1FA5E4ED2116
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    433ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SmbiosDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SmbiosDxe\SmbiosDxe.inf
File GUID:            F9D88642-0737-49bc-81B5-6889CD57D9EA
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    509ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          HiiDatabase
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\HiiDatabaseDxe\HiiDatabaseDxe.inf
File GUID:            348C4D62-BFBD-4882-9ECE-C80BB1C4783B
Size:                 0x3A000 (232.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    633ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DisplayEngine
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DisplayEngineDxe\DisplayEngineDxe.inf
File GUID:            E660EA85-058E-4b55-A54B-F02F83A24707
Size:                 0x29000 (164.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    533ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SetupBrowser
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SetupBrowserDxe\SetupBrowserDxe.inf
File GUID:            EBf342FE-B1D3-4EF8-957C-8048606FF671
Size:                 0x30000 (192.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    623ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PrintDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PrintDxe\PrintDxe.inf
File GUID:            79E4A61C-ED73-4312-94FE-E3E7563362A9
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    426ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DriverSample
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DriverSampleDxe\DriverSampleDxe.inf
File GUID:            FE3542FE-C1D3-4EF8-657C-8048606FF671
Size:                 0x29000 (164.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    547ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Fat
Module Arch:          X64
Module INF Path:      FatPkg\EnhancedFatDxe\Fat.inf
File GUID:            961578FE-B6B7-44c3-AF35-6BC705CD2B1F
Size:                 0x18000 (96.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    658ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          tftpDynamicCommand
Module Arch:          X64
Module INF Path:      ShellPkg\DynamicCommand\TftpDynamicCommand\TftpDynamicCommand.inf
File GUID:            A487A478-51EF-48AA-8794-7BEE2A0562F1
Size:                 0x1A000 (104.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    424ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Shell
Module Arch:          X64
Module INF Path:      ShellPkg\Application\Shell\Shell.inf
File GUID:            7C04A583-9E3E-4f1c-AD65-E05268D0B4D1
Size:                 0x15C000 (1392.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    697ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DpcDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\DpcDxe\DpcDxe.inf
File GUID:            A210F973-229D-4f4d-AA37-9895E6C9EABA
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    488ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          VlanConfigDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\VlanConfigDxe\VlanConfigDxe.inf
File GUID:            E4F61863-FE2C-4b56-A8F4-08519BC439DF
Size:                 0x14000 (80.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    521ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MnpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\MnpDxe\MnpDxe.inf
File GUID:            025BBFC7-E6A9-4b8b-82AD-6815A1AEAF4A
Size:                 0x1B000 (108.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    525ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ArpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\ArpDxe\ArpDxe.inf
File GUID:            529D3F93-E8E9-4e73-B1E1-BDF6A9D50113
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    482ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Dhcp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Dhcp4Dxe\Dhcp4Dxe.inf
File GUID:            94734718-0BBC-47fb-96A5-EE7A5AE6A2AD
Size:                 0x17000 (92.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    493ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Ip4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Ip4Dxe\Ip4Dxe.inf
File GUID:            9FB1A1F3-3B71-4324-B39A-745CBB015FFF
Size:                 0x2A000 (168.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    748ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Udp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Udp4Dxe\Udp4Dxe.inf
File GUID:            6d6963ab-906d-4a65-a7ca-bd40e5d6af2b
Size:                 0x19000 (100.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    601ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Mtftp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Mtftp4Dxe\Mtftp4Dxe.inf
File GUID:            DC3641B8-2FA8-4ed3-BC1F-F9962A03454B
Size:                 0x19000 (100.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    521ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          TcpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\TcpDxe\TcpDxe.inf
File GUID:            1A7E4468-2F55-4a56-903C-01265EB7622B
Size:                 0x28000 (160.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    661ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          UefiPxeBcDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\UefiPxeBcDxe\UefiPxeBcDxe.inf
File GUID:            B95E9FDA-26DE-48d2-8807-1F9107AC5E3A
Size:                 0x27000 (156.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    559ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MyWizardDriver
Module Arch:          X64
Module INF Path:      MyWizardDriver\MyWizardDriver.inf
File GUID:            9d1a5ec0-254e-11eb-b570-4485002a4585
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    514ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SampleApp
Module Arch:          X64
Module INF Path:      SampleApp\SampleApp.inf
File GUID:            0A4E32F9-9A0F-40EE-9741-45F1CC1B0715
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    437ms
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
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BlankDrv
Module Arch:          X64
Module INF Path:      BlankDrv\BlankDrv.inf
File GUID:            08830B50-5822-4f13-99D8-D0DCAED583C3
Size:                 0x12000 (72.00K)
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
<======================================================================================================================>

```