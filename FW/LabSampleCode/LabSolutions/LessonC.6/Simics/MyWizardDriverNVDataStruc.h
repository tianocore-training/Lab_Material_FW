
#ifndef _MYWIZARDDRIVERNVDATASTRUC_H_
#define _MYWIZARDDRIVERNVDATASTRUC_H_
#include <Guid/HiiPlatformSetupFormset.h>
#include <Guid/HiiFormMapMethodGuid.h>

#define MYWIZARDDRIVER_VAR_GUID   { 0x363729f9, 0x35fc, 0x40a6,{ 0xaf, 0xc8, 0xe8, 0xf5, 0x49, 0x11, 0xf1, 0xd6} } 


#define CONFIGURATION_VARSTORE_ID    0x1234
#define MYWIZARDDRIVER_STRING_SIZE   0x1A

#pragma pack(1)
typedef struct {

    UINT16  MyWizardDriverStringData[MYWIZARDDRIVER_STRING_SIZE];
    UINT16  MyWizardDriverHexData;
    UINT8   MyWizardDriverBaseAddress;
    UINT8   MyWizardDriverChooseToEnable;
	CHAR16  *MyWizardDriverNvRamAddress;
} MYWIZARDDRIVER_CONFIGURATION;

#pragma pack()

#endif
