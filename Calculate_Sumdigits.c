 /*********************************************************************************
 *
 *                      ********************************
 *                      *                              *
 *                      *    Calculate_Sumdigits.c
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
 * Function To Calculate Sum of Digits of a Five Digit Number
 *
 *
 ********************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Calculate_Sumdigits(int FivedigitNumber)
{
    while(FivedigitNumber)
    {
     sum = sum+FivedigitNumber%10;
     FivedigitNumber= FivedigitNumber/10;
    }
    printf("%d",sum);
	
}