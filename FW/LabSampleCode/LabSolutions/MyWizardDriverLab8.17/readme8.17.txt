Start with Solution of Lab 8.16

A)
1) Uncomment the DEBUG at the beginning of the CallBack function in HiiConfigAccess.c

2) Update HiiConfigAccess.vfr file
  add refresh numeric field on form 2

3) Update MyWizardDriver.uni file
   strings for refresh 

B)
1) Update the file: MyWizardDriverNVDataStruc.h and add the DynamicRefresh field at the end.

2) Update HiiConfigAccess.c file
	add case for action Changing and Changed for questionid 0x5678

3) Update HiiConfigAccess.vfr file for new DynamicRefresh field

