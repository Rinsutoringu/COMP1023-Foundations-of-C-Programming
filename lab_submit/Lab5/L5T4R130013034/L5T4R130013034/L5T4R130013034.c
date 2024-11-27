/*
=============================================
 Name: L5T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Triangle Legitimacy Verifier
 ============================================= 
*/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int side_A,side_B,side_C;
    printf("Please input the 3 lengths of edges: ");
	scanf("%d%d%d",&side_A,&side_B,&side_C);

	if(side_A<=0||side_B<=0||side_C<=0){
		printf("Warning!\n");
		}
	else if((side_A+side_B>side_C)&&(side_B+side_C>side_A)&&(side_A+side_C>side_B)){
		printf("%d, %d, %d can form a triangle!\n",side_A,side_B,side_C);
		}
	else printf("%d, %d, %d cannot form a triangle!\n",side_A,side_B,side_C);

    return 0;
}

