/******************************************************************************
 *
 * Module Name: oslinuxtbl - Linux OSL for obtaining ACPI tables
 *
 *****************************************************************************/

/******************************************************************************
 *
 * 1. Copyright Notice
 *
 * Some or all of this work - Copyright (c) 1999 - 2013, Intel Corp.
 * All rights reserved.
 *
 * 2. License
 *
 * 2.1. This is your license from Intel Corp. under its intellectual property
 * rights. You may have additional license terms from the party that provided
 * you this software, covering your right to use that party's intellectual
 * property rights.
 *
 * 2.2. Intel grants, free of charge, to any person ("Licensee") obtaining a
 * copy of the source code appearing in this file ("Covered Code") an
 * irrevocable, perpetual, worldwide license under Intel's copyrights in the
 * base code distributed originally by Intel ("Original Intel Code") to copy,
 * make derivatives, distribute, use and display any portion of the Covered
 * Code in any form, with the right to sublicense such rights; and
 *
 * 2.3. Intel grants Licensee a non-exclusive and non-transferable patent
 * license (with the right to sublicense), under only those claims of Intel
 * patents that are infringed by the Original Intel Code, to make, use, sell,
 * offer to sell, and import the Covered Code and derivative works thereof
 * solely to the minimum extent necessary to exercise the above copyright
 * license, and in no event shall the patent license extend to any additions
 * to or modifications of the Original Intel Code. No other license or right
 * is granted directly or by implication, estoppel or otherwise;
 *
 * The above copyright and patent license is granted only if the following
 * conditions are met:
 *
 * 3. Conditions
 *
 * 3.1. Redistribution of Source with Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification with rights to further distribute source must include
 * the above Copyright Notice, the above License, this list of Conditions,
 * and the following Disclaimer and Export Compliance provision. In addition,
 * Licensee must cause all Covered Code to which Licensee contributes to
 * contain a file documenting the changes Licensee made to create that Covered
 * Code and the date of any change. Licensee must include in that file the
 * documentation of any changes made by any predecessor Licensee. Licensee
 * must include a prominent statement that the modification is derived,
 * directly or indirectly, from Original Intel Code.
 *
 * 3.2. Redistribution of Source with no Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification without rights to further distribute source must
 * include the following Disclaimer and Export Compliance provision in the
 * documentation and/or other materials provided with distribution. In
 * addition, Licensee may not authorize further sublicense of source of any
 * portion of the Covered Code, and must include terms to the effect that the
 * license from Licensee to its licensee is limited to the intellectual
 * property embodied in the software Licensee provides to its licensee, and
 * not to intellectual property embodied in modifications its licensee may
 * make.
 *
 * 3.3. Redistribution of Executable. Redistribution in executable form of any
 * substantial portion of the Covered Code or modification must reproduce the
 * above Copyright Notice, and the following Disclaimer and Export Compliance
 * provision in the documentation and/or other materials provided with the
 * distribution.
 *
 * 3.4. Intel retains all right, title, and interest in and to the Original
 * Intel Code.
 *
 * 3.5. Neither the name Intel nor any other trademark owned or controlled by
 * Intel shall be used in advertising or otherwise to promote the sale, use or
 * other dealings in products derived from or relating to the Covered Code
 * without prior written authorization from Intel.
 *
 * 4. Disclaimer and Export Compliance
 *
 * 4.1. INTEL MAKES NO WARRANTY OF ANY KIND REGARDING ANY SOFTWARE PROVIDED
 * HERE. ANY SOFTWARE ORIGINATING FROM INTEL OR DERIVED FROM INTEL SOFTWARE
 * IS PROVIDED "AS IS," AND INTEL WILL NOT PROVIDE ANY SUPPORT, ASSISTANCE,
 * INSTALLATION, TRAINING OR OTHER SERVICES. INTEL WILL NOT PROVIDE ANY
 * UPDATES, ENHANCEMENTS OR EXTENSIONS. INTEL SPECIFICALLY DISCLAIMS ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY, NONINFRINGEMENT AND FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * 4.2. IN NO EVENT SHALL INTEL HAVE ANY LIABILITY TO LICENSEE, ITS LICENSEES
 * OR ANY OTHER THIRD PARTY, FOR ANY LOST PROFITS, LOST DATA, LOSS OF USE OR
 * COSTS OF PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, OR FOR ANY INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THIS AGREEMENT, UNDER ANY
 * CAUSE OF ACTION OR THEORY OF LIABILITY, AND IRRESPECTIVE OF WHETHER INTEL
 * HAS ADVANCE NOTICE OF THE POSSIBILITY OF SUCH DAMAGES. THESE LIMITATIONS
 * SHALL APPLY NOTWITHSTANDING THE FAILURE OF THE ESSENTIAL PURPOSE OF ANY
 * LIMITED REMEDY.
 *
 * 4.3. Licensee shall not export, either directly or indirectly, any of this
 * software or system incorporating such software without first obtaining any
 * required license or other approval from the U. S. Department of Commerce or
 * any other agency or department of the United States Government. In the
 * event Licensee exports any such software from the United States or
 * re-exports any such software from a foreign destination, Licensee shall
 * ensure that the distribution and export/re-export of the software is in
 * compliance with all laws, regulations, orders, or other restrictions of the
 * U.S. Export Administration Regulations. Licensee agrees that neither it nor
 * any of its subsidiaries will export/re-export any technical data, process,
 * software, or service, directly or indirectly, to any country for which the
 * United States government or any agency thereof requires an export license,
 * other governmental approval, or letter of assurance, without first obtaining
 * such license, approval or letter.
 *
 *****************************************************************************/

