/*
=============================================
 Name: L5T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: write a switcher
 ============================================= 
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int user_height,user_weight;
    printf("Input height(cm, >0) and weight(kilo, >0): ");
	scanf("%d%d",&user_height,&user_weight);

	if ((user_height-105)>(user_weight+20)) {
		printf("You are too slim\n");
		}
	else if((user_weight-10)<(user_height-105)&&(user_height-105)<=(user_weight+20)){
		printf("You are fit\n");
		}
	else {
		printf("You are too fat\n");
		}
//now,this switcher is finish

    return 0;
}

