/*
=============================================
 Name: A3T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: calculator
 =============================================
*/

// ASCII

//  +: 43
//  -: 45
//  *: 42
//  /: 47
//  %: 37


#include<stdio.h>
#include"calculate.h"

int main(int argc, char const *argv[])
{

    // input
    int a,b;
    char c;
    // input
    printf("Enter an expression: ");
    // to get the input
    scanf("%d %c %d", &a, &c, &b);
    int value = calculate(a,c,b);
    if (value == -1)
    {
        // output
        printf("Warning: Invalid operator.");
    }
    else
    {   
        // output
        printf("%d%c%d=%d",a,c,b,value);
    }
    return 0;
}
 
