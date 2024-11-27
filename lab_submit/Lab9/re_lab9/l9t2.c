/*
这道题是要求给定数字的指定因数个数

比如：给一个48 这个数字里面有多少个4？
48/4=12 12/4=3 3/4 无法整除
所以48里有2个4
*/

#include <stdio.h>

int factors_Num(int n, int m)
{
    if (n % m != 0 || n<m )
    {
        return 0;
    }
    // 如果n不能被m整除，或者n小于m，那么直接返回0
    else
    {
        return 1 + factors_Num(n / m, m);
    }
    // 如果n能被m整除，那么最终结果+1，然后再次调用函数自身
}

int main(int argc, char const *argv[])
{
    printf("Please input n and m: ");
    int n, m;
    scanf("%d %d", &n, &m);
    printf("The number of %d in %d is %d", m, n, factors_Num(n, m));
    return 0;
}
