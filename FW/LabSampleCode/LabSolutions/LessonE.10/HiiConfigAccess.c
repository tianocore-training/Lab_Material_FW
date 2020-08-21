/** @file
  TODO: Brief Description of UEFI Driver MyWizardDriver
  
  TODO: Detailed Description of UEFI Driver MyWizardDriver

  TODO: Copyright for UEFI Driver MyWizardDriver
  
  TODO: License for UEFI Driver MyWizardDriver

**/

#include "MyWizardDriver.h"

extern EFI_GUID   mMyWizardDriverFormSetGuid;
extern CHAR16     mIfrVariableName[];


///
/// HII Config Access Protocol instance
///
GLOBAL_REMOVE_IF_UNREFERENCED 
EFI_HII_CONFIG_ACCESS_PROTOCOL gMyWizardDriverHiiConfigAccess = {
  MyWizardDriverHiiConfigAccessExtractConfig,
  MyWizardDriverHiiConfigAccessRouteConfig,
  MyWizardDriverHiiConfigAccessCallback
};

/**
   
  This function allows the caller to request the current
  configuration for one or more named elements. The resulting
  string is in <ConfigAltResp> format. Any and all alternative
  configuration strings shall also be appended to the end of the
  current configuration string. If they are, they must appear
  after the current configuration. They must contain the same
  routing (GUID, NAME, PATH) as the current configuration string.
  They must have an additional description indicating the type of
  alternative configuration the string represents,
  "ALTCFG=<StringToken>". That <StringToken> (when
  converted from Hex UNICODE to binary) is a reference to a
  string in the associated string pack.

  @param This       Points to the EFI_HII_CONFIG_ACCESS_PROTOCOL.

  @param Request    A null-terminated Unicode string in
                    <ConfigRequest> format. Note that this
                    includes the routing information as well as
                    the configurable name / value pairs. It is
                    invalid for this string to be in
                    <MultiConfigRequest> format. 
                    If a NULL is passed in for the Request field, 
                    all of the settings being abstracted by this function 
                    will be returned in the Results field.  In addition, 
                    if a ConfigHdr is passed in with no request elements, 
                    all of the settings being abstracted for that particular 
                    ConfigHdr reference will be returned in the Results Field.

  @param Progress   On return, points to a character in the
                    Request string. Points to the string's null
                    terminator if request was successful. Points
                    to the most recent "&" before the first
                    failing name / value pair (or the beginning
                    of the string if the failure is in the first
                    name / value pair) if the request was not
                    successful.

  @param Results    A null-terminated Unicode string in
                    <MultiConfigAltResp> format which has all values
                    filled in for the names in the Request string.
                    String to be allocated by the called function.

  @retval EFI_SUCCESS             The Results string is filled with the
                                  values corresponding to all requested
                                  names.

  @retval EFI_OUT_OF_RESOURCES    Not enough memory to store the
                                  parts of the results that must be
                                  stored awaiting possible future
                                  protocols.

  @retval EFI_NOT_FOUND           Routing data doesn't match any
                                  known driver. Progress set to the
                                  first character in the routing header.
                                  Note: There is no requirement that the
                                  driver validate the routing data. It
                                  must skip the <ConfigHdr> in order to
                                  process the names.

  @retval EFI_INVALID_PARAMETER   Illegal syntax. Progress set
                                  to most recent "&" before the
                                  error or the beginning of the
                                  string.

  @retval EFI_INVALID_PARAMETER   Unknown name. Progress points
                                  to the & before the name in
                                  question.

**/
EFI_STATUS
EFIAPI
MyWizardDriverHiiConfigAccessExtractConfig (
  IN CONST  EFI_HII_CONFIG_ACCESS_PROTOCOL  *This,
  IN CONST  EFI_STRING                      Request,
  OUT       EFI_STRING                      *Progress,
  OUT       EFI_STRING                      *Results
  )
{
  EFI_STATUS                       Status;
  UINTN                            BufferSize;
  MYWIZARDDRIVER_DEV			   *PrivateData;
  EFI_HII_CONFIG_ROUTING_PROTOCOL  *HiiConfigRouting;
  EFI_STRING                       ConfigRequest;
  EFI_STRING                       ConfigRequestHdr;
  UINTN                            Size;
  BOOLEAN                          AllocatedRequest;
  if (Progress == NULL || Results == NULL) {
    return EFI_INVALID_PARAMETER;
  }
  //
  // Initialize the local variables.
  //
  ConfigRequestHdr  = NULL;
  ConfigRequest     = NULL;
  Size              = 0;
  *Progress         = Request;
  AllocatedRequest  = FALSE;
  PrivateData = MYWIZARDDRIVER_DEV_FROM_THIS (This);
  HiiConfigRouting = PrivateData->HiiConfigRouting;
  //
  // Get Buffer Storage data from EFI variable.
  // Try to get the current setting from variable.
  //
  BufferSize = sizeof (MYWIZARDDRIVER_CONFIGURATION);
  Status = gRT->GetVariable (
            mIfrVariableName,
            &mMyWizardDriverFormSetGuid,
            NULL,
            &BufferSize,
            &PrivateData->Configuration
            );
  if (EFI_ERROR (Status)) {
  return EFI_NOT_FOUND;
}
  if (Request == NULL) {
	    DEBUG ((DEBUG_INFO, "\n:: Inside of Extract Config and Request == Null "));
  } else { 
    ConfigRequest = Request;
  } 
    //
    // Convert buffer data to <ConfigResp> by helper function BlockToConfig()
    //
    Status = HiiConfigRouting->BlockToConfig (
                                  HiiConfigRouting,
                                  ConfigRequest,
                                  (UINT8 *) &PrivateData->Configuration,
                                  BufferSize,
                                  Results,
                                  Progress
                                  );
  //
  // Free the allocated config request string.
  //
  if (AllocatedRequest) {
    FreePool (ConfigRequest);
  }
  //
  // Set Progress string to the original request string.
  //
  if (Request == NULL) {
    *Progress = NULL;
  } else if (StrStr (Request, L"OFFSET") == NULL) {
    *Progress = Request + StrLen (Request);
  }
  return Status;

  //return EFI_NOT_FOUND;
}

