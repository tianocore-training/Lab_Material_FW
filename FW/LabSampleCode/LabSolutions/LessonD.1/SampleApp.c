/** @file
  This is a simple shell application

  Copyright (c) 2008-2022, Intel Corporation                                                         
  All rights reserved. This program and the accompanying materials                          
  are licensed and made available under the terms and conditions of the BSD License         
  which accompanies this distribution.  The full text of the license may be found at        
  http://opensource.org/licenses/bsd-license.php                                            

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

**/

#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/DebugLib.h>

#define CHAR_DOT	0x002E    // '.' in Unicode

/**
  as the real entry point for the application.

  @param[in] ImageHandle    The firmware allocated handle for the EFI image.  
  @param[in] SystemTable    A pointer to the EFI System Table.
  
  @retval EFI_SUCCESS       The entry point is executed successfully.
  @retval other             Some error occurs when executing this entry point.

**/
EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  	UINTN          EventIndex;
	BOOLEAN		   ExitLoop;
        EFI_INPUT_KEY	   Key;

	DEBUG((EFI_D_INFO, "\r\n>>>>>[UefiMain] Entry point: 0x%p <<<<<<\r\n", UefiMain));

	DEBUG((0xffffffff, "\n\nUEFI Base Training DEBUG DEMO\n"));
	DEBUG((0xffffffff, "0xffffffff USING DEBUG ALL Mask Bits Set\n"));

	DEBUG((DEBUG_INIT, " 0x%08x USING DEBUG DEBUG_INIT\n", (UINTN)(DEBUG_INIT)));
	DEBUG((DEBUG_WARN, " 0x%08x USING DEBUG DEBUG_WARN\n", (UINTN)(DEBUG_WARN)));
	DEBUG((DEBUG_LOAD, " 0x%08x USING DEBUG DEBUG_LOAD\n", (UINTN)(DEBUG_LOAD)));
	DEBUG((DEBUG_FS, " 0x%08x USING DEBUG DEBUG_FS\n", (UINTN)(DEBUG_FS)));
	DEBUG((DEBUG_POOL, " 0x%08x USING DEBUG DEBUG_POOL\n", (UINTN)(DEBUG_POOL)));
	DEBUG((DEBUG_PAGE, " 0x%08x USING DEBUG DEBUG_PAGE\n", (UINTN)(DEBUG_PAGE)));
	DEBUG((DEBUG_INFO, " 0x%08x USING DEBUG DEBUG_INFO\n", (UINTN)(DEBUG_INFO)));
	DEBUG((DEBUG_DISPATCH, " 0x%08x USING DEBUG DEBUG_DISPATCH\n", (UINTN)(DEBUG_DISPATCH)));
	DEBUG((DEBUG_VARIABLE, " 0x%08x USING DEBUG DEBUG_VARIABLE\n", (UINTN)(DEBUG_VARIABLE)));
	DEBUG((DEBUG_BM, " 0x%08x USING DEBUG DEBUG_BM\n", (UINTN)(DEBUG_BM)));
	DEBUG((DEBUG_BLKIO, " 0x%08x USING DEBUG DEBUG_BLKIO\n", (UINTN)(DEBUG_BLKIO)));
	DEBUG((DEBUG_NET, " 0x%08x USING DEBUG DEBUG_NET\n", (UINTN)(DEBUG_NET)));
	DEBUG((DEBUG_UNDI, " 0x%08x USING DEBUG DEBUG_UNDI\n", (UINTN)(DEBUG_UNDI)));
	DEBUG((DEBUG_LOADFILE, " 0x%08x USING DEBUG DEBUG_LOADFILE\n", (UINTN)(DEBUG_LOADFILE)));
	DEBUG((DEBUG_EVENT, " 0x%08x USING DEBUG DEBUG_EVENT\n", (UINTN)(DEBUG_EVENT)));
	DEBUG((DEBUG_GCD, " 0x%08x USING DEBUG DEBUG_GCD\n", (UINTN)(DEBUG_EVENT)));
	DEBUG((DEBUG_CACHE, " 0x%08x USING DEBUG DEBUG_CACHE\n", (UINTN)(DEBUG_CACHE)));
	DEBUG((DEBUG_VERBOSE, " 0x%08x USING DEBUG DEBUG_VERBOSE\n", (UINTN)(DEBUG_VERBOSE)));
	DEBUG((DEBUG_ERROR, " 0x%08x USING DEBUG DEBUG_ERROR\n", (UINTN)(DEBUG_ERROR)));


	// 3
  	Print(L"System Table: 0x%p\n",SystemTable); 
	
	// 4
	Print(L"\nPress any Key to continue : \n");
	gBS->WaitForEvent (1, &gST->ConIn->WaitForKey, &EventIndex);
	
	// 5
        // first empty the Keyboard Buffer
	gST->ConIn->ReadKeyStroke (gST->ConIn, &Key);
	// Check the PCD Feature Flag
	if (FeaturePcdGet(PcdTypeWriterFeatureEnable)) {
 	  Print(L"Enter text. Include a dot ('.') in a sentence then <Enter> to exit:\n");
	  ZeroMem (&Key, sizeof (EFI_INPUT_KEY));

	  ExitLoop = FALSE;
	  do {
		gBS->WaitForEvent (1, &gST->ConIn->WaitForKey, &EventIndex);
		gST->ConIn->ReadKeyStroke (gST->ConIn, &Key);
                Print(L"%c", Key.UnicodeChar);
	        if (Key.UnicodeChar == CHAR_DOT){
			ExitLoop = TRUE;
		}
	   } while (!(Key.UnicodeChar == CHAR_CARRIAGE_RETURN) ||
			   !(ExitLoop) );
	}
	Print(L"\n");
	
	return EFI_SUCCESS;
}