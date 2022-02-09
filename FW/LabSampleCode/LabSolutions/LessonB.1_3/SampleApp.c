/** @file
  This is a simple shell application

  Copyright (c) 2008-2012, Intel Corporation                                                         
  All rights reserved. This program and the accompanying materials                          
  are licensed and made available under the terms and conditions of the BSD License         
  which accompanies this distribution.  The full text of the license may be found at        
  http://opensource.org/licenses/bsd-license.php                                            

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

**/

#include <Uefi.h>
// PCD LAB
#include <Library/PcdLib.h>
//
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
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

	Print((CHAR16 *)PcdGetPtr(PcdSampleAppString));
    
	//1 7.3
  	Print(L"System Table: 0x%p\n",SystemTable); 
	
	//2 7.4
	Print(L"\nPress any Key to continue : \n\n");
	gBS->WaitForEvent (1, &gST->ConIn->WaitForKey, &EventIndex);
	
	
	//3 7.5
	Print(L"Enter text. Include a dot ('.') in a sentence then <Enter> to exit:\n\n");
	ZeroMem (&Key, sizeof (EFI_INPUT_KEY));
	gST->ConIn->ReadKeyStroke (gST->ConIn, &Key);
	ExitLoop = FALSE;
	do {
		gBS->WaitForEvent (1, &gST->ConIn->WaitForKey, &EventIndex);
		gST->ConIn->ReadKeyStroke (gST->ConIn, &Key);
        Print(L"%c", Key.UnicodeChar);
	    if (Key.UnicodeChar == CHAR_DOT){
			ExitLoop = TRUE;
		}
	} while (!(Key.UnicodeChar == CHAR_LINEFEED || 
		       Key.UnicodeChar == CHAR_CARRIAGE_RETURN) || 
			   !(ExitLoop) );
	
	Print(L"\n");
	
	return EFI_SUCCESS;
}