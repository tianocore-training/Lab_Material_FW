Start with Solution of Lab 9.2

1) Update MyWizardDriver.c file

HiiConstructConfigHdr
HiiSetToDefaults
HiiValidateSettings

2) Update MyWizardDriver.inf file
Packages section
MdeModulePkg
Libraries section
HiiLib

3) Update MyWizardDriver.h file
Include HiiLib.h


4) add MyWizardDriver.inf to the FdF file to be included each time the Nt32Pkg  Run.
Update Nt32Pkg.fdf
