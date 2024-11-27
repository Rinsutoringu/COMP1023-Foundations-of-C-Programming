/*
=============================================
 Name: L5T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Task flow chart
 ============================================= 
*/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int number;
    printf("Input an integer n: ");
	scanf("%d",&number);
	if (number<0){
		number = number;
		}
	else number = -number;
	number = 2 * number;
	printf("The final value of n is %d\n",number);
    return 0;
}