#include "acpi.h"

#include <stdio.h>
#include <stdlib.h>


#include <Guid/Acpi.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiLib.h>
#include <Library/PrintLib.h>
#include <Guid/GlobalVariable.h>
#include <Uefi.h>


#define MY_EFI_ACPI_TABLE_GUID \
{0x8868e871,0xe4f1,0x11d3,0xbc,0x22,0x0,0x80,0xc7,0x3c,0x88,0x81}


#define _COMPONENT          ACPI_OS_SERVICES
        ACPI_MODULE_NAME    ("uefitbl")


#pragma warning(disable:4305)


/******************************************************************************
 *
 * FUNCTION:    AcpiUEFIGetRsdp
 *
 * PARAMETERS:  None
 *           
 *
 * RETURN:      Status; Returns RSDP.
 *                      NULL if RSDP is not found in ConfigurationTable table
 *
 * DESCRIPTION: Get ACPI RSDP.
 *
 *****************************************************************************/

ACPI_TABLE_RSDP *AcpiUEFIGetRsdp(){

	UINT32                    TableWalker;
    EFI_GUID                  EfiGuid= MY_EFI_ACPI_TABLE_GUID;
    //
	//search for  rsdp from the config table
	//
	for (TableWalker = 0 ; TableWalker <gST->NumberOfTableEntries ; TableWalker++) {     
      if (CompareGuid(&gST->ConfigurationTable[TableWalker].VendorGuid,&EfiGuid)) {
        return(ACPI_TABLE_RSDP*)gST->ConfigurationTable[TableWalker].VendorTable;
       }
	}
	return NULL;
}


/******************************************************************************
 *
 * FUNCTION:    AcpiOsGetTableByAddress
 *
 * PARAMETERS:  Address         - Physical address of the ACPI table
 *              Table           - Where a pointer to the table is returned
 *
 * RETURN:      Status; Table buffer is returned if AE_OK.
 *              AE_NOT_FOUND: A valid table was not found at the address
 *
 * DESCRIPTION: Get an ACPI table via a physical memory address.
 *
 *****************************************************************************/

