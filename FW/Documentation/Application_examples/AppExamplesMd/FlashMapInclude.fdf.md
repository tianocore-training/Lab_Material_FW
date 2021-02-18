```
## @file
#  Flash map for the UpXtreme Board.
#
#
#  Copyright (c) 2020, Intel Corporation. All rights reserved.<BR>
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
#
##

#=================================================================================#
# ~6.6 M BIOS - for FSP wrapper
#=================================================================================#
DEFINE FLASH_BASE                                                   = 0xFF950000  #
DEFINE FLASH_SIZE                                                   = 0x006B0000  #
DEFINE FLASH_BLOCK_SIZE                                             = 0x00010000  #
DEFINE FLASH_NUM_BLOCKS                                             = 0x0000006B  #
#=================================================================================#

SET gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageOffset           = 0x00000000  # Flash addr (0xFF950000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageSize             = 0x00040000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageVariableOffset   = 0x00000000  # Flash addr (0xFF950000)
SET gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageVariableSize    = 0x0001E000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageFtwWorkingOffset = 0x0001E000  # Flash addr (0xFF96E000)
SET gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwWorkingSize  = 0x00002000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashNvStorageFtwSpareOffset   = 0x00020000  # Flash addr (0xFF970000)
SET gEfiMdeModulePkgTokenSpaceGuid.PcdFlashNvStorageFtwSpareSize    = 0x00020000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedOffset          = 0x00040000  # Flash addr (0xFF990000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedSize            = 0x00050000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvSecurityOffset          = 0x00090000  # Flash addr (0xFF9E0000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvSecuritySize            = 0x00070000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvOsBootOffset            = 0x00100000  # Flash addr (0xFFA50000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvOsBootSize              = 0x00090000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvUefiBootOffset          = 0x00190000  # Flash addr (0xFFAE0000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvUefiBootSize            = 0x00190000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPostMemoryOffset        = 0x00320000  # Flash addr (0xFFC70000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPostMemorySize          = 0x00170000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspSOffset              = 0x00490000  # Flash addr (0xFFDE0000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspSSize                = 0x00070000  #
SET gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvOffset                  = 0x00500000  # Flash addr (0xFFE50000)
SET gSiPkgTokenSpaceGuid.PcdFlashMicrocodeFvSize                    = 0x00050000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspMOffset              = 0x00550000  # Flash addr (0xFFEA0000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspMSize                = 0x000EA000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspTOffset              = 0x0063A000  # Flash addr (0xFFF8A000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvFspTSize                = 0x00006000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedPreMemoryOffset = 0x00640000  # Flash addr (0xFFF90000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvAdvancedPreMemorySize   = 0x00010000  #
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPreMemoryOffset         = 0x00650000  # Flash addr (0xFFFA0000)
SET gMinPlatformPkgTokenSpaceGuid.PcdFlashFvPreMemorySize           = 0x00060000  #
```
