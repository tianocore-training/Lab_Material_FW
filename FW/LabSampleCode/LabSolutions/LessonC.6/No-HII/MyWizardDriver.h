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
#include <Protocol/DriverSupportedEfiVersion.h>
#include <Protocol/ComponentName2.h>
#include <Protocol/ComponentName.h>

//
// Consumed Protocols
//
#include <Protocol/PciIo.h>

//
// Produced Protocols
//
#include <Protocol/SerialIo.h>
#include "MyWizardDriverNVDataStruc.h"	
//
// Guids
//

//
// Driver Version
//
#define MY_WIZARD_DRIVER_VERSION  0x00000000

//
// Protocol instances
//
extern EFI_DRIVER_BINDING_PROTOCOL  gMyWizardDriverDriverBinding;
extern EFI_COMPONENT_NAME2_PROTOCOL  gMyWizardDriverComponentName2;
extern EFI_COMPONENT_NAME_PROTOCOL  gMyWizardDriverComponentName;

//
// Include files with function prototypes
//
#include "DriverBinding.h"
#include "ComponentName.h"
#include "SerialIo.h"

#endif
