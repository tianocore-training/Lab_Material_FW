<!--- @file
  Readme.md for UEFI / EDK II Training  Lab Material FW

  Copyright (c) 2020-2021, Intel Corporation. All rights reserved.<BR>

  Redistribution and use in source (original document form) and 'compiled'
  forms (converted to PDF, epub, HTML and other formats) with or without
  modification, are permitted provided that the following conditions are met:

  1) Redistributions of source code (original document form) must retain the
     above copyright notice, this list of conditions and the following
     disclaimer as the first lines of this file unmodified.

  2) Redistributions in compiled form (transformed to other DTDs, converted to
     PDF, epub, HTML and other formats) must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.

  THIS DOCUMENTATION IS PROVIDED BY TIANOCORE PROJECT "AS IS" AND ANY EXPRESS OR
  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
  EVENT SHALL TIANOCORE PROJECT  BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS DOCUMENTATION, EVEN IF
  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

-->

# Lab_Material_FW
Lab Material for UEFI / EDK II Training

To see the PDFs of the presentations goto 
https://github.com/tianocore-training/Tianocore_Training_Contents/wiki

This lab Material uses the edk2 and edk2-libc

Before downloading this Lab Material, First download edk2 and edk2-libc to the directory `/edk2-ws`:
```
Mkdir edk2-ws
cd edk2-ws
git clone -b Edk2Lab_21Q1 https://github.com/tianocore-training/edk2.git
git clone -b LabBranch https://github.com/tianocore-training/edk2-libc.git

cd ..
```

Download this Lab Material

```
git clone https://github.com/tianocore-training/Lab_Material_FW.git
```

After downloading, Copy Lab_Material_FW/FW/edk2-ws to edk2-ws and overwrite any files.


### Lab Material all started in the FW directory

- **FW**
  - Documentation
  - DriverWizard
  - edk2-ws 
       - setenv.sh and setenv.bat
  - LabSampleCode - solutions for the labs
  
####  From Presentations_FW
- **FW**
  - Presentations  PDFs  https://github.com/tianocore-training/Presentation_FW 
