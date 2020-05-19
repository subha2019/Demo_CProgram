/*********************************************************************************
*
*                      ********************************
*                      *                              *
*                      *    Sum_FiveDigits_cunit.c
*                      *                              *
*                      ********************************
*
********************************************************************************
*
* Author(s): Subhakanta Swain
*
********************************************************************************
* Description:
*
* Testcases to verify the Calculate_Sumdigit function define in Calculate_Sumdigits.c
*
*
********************************************************************************/

#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "SumDigit.h"

void test_Calculate_Sumdigits(void)
{  
	/********************************
	 TC1
	 Input: 10564
	 Output: 16  

	*********************************/
	CU_ASSERT(Calculate_Sumdigits(10564) == 16);
	
	 /********************************
	 TC2
	 Input: 0
	 Output: 0  

	*********************************/
	CU_ASSERT(Calculate_Sumdigits(0) == 0);
	
	/********************************
	 TC3
	 Input: 111111
	 Output: 6  

	*********************************/
	CU_ASSERT(Calculate_Sumdigits(111111) == 6);
	
	 /********************************
	 TC4
	 Input: 2147483647
	 Output: 46  

	*********************************/
	CU_ASSERT(Calculate_Sumdigits(2147483647) == 46);
}
int main()
{
	CU_initialize_registry();
	CU_pSuite suite = CU_add_suite("Calculate_Sumdigits", 0, 0);
	CU_add_test(suite, "test_Calculate_Sumdigits", test_Calculate_Sumdigits);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();

return 0;
}
