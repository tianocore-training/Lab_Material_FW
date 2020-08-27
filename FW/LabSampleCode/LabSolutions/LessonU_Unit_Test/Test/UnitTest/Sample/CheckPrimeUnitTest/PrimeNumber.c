/** @file
  This is a sample to demostrate the usage of the Unit Test Library that
  supports the PEI, DXE, SMM, UEFI SHell, and host execution environments.
  
  Copyright (c) Intel Corporation.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "CheckPrimeUnitTest.h"


/**
Function to test will return Boolean True if number is Prime or False if Number is Not Prime
@param[in] Number	Integer to check if prime number
@retval  TRUE		Number passed was prime
@retval  FALSE		Number passed was Not prime
*/
BOOLEAN PrimeNumber(
	IN INTN Number
)
{
	INTN i;
	BOOLEAN NumberisPrime = TRUE;  // True if the number passed is prime
	if (Number <= 1) NumberisPrime = FALSE; // not prime
	for (i = 2; (i * i) <= Number; i++) {
		if (Number % i == 0)
			NumberisPrime = FALSE; // not prime
	}

	return (NumberisPrime);  // Prime number
}

