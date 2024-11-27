/* 
重写一遍！
*/


#include <stdio.h>

int fators_Num(int n, int m)
{
    if (n%m != 0)
    // 意味着有余数
    {
        return 0;
    }
    else
    {
        return 1 + fators_Num(n/m, m);
        // 返回递归执行总次数（每成功递归一次意味着存在一个指定的因子m
    }
}

int main(int argc, char const *argv[])
{
    int n, m;
    printf("input m and n :");
    scanf("%d %d",&n, &m);
    if (n<=0)
    {
        printf("n<=0");
        return 0;
    }
    if (m<=0)
    {
        printf("m<=0");
        return 0;
    }
    // 输入合法性检查
    

    printf("the fators %d in %d is %d", n, m, fators_Num(n,m));
    return 0;
}
