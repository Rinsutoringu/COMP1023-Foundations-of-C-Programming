/*
=============================================
 Name: A3T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description:
given a 10-count number, and calculate the number of zero in binonary of this number
递归的三个思维步骤
    1. 确定问题：
        - 用2除以一个十进制数字
    2. 解决基准问题：
        - 0与2取余是0
    3. 拆解问题，通过规模更小的子问题来解决问题
        - n与2取余，

 =============================================
*/

#include <stdio.h>

int ZeroInBinary(int n)
{
    // the most mini case
    if (n == 0)
    {
        return 0;
    }

    // calculate this time the last number is 0 or 1, if number 1, set flag=1
    int i = 0;
    int bit = n % 2;
    if (bit == 0)
    {
        i = 1;
    }
    // recursive
    return i + ZeroInBinary(n >> 1);
}
int main(int argc, char const *argv[])
{
    int n;
    // input
    printf("Input: ");
    // output
    scanf("%d", &n);
    // output
    printf("Output: %d", ZeroInBinary(n));
    return 0;
}
