/** @file
  TODO: Brief Description of UEFI Driver MyWizardDriver
  
  TODO: Detailed Description of UEFI Driver MyWizardDriver

  TODO: Copyright for UEFI Driver MyWizardDriver
  
  TODO: License for UEFI Driver MyWizardDriver

**/

#include "MyWizardDriver.h"

EFI_GUID   mMyWizardDriverVarGuid = MYWIZARDDRIVER_VAR_GUID;

CHAR16     mVariableName[] = L"MWD_NVData";
MYWIZARDDRIVER_CONFIGURATION   mMyWizDrv_Conf_buffer;
MYWIZARDDRIVER_CONFIGURATION   *mMyWizDrv_Conf = &mMyWizDrv_Conf_buffer;  //use the pointer 

//HII support
EFI_GUID   mMyWizardDriverFormSetGuid = MYWIZARDDRIVER_FORMSET_GUID;

CHAR16     mIfrVariableName[] = L"MWD_IfrNVData";
EFI_HANDLE                      mDriverHandle[2] = {NULL, NULL};
MYWIZARDDRIVER_DEV			    *PrivateData = NULL;


// HII support for Device Path
HII_VENDOR_DEVICE_PATH  mHiiVendorDevicePath = {
  {
    {
      HARDWARE_DEVICE_PATH,
      HW_VENDOR_DP,
      {
        (UINT8) (sizeof (VENDOR_DEVICE_PATH)),
        (UINT8) ((sizeof (VENDOR_DEVICE_PATH)) >> 8)
      }
    },
    MYWIZARDDRIVER_FORMSET_GUID
  },
  {
    END_DEVICE_PATH_TYPE,
    END_ENTIRE_DEVICE_PATH_SUBTYPE,
    {
      (UINT8) (END_DEVICE_PATH_LENGTH),
      (UINT8) ((END_DEVICE_PATH_LENGTH) >> 8)
    }
  }
};

#define  DUMMY_SIZE 100*16		// Dummy buffer
CHAR16	*DummyBufferfromStart = NULL;

///
/// Driver Support EFI Version Protocol instance
///
GLOBAL_REMOVE_IF_UNREFERENCED 
EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL gMyWizardDriverDriverSupportedEfiVersion = {
  sizeof (EFI_DRIVER_SUPPORTED_EFI_VERSION_PROTOCOL),
  0x0002003c
};

///
/// Driver Binding Protocol instance
///
EFI_DRIVER_BINDING_PROTOCOL gMyWizardDriverDriverBinding = {
  MyWizardDriverDriverBindingSupported,
  MyWizardDriverDriverBindingStart,
  MyWizardDriverDriverBindingStop,
  MY_WIZARD_DRIVER_VERSION,
  NULL,
  NULL
};

