/*
=============================================
 Name: L4T5R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description:simple calculator
 ============================================= 
*/

#include <stdio.h>


int main(){
	int m,n;
	scanf("%d %d",&m,&n);
//Receives two int from the keyboard

	printf("Integer: %d divided by %d is %d\n",m,n,m/n);
	printf("Float: %d divided by %d is %.2f\n",m,n,(float)m/n);
//Calculate it and print out

    return 0;
}

