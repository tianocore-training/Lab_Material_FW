Start with Solution of Lab 9.9

1) Update MyWizardDriverNVDataStruc.h file
	add     EFI_HII_TIME  Time;
		EFI_HII_DATE  Date;
2) Update MyWizardDriver.uni file - add strings for the 2nd form

3) Update MyWizardDriver.vfr file
	Add goto 2nd form
	add formid = 2 and date / time fields
	add grayoutif TRUE for Windows date and time fields