ACPI_STATUS
AcpiOsGetTableByAddress (
    ACPI_PHYSICAL_ADDRESS   Address,
    ACPI_TABLE_HEADER       **Table)
{
	
	UINT32                    TableWalker;
    ACPI_TABLE_RSDP           *RSDP = NULL;
    ACPI_TABLE_XSDT           *XSDT = NULL;
	ACPI_TABLE_RSDT           *RSDT = NULL;
	ACPI_TABLE_FADT           *FACP = NULL;
    UINT32                    Entries;
    ACPI_TABLE_HEADER         *header = NULL;

	//get rsdp
	RSDP  = AcpiUEFIGetRsdp();

	//
	// return not found if rsdp is null
	//
	if (RSDP == NULL){
		return (AE_NOT_FOUND);
	}

   //check if XSDT is available
   if(RSDP->XsdtPhysicalAddress ){
	 XSDT = (ACPI_TABLE_XSDT*) RSDP->XsdtPhysicalAddress;
     Entries = (XSDT->Header.Length - sizeof(XSDT->Header))/8;
   }else{
     RSDT = (ACPI_TABLE_RSDT*) RSDP->RsdtPhysicalAddress;
     Entries = (RSDT->Header.Length - sizeof(RSDT->Header))/4;
   }

   //
   // XSDT OR Rsdt
   //
   if(ACPI_COMPARE_NAME (ACPI_SIG_XSDT, header->Signature) && XSDT != NULL){
      *Table = &XSDT->Header;
	  return(AE_OK);
   }else if(ACPI_COMPARE_NAME (ACPI_SIG_RSDT, header->Signature) && RSDT != NULL){
      *Table =  &RSDT->Header;
	  return(AE_OK);
	}

   //
   //iterate through entries , compare addresses 
   //
   for (TableWalker = 0; TableWalker < Entries; TableWalker++){
    if(XSDT != NULL){
     header = (ACPI_TABLE_HEADER *) XSDT->TableOffsetEntry[TableWalker];
    }else{
	 header = (ACPI_TABLE_HEADER *) RSDT->TableOffsetEntry[TableWalker];
    }
	if (ACPI_TO_INTEGER(header) == ACPI_TO_INTEGER(Address)){
     *Table = (ACPI_TABLE_HEADER *) ACPI_PHYSADDR_TO_PTR(Address);
      return(AE_OK);
	 } 
	//
	// check if its dsdt or facs found in FACP
	//
	 if(ACPI_COMPARE_NAME (ACPI_SIG_FADT, header->Signature) ){
	   FACP = (ACPI_TABLE_FADT*)header;
	   if(ACPI_TO_INTEGER(Address) == ACPI_TO_INTEGER(FACP->XDsdt)){
	     *Table =(ACPI_TABLE_HEADER *)FACP->XDsdt;
		 return(AE_OK);
	    }else if (ACPI_TO_INTEGER(Address) == ACPI_TO_INTEGER(FACP->Dsdt)){
          *Table =(ACPI_TABLE_HEADER *)FACP->Dsdt;	
		  return(AE_OK);
	   }else if(ACPI_TO_INTEGER(Address) == ACPI_TO_INTEGER(FACP->XFacs)){
	      *Table =(ACPI_TABLE_HEADER *)FACP->XFacs;
		  return(AE_OK);
	   }else if (ACPI_TO_INTEGER(Address) == ACPI_TO_INTEGER(FACP->Facs)){
          *Table =(ACPI_TABLE_HEADER *)FACP->Facs;	
		  return(AE_OK);
	   }
	 }
   }
    return (AE_NOT_FOUND);
}


/******************************************************************************
 *
 * FUNCTION:    AcpiOsGetTableByIndex
 *
 * PARAMETERS:  Index           - Which table to get
 *              Table           - Where a pointer to the table is returned
 *              Address         - Where the table physical address is returned
 *
 * RETURN:      Status; Table buffer and physical address returned if AE_OK.
 *              AE_LIMIT: Index is beyond valid limit
 *
 * DESCRIPTION: Get an ACPI table via an index value (0 through n). Returns
 *              AE_LIMIT when an invalid index is reached. Index is not
 *              necessarily an index into the RSDT/XSDT.
 *
 *****************************************************************************/

