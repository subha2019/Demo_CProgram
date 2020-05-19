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
}
int main()
{
	CU_initialize_registry();
	CU_pSuite suite = CU_add_suite("test_UnderVoltage", 0, 0);
	CU_add_test(suite, "test_UnderVoltage", test_UnderVoltage);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();

return 0;
}