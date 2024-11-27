/*
=============================================
 Name: L4T6R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Compare the size of numbers
 ============================================= 
*/
#include <stdio.h>

int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	//Receives two integers from the keyboard

    printf("The bigger number is %d\n",num1 > num2 ? num1 : num2);
	//Compare the size of numbers

    return 0;
}

