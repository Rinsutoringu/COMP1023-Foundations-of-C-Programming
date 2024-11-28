/*
=============================================
 Name: L6T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: count odd and even
 =============================================
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum_even = 0;
    int sum_odd = 0;
    int integer, diff;

    // read a int from kbd
    printf("Input an integer: ");
    scanf("%d", &integer);

    // when int smaller than 0, print error message
    if (integer <= 0)
    {
        printf("Warning! You should input a positive integer.");
        return 0;
    }

    // calculate even and odd sum
    for (int i = 0; i <= integer; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
    }
    // calculate the sub
    diff = sum_even - sum_odd;

    // printout
    printf("sum_even is %d, sum_odd is %d, diff is %d.", sum_even, sum_odd, diff);

    return 0;
}
