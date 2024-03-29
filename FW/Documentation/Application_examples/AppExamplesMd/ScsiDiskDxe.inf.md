# ScsiDisk .INF File
```
## @file
#  The Scsi Disk driver is used to retrieve the media info in the attached SCSI disk.
#  It detects the SCSI disk media and installs Block I/O and Block I/O2 Protocol on
#  the device handle.
#
#  Copyright (c) 2006 - 2019, Intel Corporation. All rights reserved.<BR>
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[Defines]
  INF_VERSION                    = 0x00010005
  BASE_NAME                      = ScsiDisk
  MODULE_UNI_FILE                = ScsiDisk.uni
  FILE_GUID                      = 0A66E322-3740-4cce-AD62-BD172CECCA35
  MODULE_TYPE                    = UEFI_DRIVER
  VERSION_STRING                 = 1.0
```
## UEFI Driver Entry point
```
  ENTRY_POINT                    = InitializeScsiDisk

#
# The following information is for reference only and not required by the build tools.
#
#  VALID_ARCHITECTURES           = IA32 X64 EBC
#
#  DRIVER_BINDING                =  gScsiDiskDriverBinding
#  COMPONENT_NAME                =  gScsiDiskComponentName
#  COMPONENT_NAME2               =  gScsiDiskComponentName2
#

[Sources]
  ComponentName.c
  ScsiDisk.c
  ScsiDisk.h

[Packages]
  MdePkg/MdePkg.dec


[LibraryClasses]
  UefiBootServicesTableLib
  UefiScsiLib
  BaseMemoryLib
  MemoryAllocationLib
  UefiLib
  UefiDriverEntryPoint
  DebugLib
  DevicePathLib
```
## Notice the Usage Fields 
```
[Protocols]
  gEfiDiskInfoProtocolGuid                      ## BY_START
  gEfiBlockIoProtocolGuid                       ## BY_START
  gEfiBlockIo2ProtocolGuid                      ## BY_START
  gEfiEraseBlockProtocolGuid                    ## BY_START
  gEfiStorageSecurityCommandProtocolGuid        ## BY_START
  gEfiScsiIoProtocolGuid                        ## TO_START
  gEfiScsiPassThruProtocolGuid                  ## TO_START
  gEfiExtScsiPassThruProtocolGuid               ## TO_START

[Guids]
  gEfiDiskInfoScsiInterfaceGuid                 ## SOMETIMES_PRODUCES ## UNDEFINED
  gEfiDiskInfoIdeInterfaceGuid                  ## SOMETIMES_PRODUCES ## UNDEFINED
  gEfiDiskInfoAhciInterfaceGuid                 ## SOMETIMES_PRODUCES ## UNDEFINED
  gEfiDiskInfoUfsInterfaceGuid                  ## SOMETIMES_PRODUCES ## UNDEFINED

# [Event]
# EVENT_TYPE_RELATIVE_TIMER       ## CONSUMES
#

[UserExtensions.TianoCore."ExtraFiles"]
  ScsiDiskExtra.uni
```