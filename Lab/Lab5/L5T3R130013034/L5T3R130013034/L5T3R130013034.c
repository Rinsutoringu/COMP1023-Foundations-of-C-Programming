/*
=============================================
 Name: L5T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Extra Judge
 ============================================= 
*/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int number,flag_3=0, flag_8=0;

    printf("Input an integer n: ");
	scanf("%d",&number);

	if((number%3)==0)
		{
		flag_3 =1;
		}
	if((number%8)==0)
		{
		flag_8 =1;
		}
	if(flag_3==1&&flag_8==1){
		printf("%d is multiple of both 3 and 8.\n",number);
		}
	else if(flag_3==1&&flag_8==0){
		printf("%d is only multiple of 3.\n",number);
		}
	else if(flag_3==0&&flag_8==1){
		printf("%d is only multiple of 8.\n",number);
		}
	else if(flag_3==0&&flag_8==0){
		printf("%d is not multiple of 3 or 8.\n",number);
		}

    return 0;
}