ACPI_STATUS
AcpiOsGetTableByIndex (
    UINT32                  Index,
    ACPI_TABLE_HEADER       **Table,
    ACPI_PHYSICAL_ADDRESS   *Address)
{

   ACPI_TABLE_RSDP           *RSDP = NULL;
   ACPI_TABLE_XSDT           *XSDT = NULL;
   ACPI_TABLE_RSDT           *RSDT = NULL;
   UINT32                    Entries;
   UINT32                    ndx = 0;
   UINT32                    Instance = 0;
   ACPI_TABLE_HEADER         *header = NULL;
   *Address                   = 0;  


   RSDP  = AcpiUEFIGetRsdp();

	   //
   // return not found if rsdp is null
   //
   if (RSDP == NULL){
	return (AE_LIMIT);
   }

   //check if XSDT is available
   if(RSDP->XsdtPhysicalAddress ){
	 XSDT = (ACPI_TABLE_XSDT*) RSDP->XsdtPhysicalAddress;
	 Entries = (XSDT->Header.Length - sizeof(XSDT->Header))/8;
   }else{
	 RSDT = (ACPI_TABLE_RSDT*) RSDP->RsdtPhysicalAddress;
	 Entries = (RSDT->Header.Length - sizeof(RSDT->Header))/4;
   }

   if(Index < 3){
	    if(Index == 0){
		   if(XSDT){
             *Table = &XSDT->Header;
		     *Address = ACPI_PTR_TO_PHYSADDR(&XSDT->Header);
	       }else if(RSDT){
		     *Table =  &RSDT->Header;
		     *Address = ACPI_PTR_TO_PHYSADDR(&RSDT->Header);
	       }
	   }
	   else if(Index == 1){
		   AcpiOsGetTableByName (
			"DSDT",
			Instance,
			Table,
			Address
			);
	   }else{
		   AcpiOsGetTableByName (
			"FACS",
			Instance,
			Table,
			Address
			);
	   }
   }
   else
   {
	   ndx = Index - 3;
       //
	   //check for valid index
	   //
       if(ndx >= Entries ){
	     return (AE_LIMIT);
       }
	   if(XSDT != NULL){
		 header = (ACPI_TABLE_HEADER *) XSDT->TableOffsetEntry[ndx];
	   }else{
		 header = (ACPI_TABLE_HEADER *) RSDT->TableOffsetEntry[ndx];
	   }
		*Table =  header;
		*Address = ACPI_PTR_TO_PHYSADDR(header);
		//printf("%s\n",header->Signature);
   }
   //
   //check for valid index
   //
   if(ndx >= Entries){
	  return (AE_LIMIT);
   }

   	return(AE_OK);
    
}



/******************************************************************************
 *
 * FUNCTION:    AcpiOsGetTableByName
 *
 * PARAMETERS:  Signature       - ACPI Signature for desired table. Must be
 *                                a null terminated 4-character string.
 *              Instance        - For SSDTs (0...n)
 *              Table           - Where a pointer to the table is returned
 *              Address         - Where the table physical address is returned
 *
 * RETURN:      Status; Table buffer and physical address returned if AE_OK.
 *
 * RETURN:      Status; Table buffer and physical address returned if AE_OK.
 *              AE_LIMIT: Instance is beyond valid limit
 *              AE_NOT_FOUND: A table with the signature was not found
 *
 * NOTE:        Assumes the input signature is uppercase.
 *
 *****************************************************************************/

