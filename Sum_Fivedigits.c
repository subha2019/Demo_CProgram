 /*********************************************************************************
 *
 *                      ********************************
 *                      *                              *
 *                      *     Sum_Fivedigits.c
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
 * To Calculate Sum of Digits of a Five Digit Number
 *
 *
 ********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "SumDigit.h"

int Calculate_Sumdigits(int FivedigitNumber)
{
    while(FivedigitNumber)
    {
     sum = sum+FivedigitNumber%10;
     FivedigitNumber= FivedigitNumber/10;
    }
    printf("%d",sum);
	
}


int main() {
	
    int FivedigitNumber, sum=0;
    Calculate_Sumdigits(FivedigitNumber);
    return 0;
}
