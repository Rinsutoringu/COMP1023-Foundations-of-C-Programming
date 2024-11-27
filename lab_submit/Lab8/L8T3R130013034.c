/*
=============================================
 Name: L8T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: data
 =============================================
*/
#include <stdio.h>

float exchange(float a[], int n);

int main()
{
    float data[4] = {2.5, 1, 1.2, 5.2};
    int i;
    float max = exchange(data, 4);
    printf("The biggest element in the array is %.2f\n", max);
    for (i = 0; i <= 3; i++)
        printf("%.2f ", data[i]);
    return 0;
}

float exchange(float a[], int n)
{
    float max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef