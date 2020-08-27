# Check Number Plus One Unit Test

## About

This is an example of a unit test for a simple function to test.  This can be used as a template for other test cases for both target and host unit testing of stand-alone functions.

## How to build 

### **Prerequistes**
* Windows 10:
  * CI Visual Studio VS2017 or VS2019
  * Non CI CI Visual Studio VS2015, VS2017 or VS2019
  * Windows SDK (for rc)
  * Windows WDK (for Capsules)
* Ubuntu 18.04 or Fedora
  * GCC5 or greater
* Python 3.7.x or greater on Path
* Git on Path

The following Commands done from a Command prompt Window

### **Clone and download the Repo**
Check out the example code from the following Repo

```shell
$ git clone -b LJ_UnitTest2 https://github.com/Laurie0131/edk2.git 
$ cd edk2 
$ git submodule update --init
```

## Build and Run for CI Locally
1. Install the pip requirements
```shell
$ pip install --upgrade -r pip-requirements.txt
```
2. Get the code dependencies (done only when submodules change)
```shell
$ stuart_setup -c .pytool\CISettings.py TOOL_CHAIN_TAG=<Your TAG>
```
3. Update other dependencies (done on new command prompt)
```shell
$ stuart_update -c .pytool\CISettings.py TOOL_CHAIN_TAG=<Your TAG>
```
4. Build the BaseTools (done only when BaseTools change and first time)
```shell
$ python BaseTools\Edk2ToolsBuild.py -t TOOL_CHAIN_TAG
```
5. Compile and Run the Host based Unit Test modules
```shell
$ stuart_ci_build -c .pytool\CISettings.py TOOL_CHAIN_TAG=<Your TAG> -p UnitTestFrameworkPkg -t NOOPT -a X64
```

### **Output from CI Build and Run**

The return from the CI Build will be `ErrorLevel==0` on successful Unit test passing

```shell
SECTION - Init SDE
SECTION - Loading Plugins
SECTION - Start Invocable Tool
SECTION - Getting Environment
SECTION - Loading plugins
SECTION - Building UnitTestFrameworkPkg Pac
PROGRESS - --Running UnitTestFrameworkPkg: 
PROGRESS - Start time: 2020-07-08 14:20:08.
PROGRESS - Setting up the Environment
PROGRESS - Running Pre Build
PROGRESS - Running Build NOOPT
PROGRESS - Running Post Build
SECTION - Run Host based Unit Tests
SUBSECTION - Testing for architecture: X64
PROGRESS - End time: 2020-07-08 14:21:40.24
PROGRESS - --->Test Success: Host Unit Test
PROGRESS - Overall Build Status: Success
SECTION - Summary
PROGRESS - Success
### **Build **
Build the `BaseTools`
```

## Build and Run for Windows Non-CI 

Build the BaseTools 

```shell
$ edksetup.bat Rebuild
```
Build the `UnitTestFrameworkPkg` Unit Test Host, Below builds using Visual Stuido 2015, 
```shell
$ build -b NOOPT -t VS2015x86 -a X64 -p UnitTestFrameworkPkg\Test\UnitTestFrameworkPkgHostTest.dsc 
```
For other Visual Studio versions:
* 2017 use `-t VS2017` 
* 2019 use `-t VS2019`

### **Run the Host Unit test**

#### Run test results with Manual test results 

