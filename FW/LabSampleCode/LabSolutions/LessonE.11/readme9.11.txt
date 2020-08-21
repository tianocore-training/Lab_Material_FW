Start with Solution of Lab 9.10


1) Comment out MyWizardDriver.inf to the FdF file to be included each time the Nt32Pkg  Run.
Update Nt32Pkg.fdf

2) Update MyWizardDriver.uni file
	add another language
	add a string with both languages

3) Update MyWizardDriver.c file
    use HiiGetString in the driver entry point to get new string and print back to console.
