/*
=============================================
 Name: A3T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description:
 用递归函数在C语言中生成一个斐波那契序列。
 斐波那契序列的每个数字都是前两个数字的和。
 你需要从用户输入的两个初始值开始，输出前20个数字。

递归的三个思维步骤
    1. 确定问题：求第n个数
    2. 解决基准问题：求第1个和第2个数时，值为a和b
    3. 拆解问题，通过规模更小的子问题来解决问题
        ：n=(n-1)+(n-2), n+1=(n-2)+(n-3)
 =============================================
*/

#include <stdio.h>

// int a: the first input number
// int b: the Second input number
// int n: which number of the Fibonacci
int recursive(int a, int b, int n)
{
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    return recursive(a, b, n - 1) + recursive(a, b, n - 2);
}
// int argc: the number of input
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Input: ");
    scanf("%d%d", &a, &b);
    printf("Output: ");
    for (int i = 1; i <= 20; i++)
    {
        printf("%d ",recursive(a,b,i));
    }
    

    return 0;
}
