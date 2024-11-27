/*
=============================================
 Name: L8T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: calculate
 =============================================
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    printf("Input a positive integer: ");
    scanf("%d",&num);
    if (num>0)
    {
    printf("The square root of %d = %.6f\n",num, sqrt(num));
    printf("The Log10 of %d = %.6f\n",num, log10(num));
    printf("The natural log of %d = %.6f\n",num, log(num));
    }
    else
    {
        printf("Warning! You should input a positive integer!");
    }
    


    return 0;
}
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef