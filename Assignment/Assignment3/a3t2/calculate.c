#include<stdio.h>
#include "calculate.h"
int calculate(int a, char c, int b)
{
    // switch the operator, and calculate
    switch (c)
    {
    case 43:
        return a+b;

    case 45:
        return a-b;

    case 42:
        return a*b;
    
    case 47:
        return a/b;

    case 37:
        return a%b;
    default:
        return -1;
    }
}