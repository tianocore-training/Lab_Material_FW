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
Build Duration:       00:00:36
AutoGen Duration:     00:00:11
Make Duration:        00:00:23
GenFds Duration:      00:00:02
Report Content:       FLASH
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
Module Build Time:    2680ms
Driver Type:          0x2 (FREE_FORM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSec
Module Arch:          X64
Module INF Path:      EmulatorPkg\Sec\Sec.inf
File GUID:            BCAF98C9-22B0-3B4F-9CBD-C8A6B4DBCEE9
Size:                 0xB000 (44.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    569ms
Driver Type:          0x3 (SECURITY_CORE)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PeiCore
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\Pei\PeiMain.inf
File GUID:            52C05B14-0B98-496c-BC3B-04B50211D680
Size:                 0x20000 (128.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    547ms
Driver Type:          0x4 (PEI_CORE)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PcdPeim
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PCD\Pei\Pcd.inf
File GUID:            9B3ADA4F-AE56-4c24-8DEA-F03B7558AE50
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    357ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ReportStatusCodeRouterPei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\ReportStatusCodeRouter\Pei\ReportStatusCodeRouterPei.inf
File GUID:            A3610442-E69F-4DF3-82CA-2360C4031A23
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    586ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          StatusCodeHandlerPei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\StatusCodeHandler\Pei\StatusCodeHandlerPei.inf
File GUID:            9D225237-FA01-464C-A949-BAABC02D31D0
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    612ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BootModePei
Module Arch:          X64
Module INF Path:      EmulatorPkg\BootModePei\BootModePei.inf
File GUID:            64196C76-58E3-0B4D-9484-B54F7C4349CA
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    410ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FaultTolerantWritePei
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\FaultTolerantWritePei\FaultTolerantWritePei.inf
File GUID:            AAC33064-9ED0-4b89-A5AD-3EA767960B22
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    329ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PeiVariable
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Variable\Pei\VariablePei.inf
File GUID:            34C8C28F-B61C-45a2-8F2E-89E46BECC63B
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    514ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          AutoScanPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\AutoScanPei\AutoScanPei.inf
File GUID:            2D6F6BCC-9681-8E42-8579-B57DCD0060F0
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    418ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FirmwareVolumePei
Module Arch:          X64
Module INF Path:      EmulatorPkg\FirmwareVolumePei\FirmwareVolumePei.inf
File GUID:            6DB075DE-449E-2644-96D0-CC5A1B4C3B2A
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    549ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FlashMapPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\FlashMapPei\FlashMapPei.inf
File GUID:            C9FAF091-57F8-A64C-A07A-445B124F0D93
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    376ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ThunkPpiToProtocolPei
Module Arch:          X64
Module INF Path:      EmulatorPkg\ThunkPpiToProtocolPei\ThunkPpiToProtocolPei.inf
File GUID:            C32A66D5-D8B7-2640-B768-082C8F083C37
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    386ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DxeIpl
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\DxeIplPeim\DxeIpl.inf
File GUID:            86D70125-BAA3-4296-A62F-602BEBBB9081
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    389ms
Driver Type:          0x6 (PEIM)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DxeCore
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\Dxe\DxeMain.inf
File GUID:            D6A2CB7F-6A18-4e2f-B43B-9920A733700A
Size:                 0x46000 (280.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    1362ms
Driver Type:          0x5 (DXE_CORE)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PcdDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PCD\Dxe\Pcd.inf
File GUID:            80CF7257-87AB-47f9-A3FE-D50B76D89541
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    610ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ReportStatusCodeRouterRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\ReportStatusCodeRouter\RuntimeDxe\ReportStatusCodeRouterRuntimeDxe.inf
File GUID:            D93CE3D8-A7EB-4730-8C8E-CC466A9ECC3C
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    401ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          StatusCodeHandlerRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\StatusCodeHandler\RuntimeDxe\StatusCodeHandlerRuntimeDxe.inf
File GUID:            6C2004EF-4E0E-4BE4-B14C-340EB4AA5891
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    479ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Metronome
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Metronome\Metronome.inf
File GUID:            C8339973-A563-4561-B858-D8476F9DEFC4
Size:                 0xB000 (44.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    603ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          RealTimeClock
Module Arch:          X64
Module INF Path:      EmulatorPkg\RealTimeClockRuntimeDxe\RealTimeClock.inf
File GUID:            f3552032-8985-11db-8429-0040d02b1835
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    839ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuReset
Module Arch:          X64
Module INF Path:      EmulatorPkg\ResetRuntimeDxe\Reset.inf
File GUID:            50A18017-37AD-8743-BCF2-DF1A8FF12FAB
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    459ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          RuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Core\RuntimeDxe\RuntimeDxe.inf
File GUID:            B601F8C4-43B7-4784-95B1-F4226CB40CEE
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    453ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FwBlockService
Module Arch:          X64
Module INF Path:      EmulatorPkg\FvbServicesRuntimeDxe\FvbServicesRuntimeDxe.inf
File GUID:            A01E498C-96E8-2A4C-95F4-85248F989753
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    509ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SecurityStubDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SecurityStubDxe\SecurityStubDxe.inf
File GUID:            F80697E9-7FD6-4665-8646-88E33EF71DFC
Size:                 0x14000 (80.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    642ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EbcDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\EbcDxe\EbcDxe.inf
File GUID:            13AC6DD0-73D0-11D4-B06B-00AA00BD6DE7
Size:                 0x13000 (76.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    469ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          NullMemoryTestDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\MemoryTest\NullMemoryTestDxe\NullMemoryTestDxe.inf
File GUID:            96B5C032-DF4C-4b6e-8232-438DCF448D0E
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    537ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuThunk
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuThunkDxe\EmuThunk.inf
File GUID:            2F62A818-4A72-CD40-90B9-FF00DAABEE7B
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    869ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Cpu
Module Arch:          X64
Module INF Path:      EmulatorPkg\CpuRuntimeDxe\Cpu.inf
File GUID:            f3794b60-8985-11db-8e53-0040d02b1835
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    596ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          FaultTolerantWriteDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\FaultTolerantWriteDxe\FaultTolerantWriteDxe.inf
File GUID:            FE5CEA76-4F72-49e8-986F-2CD899DFFE5D
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    464ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PlatformSmbiosDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\PlatformSmbiosDxe\PlatformSmbiosDxe.inf
File GUID:            67FA951E-4FA2-9F4E-A658-4DBD954AC22E
Size:                 0xB000 (44.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    536ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuTimer
Module Arch:          X64
Module INF Path:      EmulatorPkg\TimerDxe\Timer.inf
File GUID:            87E1BB14-4D5C-7C4E-A90E-E1415687D062
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    416ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          VariableRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Variable\RuntimeDxe\VariableRuntimeDxe.inf
File GUID:            CBD2E4D5-7068-4FF5-B462-9822B4AD8D60
Size:                 0x1C000 (112.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    698ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          WatchdogTimer
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\WatchdogTimerDxe\WatchdogTimer.inf
File GUID:            F099D67F-71AE-4c36-B2A3-DCEB0EB2B7D8
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    646ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MonotonicCounterRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\MonotonicCounterRuntimeDxe\MonotonicCounterRuntimeDxe.inf
File GUID:            AD608272-D07F-4964-801E-7BD3B7888652
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    377ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          CapsuleRuntimeDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\CapsuleRuntimeDxe\CapsuleRuntimeDxe.inf
File GUID:            42857F0A-13F2-4B21-8A23-53D3F714B840
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    490ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ConPlatformDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\ConPlatformDxe\ConPlatformDxe.inf
File GUID:            51ccf399-4fdf-4e55-a45b-e123f84d456a
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    420ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ConSplitterDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\ConSplitterDxe\ConSplitterDxe.inf
File GUID:            408edcec-cf6d-477c-a5a8-b4844e3de281
Size:                 0x14000 (80.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    459ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          GraphicsConsoleDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\GraphicsConsoleDxe\GraphicsConsoleDxe.inf
File GUID:            CCCB0C28-4B24-11d5-9A5A-0090273FC14D
Size:                 0xF000 (60.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    593ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SerialDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SerialDxe\SerialDxe.inf
File GUID:            9A5163E7-5C29-453F-825C-837A46A81E15
Size:                 0x9000 (36.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    468ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          TerminalDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Console\TerminalDxe\TerminalDxe.inf
File GUID:            9E863906-A40F-4875-977F-5B93FF237FC6
Size:                 0x14000 (80.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    810ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BdsDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\BdsDxe\BdsDxe.inf
File GUID:            6D33944A-EC75-4855-A54D-809C75241F6C
Size:                 0x2D000 (180.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    546ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          LogoDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Logo\LogoDxe.inf
File GUID:            F74D20EE-37E7-48FC-97F7-9B1047749C69
Size:                 0x23000 (140.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    446ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          LoadFileOnFv2
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\LoadFileOnFv2\LoadFileOnFv2.inf
File GUID:            BD712601-082F-4c59-8677-2C8A3C297948
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    462ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          UiApp
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\UiApp\UiApp.inf
File GUID:            462CAA21-7614-4503-836E-8AB6F4662331
Size:                 0x45000 (276.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    783ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BootManagerMenuApp
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\BootManagerMenuApp\BootManagerMenuApp.inf
File GUID:            EEC25BDC-67F2-4D95-B1D5-F81B2039D11D
Size:                 0x27000 (156.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    492ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DevicePathDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DevicePathDxe\DevicePathDxe.inf
File GUID:            9B680FCE-AD6B-4F3A-B60B-F59899003443
Size:                 0x1A000 (104.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    370ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DiskIoDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\DiskIoDxe\DiskIoDxe.inf
File GUID:            6B38F7B4-AD98-40e9-9093-ACA2B5A253C4
Size:                 0xF000 (60.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    481ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PartitionDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\PartitionDxe\PartitionDxe.inf
File GUID:            1FA1F39E-FEFF-4aae-BD7B-38A070A3B609
Size:                 0x12000 (72.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    604ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EnglishDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\Disk\UnicodeCollation\EnglishDxe\EnglishDxe.inf
File GUID:            CD3BAFB6-50FB-4fe8-8E4E-AB74D2C1A600
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    621ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PciBusDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Pci\PciBusDxe\PciBusDxe.inf
File GUID:            93B80004-9FB3-11d4-9A3A-0090273FC14D
Size:                 0x2A000 (168.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    776ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ScsiBus
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Scsi\ScsiBusDxe\ScsiBusDxe.inf
File GUID:            0167CCC4-D0F7-4f21-A3EF-9E64B7CDCE8B
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    690ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ScsiDisk
Module Arch:          X64
Module INF Path:      MdeModulePkg\Bus\Scsi\ScsiDiskDxe\ScsiDiskDxe.inf
File GUID:            0A66E322-3740-4cce-AD62-BD172CECCA35
Size:                 0x19000 (100.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    483ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuBusDriver
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuBusDriverDxe\EmuBusDriverDxe.inf
File GUID:            9842073D-95D9-9F49-BD3F-2E29525125DF
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    442ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuGopDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuGopDxe\EmuGopDxe.inf
File GUID:            BCC87E0D-86D6-4D4D-8040-2D983D368BD1
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    450ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSimpleFileSystem
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuSimpleFileSystemDxe\EmuSimpleFileSystemDxe.inf
File GUID:            35B72237-3926-CF4A-A7F3-1449F9E0E4BD
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    376ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuBlockIo
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuBlockIoDxe\EmuBlockIoDxe.inf
File GUID:            C6760651-A38D-5F4F-AEAF-F6661549DF75
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    432ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          EmuSnpDxe
Module Arch:          X64
Module INF Path:      EmulatorPkg\EmuSnpDxe\EmuSnpDxe.inf
File GUID:            22597239-6107-DF44-AD3F-5F053E92222E
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    650ms
Driver Type:          0x7 (DRIVER)
UEFI Spec Version:    0x00020000
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          HelloWorld
Module Arch:          X64
Module INF Path:      MdeModulePkg\Application\HelloWorld\HelloWorld.inf
File GUID:            6987936E-ED34-44db-AE97-1FA5E4ED2116
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    422ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SmbiosDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SmbiosDxe\SmbiosDxe.inf
File GUID:            F9D88642-0737-49bc-81B5-6889CD57D9EA
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    537ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          HiiDatabase
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\HiiDatabaseDxe\HiiDatabaseDxe.inf
File GUID:            348C4D62-BFBD-4882-9ECE-C80BB1C4783B
Size:                 0x3A000 (232.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    577ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DisplayEngine
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DisplayEngineDxe\DisplayEngineDxe.inf
File GUID:            E660EA85-058E-4b55-A54B-F02F83A24707
Size:                 0x29000 (164.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    775ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SetupBrowser
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\SetupBrowserDxe\SetupBrowserDxe.inf
File GUID:            EBf342FE-B1D3-4EF8-957C-8048606FF671
Size:                 0x30000 (192.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    776ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          PrintDxe
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\PrintDxe\PrintDxe.inf
File GUID:            79E4A61C-ED73-4312-94FE-E3E7563362A9
Size:                 0xE000 (56.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    524ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DriverSample
Module Arch:          X64
Module INF Path:      MdeModulePkg\Universal\DriverSampleDxe\DriverSampleDxe.inf
File GUID:            FE3542FE-C1D3-4EF8-657C-8048606FF671
Size:                 0x29000 (164.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    528ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Fat
Module Arch:          X64
Module INF Path:      FatPkg\EnhancedFatDxe\Fat.inf
File GUID:            961578FE-B6B7-44c3-AF35-6BC705CD2B1F
Size:                 0x18000 (96.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    640ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          tftpDynamicCommand
Module Arch:          X64
Module INF Path:      ShellPkg\DynamicCommand\TftpDynamicCommand\TftpDynamicCommand.inf
File GUID:            A487A478-51EF-48AA-8794-7BEE2A0562F1
Size:                 0x1A000 (104.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    419ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Shell
Module Arch:          X64
Module INF Path:      ShellPkg\Application\Shell\Shell.inf
File GUID:            7C04A583-9E3E-4f1c-AD65-E05268D0B4D1
Size:                 0x15C000 (1392.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    561ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          DpcDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\DpcDxe\DpcDxe.inf
File GUID:            A210F973-229D-4f4d-AA37-9895E6C9EABA
Size:                 0xA000 (40.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    591ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          VlanConfigDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\VlanConfigDxe\VlanConfigDxe.inf
File GUID:            E4F61863-FE2C-4b56-A8F4-08519BC439DF
Size:                 0x14000 (80.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    463ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MnpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\MnpDxe\MnpDxe.inf
File GUID:            025BBFC7-E6A9-4b8b-82AD-6815A1AEAF4A
Size:                 0x1B000 (108.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    553ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          ArpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\ArpDxe\ArpDxe.inf
File GUID:            529D3F93-E8E9-4e73-B1E1-BDF6A9D50113
Size:                 0x11000 (68.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    515ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Dhcp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Dhcp4Dxe\Dhcp4Dxe.inf
File GUID:            94734718-0BBC-47fb-96A5-EE7A5AE6A2AD
Size:                 0x17000 (92.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    731ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Ip4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Ip4Dxe\Ip4Dxe.inf
File GUID:            9FB1A1F3-3B71-4324-B39A-745CBB015FFF
Size:                 0x2A000 (168.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    780ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Udp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Udp4Dxe\Udp4Dxe.inf
File GUID:            6d6963ab-906d-4a65-a7ca-bd40e5d6af2b
Size:                 0x19000 (100.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    460ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          Mtftp4Dxe
Module Arch:          X64
Module INF Path:      NetworkPkg\Mtftp4Dxe\Mtftp4Dxe.inf
File GUID:            DC3641B8-2FA8-4ed3-BC1F-F9962A03454B
Size:                 0x19000 (100.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    710ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          TcpDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\TcpDxe\TcpDxe.inf
File GUID:            1A7E4468-2F55-4a56-903C-01265EB7622B
Size:                 0x28000 (160.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    580ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          UefiPxeBcDxe
Module Arch:          X64
Module INF Path:      NetworkPkg\UefiPxeBcDxe\UefiPxeBcDxe.inf
File GUID:            B95E9FDA-26DE-48d2-8807-1F9107AC5E3A
Size:                 0x27000 (156.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    701ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          MyWizardDriver
Module Arch:          X64
Module INF Path:      MyWizardDriver\MyWizardDriver.inf
File GUID:            9d1a5ec0-254e-11eb-b570-4485002a4585
Size:                 0xC000 (48.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    462ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          SampleApp
Module Arch:          X64
Module INF Path:      SampleApp\SampleApp.inf
File GUID:            0A4E32F9-9A0F-40EE-9741-45F1CC1B0715
Size:                 0xD000 (52.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    415ms
Driver Type:          0x9 (APPLICATION)
========================================================================================================================
<======================================================================================================================>

>======================================================================================================================<
Module Summary
Module Name:          BlankDrv
Module Arch:          X64
Module INF Path:      BlankDrv\BlankDrv.inf
File GUID:            08830B50-5822-4f13-99D8-D0DCAED583C3
Size:                 0x12000 (72.00K)
Build Time Stamp:     1970-01-01 00:00:00
Module Build Time:    514ms
Driver Type:          0x7 (DRIVER)
========================================================================================================================
<======================================================================================================================>

```