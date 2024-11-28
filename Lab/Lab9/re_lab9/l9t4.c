/*
计算从1到给定自然数的总和
如果输入值不合法，显示警告
*/

#include<stdio.h>

int sumALL(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // 最简情况：1的累加结果就是1
    else
    {
        return n + sumALL(n-1);
    }   
    // 递归情况：n+n的上一位就可以解决问题 上一位再加上一位...加到1为止。
}

int main()
{
    int num;
    printf("输入要累加的数字: ");
    scanf("%d", &num);
    if (num<=0)
    {
        printf("输入数字不是自然数！");
        return 0;
    }
    // 输入合法性检查
    printf("输入数字的累加为%d", sumALL(num));
    
}