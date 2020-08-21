Start with Solution of Lab 8.7
update the produced Config access protocols to do something and same the data on exit of the form
1) Update MyWizardDriver.c file
Locate and store consumed Protocols:
EFI_HII_DATABASE_PROTOCOL
EFI_HII_STRING_PROTOCOL
EFI_HII_CONFIG_ROUTING_PROTOCOL
EFI_FORM_BROWSER2_PROTOCOL

2) Update the HiiConfigAccess.c
Extract Config
Route Config
Call Back




Data is saved at exit of form but not initialized