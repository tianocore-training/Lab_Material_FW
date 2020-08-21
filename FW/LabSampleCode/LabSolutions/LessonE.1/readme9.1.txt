Start with Solution of Lab 8.6
update to add Forms, Strings and NVram variable 

1) Update the MyWizardDriverNVDataStruc .h file
2) Update the MyWizardDriver.vfr
   Use the GUID from the .h
   Meaningful names for the strings
   Add enable/disable
   Pop up box for Base Address
   String for name of saved configruation
   Input for a Hex value

3) Update the MyWizardDriver.uni file
   Add strings to support forms in the .vfr file

4) Update MyWizardDriver.h file
   Add a Data structure for HII routing and accessing

5) Update MyWizardDriver.c file
Install Config access protocol
Register list of HII packages in the HII Database with the HII device path




Data is Not saved at exit of form