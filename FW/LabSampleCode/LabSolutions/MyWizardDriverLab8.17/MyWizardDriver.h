/** @file
  TODO: Brief Description of UEFI Driver MyWizardDriver
  
  TODO: Detailed Description of UEFI Driver MyWizardDriver

  TODO: Copyright for UEFI Driver MyWizardDriver
  
  TODO: License for UEFI Driver MyWizardDriver

**/

#ifndef __EFI_MY_WIZARD_DRIVER_H__
#define __EFI_MY_WIZARD_DRIVER_H__

#include <Uefi.h>

//
// Libraries
//
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/BaseLib.h>
#include <Library/UefiLib.h>
#include <Library/DevicePathLib.h>
#include <Library/DebugLib.h>
// LAB FAUX
#include <Library/UefiRuntimeServicesTableLib.h>
// LAB FAUX

//
// UEFI Driver Model Protocols
//
#include <Protocol/DriverBinding.h>
#include <Protocol/HiiDatabase.h>
#include <Protocol/HiiPackageList.h>
#include <Protocol/DriverSupportedEfiVersion.h>
#include <Protocol/ComponentName2.h>
#include <Protocol/ComponentName.h>
#include <Protocol/HiiConfigAccess.h>

// Added for HII
#include <Protocol/HiiConfigRouting.h>  
#include <Protocol/FormBrowser2.h>  
#include <Protocol/HiiString.h> 
#include <Library/DevicePathLib.h>
#include <Library/HiiLib.h>
//
// Consumed Protocols
//
#include <Protocol/PciIo.h>
#include <Protocol/SerialIo.h>
//
// Produced Protocols
//
#include <Protocol/SimpleTextOut.h>
#include "MyWizardDriverNVDataStruc.h"	
//
// Guids
//

//
// Driver Version
//
#define MY_WIZARD_DRIVER_VERSION  0x000000055

//
// Protocol instances
//
extern EFI_DRIVER_BINDING_PROTOCOL  gMyWizardDriverDriverBinding;
extern EFI_COMPONENT_NAME2_PROTOCOL  gMyWizardDriverComponentName2;
extern EFI_COMPONENT_NAME_PROTOCOL  gMyWizardDriverComponentName;
extern EFI_HII_CONFIG_ACCESS_PROTOCOL  gMyWizardDriverHiiConfigAccess;

#define MYWIZARDDRIVER_DEV_SIGNATURE SIGNATURE_32 ('m', 'w', 'd', 'r')  

// Need a Data structure for HII routing and accessing
typedef struct {
  UINT32                           Signature;

  EFI_HANDLE                       Handle;
  MYWIZARDDRIVER_CONFIGURATION	   Configuration;  

  EFI_HANDLE                       DriverHandle[2];  
  EFI_HII_HANDLE                   HiiHandle[2];
  //
  // Consumed protocol
  //
  EFI_HII_DATABASE_PROTOCOL        *HiiDatabase;  
  EFI_HII_STRING_PROTOCOL          *HiiString; 
  EFI_HII_CONFIG_ROUTING_PROTOCOL  *HiiConfigRouting;  
  EFI_FORM_BROWSER2_PROTOCOL       *FormBrowser2; 

  //
  // Produced protocol
  //
  EFI_HII_CONFIG_ACCESS_PROTOCOL   ConfigAccess;  

} MYWIZARDDRIVER_DEV;

#define MYWIZARDDRIVER_DEV_FROM_THIS(a)  CR (a, MYWIZARDDRIVER_DEV, ConfigAccess, MYWIZARDDRIVER_DEV_SIGNATURE)

#pragma pack(1)
///
/// HII specific Vendor Device Path definition.
///
typedef struct {
  VENDOR_DEVICE_PATH             VendorDevicePath;
  EFI_DEVICE_PATH_PROTOCOL       End;
} HII_VENDOR_DEVICE_PATH;

#pragma pack()
//
// Include files with function prototypes
//
#include "DriverBinding.h"
#include "ComponentName.h"
#include "HiiConfigAccess.h"
#include "SimpleTextOutput.h"

#endif
