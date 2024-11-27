/*
=============================================
 Name: A1T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: InvertValue
 =============================================
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    // input
    float input_money;
    int choose;
    printf("Please input amount in Euro:");
    //zhushizhushizhushi1
    scanf("%f",&input_money);
    printf("Please choose the currency converting to (1: HK dollar, 2: RMB): ");
    scanf("%d",&choose);

    //choice
    if (choose == 1)
    {
        printf("%.2f euro=%.2f HK dollar\n",input_money, input_money*8.1);
    //????
    }
    else
    {
        printf("%.2f euro=%.2f RMB\n",input_money, input_money*7.2);
    }
    return 0;
}
