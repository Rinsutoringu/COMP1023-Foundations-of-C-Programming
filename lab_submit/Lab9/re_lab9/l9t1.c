/*
使用GPT写作业，我真该死啊
去死吧去死吧去死吧
- 编写一个程序，内容是累加<input>的平方和
    - 要把计算的部分做成一个递归函数
    - 主函数调用这个计算函数，并打印结果

    有罪之人，开始吧。
*/

#include <stdio.h>

int sum_Calculator(int n)
{
    if (n == 0)
    {
        return 0;
    }
    // 最小情况（意味着如果输入为0的话，什么都不需要解决，直接返回0就可以了！）

    else
    {
        return n * n + sum_Calculator(n - 1);
    }
    // 递归情况（意味着如果输入不为0的话，就需要计算n的平方，然后再调用函数自身，直到n=0为止）
}

int main(int argc, char const *argv[])
{
    int input_num;
    printf("Input a positive integer (>=1): ");
    scanf("%d", &input_num);
    if (input_num < 0)
    {
        printf("Warning! A positive integer no smaller than 1 should be input.");
    }
    else
    {
        printf("输入数字的平方累加是 %d ", sum_Calculator(input_num));
    }

    return 0;
}