/**
  Unloads an image.

  @param  ImageHandle           Handle that identifies the image to be unloaded.

  @retval EFI_SUCCESS           The image has been unloaded.
  @retval EFI_INVALID_PARAMETER ImageHandle is not a valid image handle.

**/
EFI_STATUS 
EFIAPI
MyWizardDriverUnload (
  IN EFI_HANDLE  ImageHandle
  )
{
  EFI_STATUS  Status;
  EFI_HANDLE  *HandleBuffer;
  UINTN       HandleCount;
  UINTN       Index;

  Status = EFI_SUCCESS;
  //
  // Retrieve array of all handles in the handle database
  //
  Status = gBS->LocateHandleBuffer (
                  AllHandles,
                  NULL,
                  NULL,
                  &HandleCount,
                  &HandleBuffer
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  //
  // Disconnect the current driver from handles in the handle database 
  //
  for (Index = 0; Index < HandleCount; Index++) {
    Status = gBS->DisconnectController (HandleBuffer[Index], gImageHandle, NULL);
  }

  //
  // Free the array of handles
  //
  FreePool (HandleBuffer);

  //
  // Uninstall protocols installed in the driver entry point
  // 
  Status = gBS->UninstallMultipleProtocolInterfaces (
                  ImageHandle,
                  &gEfiDriverBindingProtocolGuid,  &gMyWizardDriverDriverBinding,
                  &gEfiComponentNameProtocolGuid,  &gMyWizardDriverComponentName,
                  &gEfiComponentName2ProtocolGuid, &gMyWizardDriverComponentName2,
                  NULL
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  //
  // Uninstall Driver Supported EFI Version Protocol onto ImageHandle
  //
  Status = gBS->UninstallMultipleProtocolInterfaces (
                  ImageHandle,
                  &gEfiDriverSupportedEfiVersionProtocolGuid, &gMyWizardDriverDriverSupportedEfiVersion,
                  NULL
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  //
  // Do any additional cleanup that is required for this driver
  //
    if (DummyBufferfromStart != NULL) {
	FreePool(DummyBufferfromStart);
	DEBUG ((EFI_D_INFO,"[MyWizardDriver] Unload, clear buffer\r\n"));
	}
  DEBUG ((EFI_D_INFO,"[MyWizardDriver] Unload success\r\n"));


  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
CreateNVVariable()
{
	EFI_STATUS            	Status;
	UINTN                  BufferSize;

	BufferSize = sizeof (MYWIZARDDRIVER_CONFIGURATION);
	Status = gRT->GetVariable(
		mVariableName,
		&mMyWizardDriverVarGuid,
		NULL,
		&BufferSize,
		mMyWizDrv_Conf
		);
	if (EFI_ERROR(Status)) {  // Not definded yet so add it to the NV Variables.
		if (Status == EFI_NOT_FOUND) {
			Status = gRT->SetVariable(
				mVariableName,
				&mMyWizardDriverVarGuid,
				EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
				sizeof (MYWIZARDDRIVER_CONFIGURATION),
				mMyWizDrv_Conf   //  buffer is 000000  now for first time set
				);
			DEBUG((EFI_D_INFO, "[MyWizardDriver] Variable %s created in NVRam Var\r\n", mVariableName));
			return EFI_SUCCESS;
		}
	}
	// already defined once so this time through unsupported
	return EFI_UNSUPPORTED;
}
/**
  This is the declaration of an EFI image entry point. This entry point is
  the same for UEFI Applications, UEFI OS Loaders, and UEFI Drivers including
  both device drivers and bus drivers.

  @param  ImageHandle           The firmware allocated handle for the UEFI image.
  @param  SystemTable           A pointer to the EFI System Table.

  @retval EFI_SUCCESS           The operation completed successfully.
  @retval Others                An unexpected error occurred.
**/
EFI_STATUS
EFIAPI
MyWizardDriverDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  // HII Locals
  EFI_HII_PACKAGE_LIST_HEADER     *PackageListHeader;
  EFI_HII_DATABASE_PROTOCOL       *HiiDatabase;
  EFI_HII_HANDLE                  HiiHandle[2];
  EFI_HII_STRING_PROTOCOL         *HiiString;
  EFI_FORM_BROWSER2_PROTOCOL      *FormBrowser2;
  EFI_HII_CONFIG_ROUTING_PROTOCOL *HiiConfigRouting;
  EFI_STRING                       ConfigRequestHdr;
  UINTN                            BufferSize;
  MYWIZARDDRIVER_CONFIGURATION     *Configuration;
  BOOLEAN                          ActionFlag;

  Status = EFI_SUCCESS;

  //
  // Install UEFI Driver Model protocol(s).
  //
  Status = EfiLibInstallDriverBindingComponentName2 (
             ImageHandle,
             SystemTable,
             &gMyWizardDriverDriverBinding,
             ImageHandle,
             &gMyWizardDriverComponentName,
             &gMyWizardDriverComponentName2
             );
  ASSERT_EFI_ERROR (Status);

  //
  //Now do HII Stuff
  //

  // Initialize the local variables.
   ConfigRequestHdr = NULL;
  //
  // Initialize driver private data
  //
  PrivateData = AllocateZeroPool (sizeof (MYWIZARDDRIVER_DEV));
  if (PrivateData == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  PrivateData->Signature = MYWIZARDDRIVER_DEV_SIGNATURE;

  PrivateData->ConfigAccess.ExtractConfig = MyWizardDriverHiiConfigAccessExtractConfig;
  PrivateData->ConfigAccess.RouteConfig = MyWizardDriverHiiConfigAccessRouteConfig;
  PrivateData->ConfigAccess.Callback = MyWizardDriverHiiConfigAccessCallback;

  
  //
  // Locate Hii Database protocol
  //
  Status = gBS->LocateProtocol (&gEfiHiiDatabaseProtocolGuid, NULL, (VOID **) &HiiDatabase);
  if (EFI_ERROR (Status)) {
    return Status;
  }
  PrivateData->HiiDatabase = HiiDatabase;

  //
  // Locate HiiString protocol
  //
  Status = gBS->LocateProtocol (&gEfiHiiStringProtocolGuid, NULL, (VOID **) &HiiString);
  if (EFI_ERROR (Status)) {
    return Status;
  }
  PrivateData->HiiString = HiiString;

  //
  // Locate Formbrowser2 protocol
  //
  Status = gBS->LocateProtocol (&gEfiFormBrowser2ProtocolGuid, NULL, (VOID **) &FormBrowser2);
  if (EFI_ERROR (Status)) {
    return Status;
  }
  PrivateData->FormBrowser2 = FormBrowser2;

  //
  // Locate ConfigRouting protocol
  //
  Status = gBS->LocateProtocol (&gEfiHiiConfigRoutingProtocolGuid, NULL, (VOID **) &HiiConfigRouting);
  if (EFI_ERROR (Status)) {
    return Status;
  }
  PrivateData->HiiConfigRouting = HiiConfigRouting;

  
  //
  // Publish sample Fromset and config access 
  //
  Status = gBS->InstallMultipleProtocolInterfaces (
                  &mDriverHandle[0],
                  &gEfiDevicePathProtocolGuid,
                  &mHiiVendorDevicePath,
                  &gEfiHiiConfigAccessProtocolGuid,
                  &PrivateData->ConfigAccess,
                  NULL
                  );
  ASSERT_EFI_ERROR (Status);

  PrivateData->DriverHandle[0] = mDriverHandle[0];
  //
  // Retrieve HII Package List Header on ImageHandle
  //
  Status = gBS->OpenProtocol (
                  ImageHandle,
                  &gEfiHiiPackageListProtocolGuid,
                  (VOID **)&PackageListHeader,
                  ImageHandle,
                  NULL,
                  EFI_OPEN_PROTOCOL_GET_PROTOCOL
                  );
// Done above
// if (!EFI_ERROR (Status)) { 
//    //
//    // Retrieve the pointer to the UEFI HII Database Protocol 
//    //
//    Status = gBS->LocateProtocol (
//                    &gEfiHiiDatabaseProtocolGuid, 
//                    NULL, 
//                    (VOID **)&HiiDatabase
//                    );
    if (!EFI_ERROR (Status)) {
      //
      // Register list of HII packages in the HII Database
      //
      Status = HiiDatabase->NewPackageList (
                              HiiDatabase, 
                              PackageListHeader,
                              mDriverHandle[0], 
                              &HiiHandle[0]
                              );
      ASSERT_EFI_ERROR (Status);
 //   }
  }
  Status = EFI_SUCCESS;

  PrivateData->HiiHandle[0] = HiiHandle[0];
  
  BufferSize = sizeof (MYWIZARDDRIVER_CONFIGURATION);
  //
  // Initialize configuration data
  //
  Configuration = &PrivateData->Configuration;
  ZeroMem (Configuration, sizeof (MYWIZARDDRIVER_CONFIGURATION));
  
  //
  // Try to read NV config EFI variable first
  //
  ConfigRequestHdr = HiiConstructConfigHdr (&mMyWizardDriverFormSetGuid, mIfrVariableName, mDriverHandle[0]);
  ASSERT (ConfigRequestHdr != NULL);


  // IF driver is not part of the Platform then need to get/set defaults for the NVRAM configuration that the driver will use.
  Status = gRT->GetVariable (
            mIfrVariableName,
            &mMyWizardDriverFormSetGuid,
            NULL,
            &BufferSize,
            Configuration
            );
  if (EFI_ERROR (Status)) {  // Not definded yet so add it to the NV Variables.
	    // zero out buffer
 		Status = gRT->SetVariable(
                  mIfrVariableName,
                  &mMyWizardDriverFormSetGuid,
                  EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
                  sizeof (MYWIZARDDRIVER_CONFIGURATION),
                  Configuration   //  buffer is 000000  now
                  );
    //
    // EFI variable for NV config doesn't exist, we should build this variable
    // based on default values stored in IFR
    //
    ActionFlag = HiiSetToDefaults (ConfigRequestHdr, EFI_HII_DEFAULT_CLASS_STANDARD);
    ASSERT (ActionFlag);
  } else {
    //
    // EFI variable does exist and Validate Current Setting
    //
    ActionFlag = HiiValidateSettings (ConfigRequestHdr);
    ASSERT (ActionFlag);
  }  // Match if (EFI_ERROR (Status)) 
  FreePool (ConfigRequestHdr);


  // end HII
  //
  // Install Driver Supported EFI Version Protocol onto ImageHandle
  //
  Status = gBS->InstallMultipleProtocolInterfaces (
                  &ImageHandle,
                  &gEfiDriverSupportedEfiVersionProtocolGuid, &gMyWizardDriverDriverSupportedEfiVersion,
                  NULL
                  );
  ASSERT_EFI_ERROR (Status);

  return Status;
}


/**
  Tests to see if this driver supports a given controller. If a child device is provided, 
  it further tests to see if this driver supports creating a handle for the specified child device.

  This function checks to see if the driver specified by This supports the device specified by 
  ControllerHandle. Drivers will typically use the device path attached to 
  ControllerHandle and/or the services from the bus I/O abstraction attached to 
  ControllerHandle to determine if the driver supports ControllerHandle. This function 
  may be called many times during platform initialization. In order to reduce boot times, the tests 
  performed by this function must be very small, and take as little time as possible to execute. This 
  function must not change the state of any hardware devices, and this function must be aware that the 
  device specified by ControllerHandle may already be managed by the same driver or a 
  different driver. This function must match its calls to AllocatePages() with FreePages(), 
  AllocatePool() with FreePool(), and OpenProtocol() with CloseProtocol().  
  Because ControllerHandle may have been previously started by the same driver, if a protocol is 
  already in the opened state, then it must not be closed with CloseProtocol(). This is required 
  to guarantee the state of ControllerHandle is not modified by this function.

  @param[in]  This                 A pointer to the EFI_DRIVER_BINDING_PROTOCOL instance.
  @param[in]  ControllerHandle     The handle of the controller to test. This handle 
                                   must support a protocol interface that supplies 
                                   an I/O abstraction to the driver.
  @param[in]  RemainingDevicePath  A pointer to the remaining portion of a device path.  This 
                                   parameter is ignored by device drivers, and is optional for bus 
                                   drivers. For bus drivers, if this parameter is not NULL, then 
                                   the bus driver must determine if the bus controller specified 
                                   by ControllerHandle and the child controller specified 
                                   by RemainingDevicePath are both supported by this 
                                   bus driver.

  @retval EFI_SUCCESS              The device specified by ControllerHandle and
                                   RemainingDevicePath is supported by the driver specified by This.
  @retval EFI_ALREADY_STARTED      The device specified by ControllerHandle and
                                   RemainingDevicePath is already being managed by the driver
                                   specified by This.
  @retval EFI_ACCESS_DENIED        The device specified by ControllerHandle and
                                   RemainingDevicePath is already being managed by a different
                                   driver or an application that requires exclusive access.
                                   Currently not implemented.
  @retval EFI_UNSUPPORTED          The device specified by ControllerHandle and
                                   RemainingDevicePath is not supported by the driver specified by This.
**/
EFI_STATUS
EFIAPI
MyWizardDriverDriverBindingSupported (
  IN EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN EFI_HANDLE                   ControllerHandle,
  IN EFI_DEVICE_PATH_PROTOCOL     *RemainingDevicePath OPTIONAL
  )
{
	EFI_STATUS                Status;
  EFI_SERIAL_IO_PROTOCOL    *SerialIo;
  Status = gBS->OpenProtocol (
                  ControllerHandle,
                  &gEfiSerialIoProtocolGuid,
                  (VOID **) &SerialIo,
                  This->DriverBindingHandle,
                  ControllerHandle,
                  EFI_OPEN_PROTOCOL_BY_DRIVER | EFI_OPEN_PROTOCOL_EXCLUSIVE
                  );

  if (EFI_ERROR (Status)) {
		DEBUG((EFI_D_INFO, "[MyWizardDriver] Not Supported \r\n"));
		return Status; // Bail out if OpenProtocol returns an error
	

  }

    // We're here because OpenProtocol was a success, so clean up
     gBS->CloseProtocol (
        ControllerHandle,
        &gEfiSerialIoProtocolGuid,
        This->DriverBindingHandle,
        ControllerHandle
        );
  DEBUG ((EFI_D_INFO,"[MyWizardDriver] Supported SUCCESS\r\n") );	
     return EFI_SUCCESS; 
  //return EFI_UNSUPPORTED;
}

/**
  Starts a device controller or a bus controller.

  The Start() function is designed to be invoked from the EFI boot service ConnectController().
  As a result, much of the error checking on the parameters to Start() has been moved into this 
  common boot service. It is legal to call Start() from other locations, 
  but the following calling restrictions must be followed, or the system behavior will not be deterministic.
  1. ControllerHandle must be a valid EFI_HANDLE.
  2. If RemainingDevicePath is not NULL, then it must be a pointer to a naturally aligned
     EFI_DEVICE_PATH_PROTOCOL.
  3. Prior to calling Start(), the Supported() function for the driver specified by This must
     have been called with the same calling parameters, and Supported() must have returned EFI_SUCCESS.  

  @param[in]  This                 A pointer to the EFI_DRIVER_BINDING_PROTOCOL instance.
  @param[in]  ControllerHandle     The handle of the controller to start. This handle 
                                   must support a protocol interface that supplies 
                                   an I/O abstraction to the driver.
  @param[in]  RemainingDevicePath  A pointer to the remaining portion of a device path.  This 
                                   parameter is ignored by device drivers, and is optional for bus 
                                   drivers. For a bus driver, if this parameter is NULL, then handles 
                                   for all the children of Controller are created by this driver.  
                                   If this parameter is not NULL and the first Device Path Node is 
                                   not the End of Device Path Node, then only the handle for the 
                                   child device specified by the first Device Path Node of 
                                   RemainingDevicePath is created by this driver.
                                   If the first Device Path Node of RemainingDevicePath is 
                                   the End of Device Path Node, no child handle is created by this
                                   driver.

  @retval EFI_SUCCESS              The device was started.
  @retval EFI_DEVICE_ERROR         The device could not be started due to a device error.Currently not implemented.
  @retval EFI_OUT_OF_RESOURCES     The request could not be completed due to a lack of resources.
  @retval Others                   The driver failded to start the device.

**/
EFI_STATUS
EFIAPI
MyWizardDriverDriverBindingStart (
  IN EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN EFI_HANDLE                   ControllerHandle,
  IN EFI_DEVICE_PATH_PROTOCOL     *RemainingDevicePath OPTIONAL
  )
{
	EFI_STATUS                Status;
	
	if (DummyBufferfromStart == NULL) {     // was buffer already allocated?
		DummyBufferfromStart = (CHAR16*)AllocateZeroPool (DUMMY_SIZE * sizeof(CHAR16));
	}

	if (DummyBufferfromStart == NULL) {
		return EFI_OUT_OF_RESOURCES;    // Exit if the buffer isn’t there
	}

	SetMem16 (DummyBufferfromStart, (DUMMY_SIZE * sizeof(CHAR16)), 0x0042);  // Fill buffer
	DEBUG((EFI_D_INFO, "[MyWizardDriver] Buffer pointer 0x%p  \r\n",  DummyBufferfromStart));
	Status = CreateNVVariable();
	if (EFI_ERROR(Status)) {
		DEBUG((EFI_D_ERROR, "[MyWizardDriver] NV Variable already created \r\n"));
	}
	else {
		DEBUG((EFI_D_ERROR, "[MyWizardDriver] Created NV Variable in the Start \r\n"));
	}

	return EFI_SUCCESS;

  //return EFI_UNSUPPORTED;
}

/**
  Stops a device controller or a bus controller.
  
  The Stop() function is designed to be invoked from the EFI boot service DisconnectController(). 
  As a result, much of the error checking on the parameters to Stop() has been moved 
  into this common boot service. It is legal to call Stop() from other locations, 
  but the following calling restrictions must be followed, or the system behavior will not be deterministic.
  1. ControllerHandle must be a valid EFI_HANDLE that was used on a previous call to this
     same driver's Start() function.
  2. The first NumberOfChildren handles of ChildHandleBuffer must all be a valid
     EFI_HANDLE. In addition, all of these handles must have been created in this driver's
     Start() function, and the Start() function must have called OpenProtocol() on
     ControllerHandle with an Attribute of EFI_OPEN_PROTOCOL_BY_CHILD_CONTROLLER.
  
  @param[in]  This              A pointer to the EFI_DRIVER_BINDING_PROTOCOL instance.
  @param[in]  ControllerHandle  A handle to the device being stopped. The handle must 
                                support a bus specific I/O protocol for the driver 
                                to use to stop the device.
  @param[in]  NumberOfChildren  The number of child device handles in ChildHandleBuffer.
  @param[in]  ChildHandleBuffer An array of child handles to be freed. May be NULL 
                                if NumberOfChildren is 0.

  @retval EFI_SUCCESS           The device was stopped.
  @retval EFI_DEVICE_ERROR      The device could not be stopped due to a device error.

**/
EFI_STATUS
EFIAPI
MyWizardDriverDriverBindingStop (
  IN EFI_DRIVER_BINDING_PROTOCOL  *This,
  IN EFI_HANDLE                   ControllerHandle,
  IN UINTN                        NumberOfChildren,
  IN EFI_HANDLE                   *ChildHandleBuffer OPTIONAL
  )
{
	if (DummyBufferfromStart != NULL) {
	FreePool(DummyBufferfromStart);
	DEBUG ((EFI_D_INFO, "[MyWizardDriver] Stop, clear buffer\r\n"));
  }

  DEBUG ((EFI_D_INFO, "[MyWizardDriver] Stop, EFI_SUCCESS\r\n"));

  return EFI_SUCCESS;

  //return EFI_UNSUPPORTED;
}
