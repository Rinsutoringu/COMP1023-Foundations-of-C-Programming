
/*
=============================================
 Name: L4T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: write a simple calculator
 ============================================= 
*/

#include <stdio.h>


int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d + %d = %d\n",m,n,m + n);
	//Calculate the sum
	printf("%d - %d = %d\n",m,n,m - n);
	//Calculate the subtraction
	printf("%d * %d = %d\n",m,n,m * n);
	//Calculate the multiplication
	printf("%d / %d = %d\n",m,n,m / n);
	//Calculate the division
	printf("%d %% %d = %d\n",m,n,m % n);
	//Calculate the remainder
	printf("float(%d) / %d = %f\n",m,n,(float)m / n);
	//Calculate the Decimal results

    return 0;
}

