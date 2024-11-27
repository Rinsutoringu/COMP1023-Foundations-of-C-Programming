/*
use recursion to implementation excute code multiple times
*/

#include <stdio.h>

int PowerRec(int m, int n)
{
    if (n == 1)
    {
        return m;
    }
    // 最简化情况：当n=1时，直接返回m
    else
    {
        return m * PowerRec(m, n - 1);
    }
    // 递归情况：当n不等于1时，返回m*PowerRec(m, n-1)(这意味着完成m的n次幂的计算)
}