/*
=============================================
 Name: A1T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: InvertValue
 =============================================
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    // input number
    int numIn;
    int numOut = 0;
    scanf("%d",&numIn);
    // 0**
    numOut += ( numIn %10 ) * 100;
    numIn /= 10;
    // *0*
    numOut += ( numIn %10 ) * 10;
    numIn /= 10;
    // **0
    numOut += ( numIn %10 ) * 1;
    printf("reversed number: %d\n",numOut);
    return 0;
}