Run the following Windows Batch file [Link](https://github.com/Laurie0131/edk2/blob/LJ_UnitTest2/RunHostTestCheckNumber.bat)

```shell
$ RunHostTestCheckNumber.bat
```
Result from running Unit test
```
Sample Check Number Plus One Unit Test v0.1
---------------------------------------------------------
------------     RUNNING ALL TEST SUITES   --------------
---------------------------------------------------------
---------------------------------------------------------
RUNNING TEST SUITE: Simple Number Tests
---------------------------------------------------------
[==========] Running 3 test(s).
[ RUN      ] Test IsNumberPlus1 -  produce 1+1=2
[       OK ] Test IsNumberPlus1 -  produce 1+1=2
[ RUN      ] Test IsNumberNotPlus1 - Not produce number +1
[       OK ] Test IsNumberNotPlus1 - Not produce number +1
[ RUN      ] Test IsNumberCorrect w/ results in one test
UnitTest: Test-3 - Test IsNumberCorrect w/ results in one test
Log Output Start
[INFO]        Number is: 100 returned was (0)
[INFO]        Number is:   1 returned was (2)
Log Output End
[       OK ] Test IsNumberCorrect w/ results in one test
[==========] 3 test(s) run.
[  PASSED  ] 3 test(s).
```

#### Run test results with Automatic test results 
Use a Script file to get (Errorlevel==0) for a test pass or (Errorlevel==1) for a test Failure.  The following is an example script file with the following [link](https://github.com/Laurie0131/edk2/blob/LJ_UnitTest2/RunHostTestXML.bat)

```shell
$ RunHostTestXML.bat
```
The Result from running Unit test for CheckNumberPlusOneUnitTestHost with the above script will return `ErrorLevel == 0` and have the following output to the consule.

```
Before call  CheckNumberPlusOneUnitTestHost.exe
Test Passed
exiting RunHostTestCheckNumberApp
```

To test automatically test pass/fail using a script file, check for string "\<failed\>" in XML file from other sample unit test with Host .EXE using a grep or on Windows `FindStr`

The following script snipit will set the error level to 1 on test failure or error level 0 on a test pass from the `SampleUnitTestHost.exe`

Note, the script will need to run or determine the directory where the `SampleUnitTestHost.exe` file gets built.


```shell
$ set CMOCKA_MESSAGE_OUTPUT=xml
$ set CMOCKA_XML_FILE=test.xml
$ if exist test.xml del test.xml
$ call  SampleUnitTestHost.exe >nul
$ findstr "<failure>" test.xml >nul
$ if %ERRORLEVEL% == 0 (
$ echo FAILURE in unit test occurred
$ EXIT /B 1
$ goto :EOF
$ ) 
$ echo Unit Test Passed
$ EXIT /B 0
```

## How to add a function to test and test case

1. Use the example .c file [`NumberPlusOne.c`](https://github.com/Laurie0131/edk2/blob/LJ_UnitTest2/UnitTestFrameworkPkg/Test/UnitTest/Sample/CheckNumberPlusOneUnitTest/NumberPlusOne.c) for where to place function to test


2. Use the example .c file [`CheckNumberPlusOneUnitTest.c`](https://github.com/Laurie0131/edk2/blob/LJ_UnitTest2/UnitTestFrameworkPkg/Test/UnitTest/Sample/CheckNumberPlusOneUnitTest/CheckNumberPlusOneUnitTest.c) to add test cases to test your functions
 * Write a test function that will call the function to test
    * Within the test function use the `UT_ASSERT*()` Unit Test Library calls to determine if each test returns or produces the desired outcome.
    * Within the test function if all values returned and prduced are correct, return the value of `UNIT_TEST_PASSED`  
    * Example:
```c++
UNIT_TEST_STATUS
EFIAPI
MyTestCase1(
	IN UNIT_TEST_CONTEXT  Context
)
{
	UINTN  RetValue;

	RetValue = MyFunction2Test(1);
	UT_ASSERT_EQUAL(RetValue, 2); // Expects RetValue == 2 otherwise the test will fail
	return UNIT_TEST_PASSED;
}
```    
  * Add the `AddTestCase` function call after the call to  `CreateUnitTestSuite`
```
AddTestCase (SuiteHandle, “Test Description", “short.name", MyTestCase1, NULL, NULL, NULL);

Where:
 SuiteHandle        UNIT_TEST_SUITE_HANDLE (same as Create for Suite) 
 “Test Description” User friendly ASCII String for Test Case Description
 “Test.Name”        User friendly ASCII String for Test Case Name (no spaces)
 MyTestCase1        Unit Test Function
 NULL               Optional Prerequisite Function runs before test function
 NULL               Optional Clean-up Function runs after test function
 NULL               UNIT_TEST_CONTEXT - Optional Pointer to Context 
```
3. Use the [`CheckNumberPlusOneUnitTest.h`](https://github.com/Laurie0131/edk2/blob/LJ_UnitTest2/UnitTestFrameworkPkg/Test/UnitTest/Sample/CheckNumberPlusOneUnitTest/CheckNumberPlusOneUnitTest.h) file to add your prototype for your function to test and any other `#include` statements required for your function.

4. Update the Host Unit Test INF file [`CheckNumberPlusOneUnitTest.inf`](https://github.com/Laurie0131/edk2/blob/LJ_UnitTest2/UnitTestFrameworkPkg/Test/UnitTest/Sample/CheckNumberPlusOneUnitTest/CheckNumberPlusOneUnitTest.inf) with any files, GUIDs, PCDs or libraries added 

5. Build and run as above for either CI or Non-CI Build and Run
* Non-CI Build
```shell
$ build -b NOOPT -t VS2015x86 -a X64 -p UnitTestFrameworkPkg\Test\UnitTestFrameworkPkgHostTest.dsc 
```
6. Run the Host Unit Test 
```shell
:: FIRST CD to the BUILD Directory where unit test host .EXE was built.
$ MyHostUnitTest.exe
```