ACPI_STATUS
AcpiOsGetTableByName (
    char                    *Signature,
    UINT32                  Instance,
    ACPI_TABLE_HEADER       **Table,
    ACPI_PHYSICAL_ADDRESS   *Address)
{

    UINT32                  TableWalker;
	UINT32                  instanceCounter = 0;
    ACPI_TABLE_RSDP         *RSDP = NULL;
    ACPI_TABLE_XSDT         *XSDT = NULL;
	ACPI_TABLE_RSDT         *RSDT = NULL;
	ACPI_TABLE_FADT         *FACP = NULL;
    ACPI_TABLE_HEADER       *header = NULL;
    UINT32                  Entries;

   
	RSDP  = AcpiUEFIGetRsdp();

    //
    // return not found if rsdp is null
    //
    if (RSDP == NULL){
		return (AE_NOT_FOUND);
    }

   //check if XSDT is available
   if(RSDP->XsdtPhysicalAddress ){
	 XSDT = (ACPI_TABLE_XSDT*) RSDP->XsdtPhysicalAddress;
     Entries = (XSDT->Header.Length - sizeof(XSDT->Header))/8;
   }else{
     RSDT = (ACPI_TABLE_RSDT*) RSDP->RsdtPhysicalAddress;
     Entries = (RSDT->Header.Length - sizeof(RSDT->Header))/4;
   }


   //
   // XSDT OR Rsdt
   //
   if(ACPI_COMPARE_NAME (Signature, ACPI_SIG_XSDT) && XSDT != NULL){
      *Table = &XSDT->Header;
	  *Address = ACPI_PTR_TO_PHYSADDR(&XSDT->Header);
	  return(AE_LIMIT);
   }else if(ACPI_COMPARE_NAME (Signature, ACPI_SIG_RSDT) && RSDT != NULL){
      *Table =  &RSDT->Header;
      *Address = ACPI_PTR_TO_PHYSADDR(&RSDT->Header);
	  return(AE_LIMIT);
	}
    //
    //ssdt may have multiple instances
    //
    if (Instance >= Entries || (!ACPI_COMPARE_NAME (Signature, ACPI_SIG_SSDT) && Instance > 0) ){
     return (AE_LIMIT);
    }

    for (TableWalker = 0; TableWalker < Entries; TableWalker++){
	 //check if XSDT is available
	 if(XSDT != NULL){
      header = (ACPI_TABLE_HEADER *) XSDT->TableOffsetEntry[TableWalker];
	 }else{
	  header = (ACPI_TABLE_HEADER *) RSDT->TableOffsetEntry[TableWalker];
	 }


	 if((ACPI_COMPARE_NAME (Signature, ACPI_SIG_DSDT) || ACPI_COMPARE_NAME (Signature, ACPI_SIG_FACS)) && ACPI_COMPARE_NAME (ACPI_SIG_FADT, header->Signature) ){
	   FACP = (ACPI_TABLE_FADT*)header;
	   if(ACPI_COMPARE_NAME (Signature, ACPI_SIG_DSDT)){
	     if(FACP->XDsdt){
	      *Table =(ACPI_TABLE_HEADER *)FACP->XDsdt;
		  *Address = ACPI_PTR_TO_PHYSADDR(FACP->XDsdt);
		  ++instanceCounter; 	
	      }else{
          *Table =(ACPI_TABLE_HEADER *)FACP->Dsdt;
		  *Address = ACPI_PTR_TO_PHYSADDR(FACP->Dsdt);
		  ++instanceCounter; 	
	     }
	   }else{
	     if(FACP->XFacs){
	      *Table =(ACPI_TABLE_HEADER *)FACP->XFacs;
		  *Address = ACPI_PTR_TO_PHYSADDR(FACP->XFacs);
		  ++instanceCounter; 	
	      }else{
          *Table =(ACPI_TABLE_HEADER *)FACP->Facs;
		  *Address = ACPI_PTR_TO_PHYSADDR(FACP->Facs);
		  ++instanceCounter; 	
	     }
	   }
	 }else if (ACPI_COMPARE_NAME (Signature, header->Signature)){
	   *Table = header;
	   *Address = ACPI_PTR_TO_PHYSADDR(header);
	   ++instanceCounter;        
	  }   
     //
     //allow for next instance. Do not return until the next instance is found
     //
	 if(instanceCounter > Instance){
		return(AE_OK);
	 }
    }
	//
	//if at least one instance of ssdt was found, limit is reached 
    //
	if(ACPI_COMPARE_NAME (Signature, ACPI_SIG_SSDT) && Instance > 0){
	  return (AE_LIMIT);
	}
   //
   // return not found if no item is found;
   //
   return(AE_NOT_FOUND);
}