/**
   
  This function applies changes in a driver's configuration.
  Input is a Configuration, which has the routing data for this
  driver followed by name / value configuration pairs. The driver
  must apply those pairs to its configurable storage. If the
  driver's configuration is stored in a linear block of data
  and the driver's name / value pairs are in <BlockConfig>
  format, it may use the ConfigToBlock helper function (above) to
  simplify the job.

  @param This           Points to the EFI_HII_CONFIG_ACCESS_PROTOCOL.

  @param Configuration  A null-terminated Unicode string in
                        <ConfigString> format. 
  
  @param Progress       A pointer to a string filled in with the
                        offset of the most recent '&' before the
                        first failing name / value pair (or the
                        beginn ing of the string if the failure
                        is in the first name / value pair) or
                        the terminating NULL if all was
                        successful.

  @retval EFI_SUCCESS             The results have been distributed or are
                                  awaiting distribution.
  
  @retval EFI_OUT_OF_RESOURCES    Not enough memory to store the
                                  parts of the results that must be
                                  stored awaiting possible future
                                  protocols.
  
  @retval EFI_INVALID_PARAMETERS  Passing in a NULL for the
                                  Results parameter would result
                                  in this type of error.
  
  @retval EFI_NOT_FOUND           Target for the specified routing data
                                  was not found

**/
EFI_STATUS
EFIAPI
MyWizardDriverHiiConfigAccessRouteConfig (
  IN CONST  EFI_HII_CONFIG_ACCESS_PROTOCOL  *This,
  IN CONST  EFI_STRING                      Configuration,
  OUT       EFI_STRING                      *Progress
  )
{
  EFI_STATUS                       Status;
  UINTN                            BufferSize;
  MYWIZARDDRIVER_DEV		       *PrivateData;
  EFI_HII_CONFIG_ROUTING_PROTOCOL  *HiiConfigRouting;

  if (Configuration == NULL || Progress == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  PrivateData = MYWIZARDDRIVER_DEV_FROM_THIS (This);
  HiiConfigRouting = PrivateData->HiiConfigRouting;
  *Progress = Configuration;

  //
  // Get Buffer Storage data from EFI variable
  //
  BufferSize = sizeof (MYWIZARDDRIVER_CONFIGURATION);
  Status = gRT->GetVariable (
            mIfrVariableName,
            &mMyWizardDriverFormSetGuid,
            NULL,
            &BufferSize,
            &PrivateData->Configuration
            );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  
  //
  // Convert <ConfigResp> to buffer data by helper function ConfigToBlock()
  //
  BufferSize = sizeof (MYWIZARDDRIVER_CONFIGURATION);
  Status = HiiConfigRouting->ConfigToBlock (
                               HiiConfigRouting,
                               Configuration,
                               (UINT8 *) &PrivateData->Configuration,
                               &BufferSize,
                               Progress
                               );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  //
  // Store Buffer Storage back to EFI variable
  //
  Status = gRT->SetVariable(
                  mIfrVariableName,
                  &mMyWizardDriverFormSetGuid,
                  EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
                  sizeof (MYWIZARDDRIVER_CONFIGURATION),
                  &PrivateData->Configuration
                  );
  	    DEBUG ((DEBUG_INFO, "\n:: ROUTE CONFIG Saving the configuration to NVRAM\n"));

  return Status;


  //return EFI_NOT_FOUND;
}  

/**
   
  This function is called to provide results data to the driver.
  This data consists of a unique key that is used to identify
  which data is either being passed back or being asked for.

  @param  This                   Points to the EFI_HII_CONFIG_ACCESS_PROTOCOL.
  @param  Action                 Specifies the type of action taken by the browser.
  @param  QuestionId             A unique value which is sent to the original
                                 exporting driver so that it can identify the type
                                 of data to expect. The format of the data tends to 
                                 vary based on the opcode that generated the callback.
  @param  Type                   The type of value for the question.
  @param  Value                  A pointer to the data being sent to the original
                                 exporting driver.
  @param  ActionRequest          On return, points to the action requested by the
                                 callback function.

  @retval EFI_SUCCESS            The callback successfully handled the action.
  @retval EFI_OUT_OF_RESOURCES   Not enough storage is available to hold the
                                 variable and its data.
  @retval EFI_DEVICE_ERROR       The variable could not be saved.
  @retval EFI_UNSUPPORTED        The specified Action is not supported by the
                                 callback.
**/
EFI_STATUS
EFIAPI
MyWizardDriverHiiConfigAccessCallback (
  IN     CONST EFI_HII_CONFIG_ACCESS_PROTOCOL   *This,
  IN     EFI_BROWSER_ACTION                     Action,
  IN     EFI_QUESTION_ID                        QuestionId,
  IN     UINT8                                  Type,
  IN OUT EFI_IFR_TYPE_VALUE                     *Value,
  OUT    EFI_BROWSER_ACTION_REQUEST             *ActionRequest
  )
{
  
  MYWIZARDDRIVER_DEV      *PrivateData;
  EFI_STATUS                      Status;
  EFI_FORM_ID                     FormId;

//    DEBUG ((DEBUG_INFO, "\n:: START Call back ,Question ID=0x%08x Type=0x%04x Action=0x%04x", QuestionId, Type, Action));



  if (((Value == NULL) && (Action != EFI_BROWSER_ACTION_FORM_OPEN) && (Action != EFI_BROWSER_ACTION_FORM_CLOSE))||
    (ActionRequest == NULL)) {
    return EFI_INVALID_PARAMETER;
  }


  FormId = 0;
  Status = EFI_SUCCESS;
  PrivateData = MYWIZARDDRIVER_DEV_FROM_THIS (This);

  switch (Action) { // Start switch and passed param Action
  case EFI_BROWSER_ACTION_FORM_OPEN:  // 3
    {
	}
    break;
	
  case EFI_BROWSER_ACTION_FORM_CLOSE: // 4
    {
	}
	break;

  case EFI_BROWSER_ACTION_RETRIEVE: // 2
    {
	}
	break;

  case EFI_BROWSER_ACTION_DEFAULT_STANDARD: // 0x1000
    {
	}
	break;

  case EFI_BROWSER_ACTION_DEFAULT_MANUFACTURING: // 0x1001
    {
	}
	break;

  case EFI_BROWSER_ACTION_CHANGING:  // 0
    {
		 switch (QuestionId) {
			 case 0x1111:
				     DEBUG ((DEBUG_INFO, "\n:: START Call back- Changing ,Question ID=0x%08x Type=0x%04x Action=0x%04x", QuestionId, Type, Action));
				 break;
			 case 0x1001:
				     DEBUG ((DEBUG_INFO, "\n:: START Call back- Changing ,Question ID=0x%08x Type=0x%04x Action=0x%04x", QuestionId, Type, Action));
				 break;
			 default:
				 Status = EFI_UNSUPPORTED;
				 break;
		 }
	}
    break;

  case EFI_BROWSER_ACTION_CHANGED:  // 1
    {
				 switch (QuestionId) {
			 case 0x1111:
				     DEBUG ((DEBUG_INFO, "\n:: START Call back- Changed ,Question ID=0x%08x Type=0x%04x Action=0x%04x", QuestionId, Type, Action));
				 break;
			 case 0x1001:
				     DEBUG ((DEBUG_INFO, "\n:: START Call back- Changed ,Question ID=0x%08x Type=0x%04x Action=0x%04x", QuestionId, Type, Action));
				 break;
			 default:
				 Status = EFI_UNSUPPORTED;
				 break;
		 }
	}
    break;

  default:
    Status = EFI_UNSUPPORTED;
    break;
  }  // end switch case on Action

  return Status;
	
//  return EFI_UNSUPPORTED;
}
