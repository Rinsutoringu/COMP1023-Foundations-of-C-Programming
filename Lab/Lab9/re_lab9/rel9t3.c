/*
写一个程序，用两个办法计算m的n次幂
其中m和n是自然数，如果输入不符合规定，会发出警告。

程序要包含三个函数
    main
    PowerRec(int m, int n)      以递归的方式计算结果
    PowerLoop(int m, int n)     以循环的方式计算结果
*/

#include <stdio.h>
int PowerRec(int m, int n)
{
    if (n == 1)
    {
        return m;
    }
    else
    {
        return m * PowerRec(m, n - 1);
    }
}
int PowerLoop(int m, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= m;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int m, n;
    printf("输入m和n：");
    scanf("%d %d", &m, &n);
    if (m <= 0 || n <= 0)
    {
        printf("m和n必须是自然数！");
        return 0;
    }
    printf("递归计算结果：%d\n", PowerRec(m, n));
    printf("循环计算结果：%d\n", PowerLoop(m, n));
    return 0;
}