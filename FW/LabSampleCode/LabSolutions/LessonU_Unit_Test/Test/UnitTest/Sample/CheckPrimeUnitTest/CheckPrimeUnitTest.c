/** @file
  This is a sample to demostrate the usage of the Unit Test Library that
  supports the PEI, DXE, SMM, UEFI SHell, and host execution environments.

  Copyright (c) Microsoft Corporation.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "CheckPrimeUnitTest.h"

#define UNIT_TEST_NAME     "Sample Check Number is Prime Unit Test"
#define UNIT_TEST_VERSION  "0.1"
#define A_PRIME_NUMBER  197
#define NOT_PRIME_NUMBER  64


/**
Sample unit test that verifies the expected result of an integer is Prime

@param[in]  Context    [Optional] An optional parameter that enables:
1) test-case reuse with varied parameters and
2) test-case re-entry for Target tests that need a
reboot.  This parameter is a VOID* and it is the
responsibility of the test author to ensure that the
contents are well understood by all test cases that may
consume it.

@retval  UNIT_TEST_PASSED             The Unit test has completed and the test
case was successful.
@retval  UNIT_TEST_ERROR_TEST_FAILED  A test case assertion has failed.
**/
UNIT_TEST_STATUS
EFIAPI
IsNumberPrimeTestTrue(
	IN UNIT_TEST_CONTEXT  Context
)
{
	UT_ASSERT_TRUE(PrimeNumber(A_PRIME_NUMBER));
	return UNIT_TEST_PASSED;
}

/**
Sample unit test that verifies the expected result of an unsigned integer
addition operation.

@param[in]  Context    [Optional] An optional parameter that enables:
1) test-case reuse with varied parameters and
2) test-case re-entry for Target tests that need a
reboot.  This parameter is a VOID* and it is the
responsibility of the test author to ensure that the
contents are well understood by all test cases that may
consume it.

@retval  UNIT_TEST_PASSED             The Unit test has completed and the test
case was successful.
@retval  UNIT_TEST_ERROR_TEST_FAILED  A test case assertion has failed.
**/
UNIT_TEST_STATUS
EFIAPI
IsNumberPrimeTestFalse(
	IN UNIT_TEST_CONTEXT  Context
)
{
	UT_ASSERT_FALSE(PrimeNumber(NOT_PRIME_NUMBER));
	return UNIT_TEST_PASSED;
}




/**
  Initialize the unit test framework, suite, and unit tests for the
  sample unit tests and run the unit tests.

  @retval  EFI_SUCCESS           All test cases were dispatched.
  @retval  EFI_OUT_OF_RESOURCES  There are not enough resources available to
                                 initialize the unit tests.
**/
EFI_STATUS
EFIAPI
UefiTestMain (
  VOID
  )
{
  EFI_STATUS                  Status;
  UNIT_TEST_FRAMEWORK_HANDLE  Framework;
  UNIT_TEST_SUITE_HANDLE      PrimeNumberTests;

  Framework = NULL;

  DEBUG(( DEBUG_INFO, "%a v%a\n", UNIT_TEST_NAME, UNIT_TEST_VERSION ));

  //
  // Start setting up the test framework for running the tests.
  //
  Status = InitUnitTestFramework (&Framework, UNIT_TEST_NAME, gEfiCallerBaseName, UNIT_TEST_VERSION);
  if (EFI_ERROR (Status)) {
    DEBUG((DEBUG_ERROR, "Failed in InitUnitTestFramework. Status = %r\n", Status));
    goto EXIT;
  }

  //
  // Populate the SimpleMathTests Unit Test Suite.
  //
  Status = CreateUnitTestSuite (&PrimeNumberTests, Framework, "Simple Check Prime Number Tests", "Prime.Num", NULL, NULL);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "Failed in CreateUnitTestSuite for PrimeNumberTests\n"));
    Status = EFI_OUT_OF_RESOURCES;
    goto EXIT;
  }

  AddTestCase(PrimeNumberTests, "Test Number is 197 IS Prime", "Test-1", IsNumberPrimeTestTrue, NULL, NULL, NULL);
  AddTestCase(PrimeNumberTests, "Test Number is 64 NOT Prime", "Test-2", IsNumberPrimeTestFalse, NULL, NULL, NULL);

  //
  // Execute the tests.
  //
  Status = RunAllTestSuites (Framework);

EXIT:
  if (Framework) {
    FreeUnitTestFramework (Framework);
  }

  return Status;
}

/**
  Standard PEIM entry point for target based unit test execution from PEI.
**/
EFI_STATUS
EFIAPI
PeiEntryPoint (
  IN EFI_PEI_FILE_HANDLE     FileHandle,
  IN CONST EFI_PEI_SERVICES  **PeiServices
  )
{
  return UefiTestMain ();
}

/**
  Standard UEFI entry point for target based unit test execution from DXE, SMM,
  UEFI Shell.
**/
EFI_STATUS
EFIAPI
DxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  return UefiTestMain ();
}

/**
  Standard POSIX C entry point for host based unit test execution.
**/
int
main (
  int argc,
  char *argv[]
  )
{
  return UefiTestMain ();
}
