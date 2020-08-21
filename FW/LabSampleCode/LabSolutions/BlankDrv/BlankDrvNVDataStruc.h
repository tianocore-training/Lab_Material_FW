/** @file

Copyright (c) 2007 - 2011, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

Module Name:

  BlankDrvNVDataStruc.h

Abstract:

  NVData structure used by the BlankDrv sample driver

Revision History:


**/

#ifndef _BlANKDRVNVDATASTRUC_H_
#define _BlANKDRVNVDATASTRUC_H_

#include <Guid/HiiPlatformSetupFormset.h>
#include <Guid/HiiFormMapMethodGuid.h>

#define BLANKDRV_FORMSET_GUID \
  { \
	0x5a003bdb, 0x50a1, 0x4568, 0x91, 0x70, 0xeb, 0xd4, 0x9e, 0x16, 0xc4, 0x7c \
 }


#define CONFIGURATION_VARSTORE_ID    0x1234

#pragma pack(1)
typedef struct {

    UINT16  MyStringData[40];
    UINT8   MyHexData;

    UINT8   MyBaseAddress;

} BLANKDRV_CONFIGURATION;


//
// Labels definition
//
#define LABEL_END                   0x2223

#pragma pack()

#endif
