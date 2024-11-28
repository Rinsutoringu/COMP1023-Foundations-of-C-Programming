/*
=============================================
 Name: L9T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: calculate
 =============================================
*/

#include <stdio.h>

// 递归计算 m^n
int PowerRec(int m, int n) {
    if (n == 0) {
        return 1; // 任何数的 0 次方都是 1
    }
    return m * PowerRec(m, n - 1); // 递归调用
}

// 循环计算 m^n
int PowerLoop(int m, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= m; // 累乘
    }
    return result;
}

int main() {
    int m, n;

    // 输入 m 和 n
    printf("Input m and n: ");
    scanf("%d%d", &m, &n);

    // 检查输入有效性
    if (m <= 0) {
        printf("Warning! Input of m is invalid!\n");
        return 1; // 结束程序
    } else if (n < 0) {
        printf("Warning! Input of n is invalid!\n");
        return 1; // 结束程序
    }

    // 计算并输出结果
    int resultRec = PowerRec(m, n);
    int resultLoop = PowerLoop(m, n);

    printf("Product is %d using recursion.\n", resultRec);
    printf("Product is %d using loop.\n", resultLoop);

    return 0;
}
