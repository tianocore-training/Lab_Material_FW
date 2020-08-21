/** @file
 * 
 *  msr.c
 *
 *
 *  Copyright (c) 2009-2011, Intel Corporation.
 *
 *  This software and associated documentation (if any) is furnished
 *  under a license and may only be used or copied in accordance
 *  with the terms of the license. Except as permitted by such
 *  license, no part of this software or documentation may be
 *  reproduced, stored in a retrieval system, or transmitted in any
 *  form or by any means without the express written consent of
 *  Intel Corporation.
 *
 *  This program has been developed by Intel Corporation.
 *  Licensee has Intel's permission to incorporate this source code
 *  into their product, royalty free.  This source code may NOT be
 *  redistributed to anyone without Intel's written permission.
 *
 *  Intel specifically disclaims all warranties, express or
 *  implied, and all liability, including consequential and other
 *  indirect damages, for the use of this code, including liability
 *  for infringement of any proprietary rights, and including the
 *  warranties of merchantability and fitness for a particular
 *  purpose.  Intel does not assume any responsibility for any
 *  errors which may appear in this code nor any responsibility to
 *  update it.
 */



#include <Uefi.h>
#include <Library/ShellLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiLib.h>
  
#define MSR_MAJOR_VERSION      0
#define MSR_MINOR_VERSION      0
#define MSR_BUILD_VERSION	   02
#define COPYRIGHT	L"CopyRight (c)"
#define INTC_COMP	L" 2015, Intel Corporation"

//
// Globals:
//
STATIC CHAR16 AppTitle[] = L"MSR";

UINT32 msr      = 0x10;
UINT64 msrValue = 0;
UINT8 help_flag = 0;

/*
*****************************************************************************
Dummy func calls for NT32 Emulation

*/

/**************************************************************************//**
 * Description
 *
 *
 * @param
 * @param
 * @retval
 *****************************************************************************/
BOOLEAN cmd_line_parse(UINTN argc, CHAR16** argv, UINT8* cmd_options)
{
     // sanity
    *cmd_options = 0;
	return FALSE;
}
/**************************************************************************//**
 * Description
 *
 *
 * @param
 * @param
 * @retval
 *****************************************************************************/
VOID version()
{
    Print(L"Version to go here\n");
}
/**************************************************************************//**
 * Description
 *
 *
 * @param
 * @param
 * @retval
 *****************************************************************************/
VOID usage()
{
  version ();
  Print(L"Usage to go here\n");
}                                    



/**************************************************************************//**
 * Main entry point for application.
 *
 *
 * @param IN UINTN Argc
 * @param CHAR16** Argv
 * @retval 0 = Normal Exit
 *****************************************************************************/
INTN EFIAPI ShellAppMain(IN UINTN Argc, IN CHAR16** Argv)
{
    UINT8 cmd_options = 0;
     

    //
    // Get cmd line params
    //
    if(cmd_line_parse(Argc, Argv, &cmd_options) != TRUE){
        Print(L"Error: Incorrect command line.\n");
        Print(L"       Run %s -h for usage information.\n", AppTitle);
        return EFI_SUCCESS;
    }
    if(help_flag){
        usage();
        return EFI_SUCCESS;
    }

    //
    // Display Header
    //
    version();
    
    // Main...
    if(cmd_options == 3){
    	Print(L"Writing %lx to MSR %x \n", msrValue, msr);
    	AsmWriteMsr64(msr, msrValue);
    } 
    
    Print(L"MSR %x\n", msr);
    msrValue = AsmReadMsr64(msr);
    Print(L"msrValue %lx\n", msrValue);
    
    
    
    return EFI_SUCCESS;
}
