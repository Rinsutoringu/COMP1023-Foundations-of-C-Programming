/*
=============================================
 Name: A2T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: i dont like maths
 =============================================
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int input_num, output_num;
    int cache_3n = 1;
    int cache_5n = 1;
    printf("Input: ");
    scanf("%d",&input_num);
    for (int i = 0; i < input_num; i++)
    {
        cache_3n *= 3;
        // printf("cache_3n is %d\n",cache_3n);
        cache_5n *= 5;
        // printf("cache_5n is %d\n",cache_5n);
    }
    output_num = cache_3n + cache_5n;
    // printf("output_num is %d\n",output_num);
    printf("Output: %d\n",output_num);
    return 0;
}
