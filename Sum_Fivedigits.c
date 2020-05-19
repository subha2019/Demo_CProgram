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

int main() {
	
    int n, sum=0;
    scanf("%d", &n);
    //To calculate the sum of the five digits on n.
    while(n)
    {
     sum = sum+n%10;
     n= n/10;
    }
    printf("%d",sum);
    return 0;
}
