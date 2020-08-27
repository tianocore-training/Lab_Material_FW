/** @file
  This is a sample to demostrate the usage of the Unit Test Library that
  supports the PEI, DXE, SMM, UEFI SHell, and host execution environments.

  Copyright (c) Intel Corporation.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef _CHECK_PRIME_UNIT_TEST_H_
#define _CHECK_PRIME_UNIT_TEST_H_

#include <PiPei.h>
#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/UnitTestLib.h>
#include <Library/PrintLib.h>



/**
Super Simple FUNCTION TO TEST Prototype
@param[in]  Number  signed Integer value  
@retval  TRUE		Number passed was prime
@retval  FALSE		Number passed was Not prime
**/
BOOLEAN PrimeNumber(
	IN INTN Number
);





#endif
