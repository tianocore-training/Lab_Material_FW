EDK II UEFI driver - Blank driver - does nothing.

Copyright (c) 2006 - 2011, Intel Corporation. <BR>
All rights reserved. This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.


This UEFI Driver does nothing but provides a UEFI driver template to support UEFI Spec 2.3. 
It includes the Driver Binding protocol, Component Name protocols and an Unload function.
Includes HII Consumed protocols and produced protocols with example of Data stored in NV ram.

To use:
1) rename all *.txt to their appropriate extension file names (e.g. .c, .h, .inf .vfr)
2) add the BlankDrv.inf workspace path to the platform coponents section in the .dsc file for the build

result:
  BlankDrv.efi will be build in the build output directory.

Tested with Windows XP Nt32Pkg 
