
/*
=============================================
 Name: L4T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Use your brain to run the C language compilation simulator
 ============================================= 
*/

#include <stdio.h>

int main ()
{
		
	int i = 10, j = 5;
	float x = 5.0, y;
	// y = x / i; 
	// y = j / i;     
	y = (float)j / i;
	printf("%f\n",y);
/*
first:
0.500000

sceond:
0.000000

third:
0.500000

Because when the first programme line, when x/1, then calculator will goes to float, it can get decimal, then the float number goes to y, that i int became float
when the sceond programme line, when j/1, the result is int,when j/1, it cant get decimal, so the number is 0, and 0 will be put in to float y,and 0 become to 0.00000
when the last programme line,use float()to Coercion variable type,so we can get the answer 5.00000
*/

}
