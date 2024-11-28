/*
=============================================
 Name: L9T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: calculate
 =============================================
*/

#include <stdio.h>

// 递归函数，计算从 1 到 n 的和
int sumAll(int n) {
    if (n == 1) {
        return 1; // 基本情况
    }
    return n + sumAll(n - 1); // 递归调用
}

int main() {
    int maxNum;

    // 提示用户输入
    printf("Input maxNum: ");
    scanf("%d", &maxNum);

    // 检查输入是否合法
    if (maxNum < 1) {
        printf("Warning! Input of maxNum is invalid!\n");
    } else {
        int sum = sumAll(maxNum); // 调用递归函数计算和
        printf("Sum is %d.\n", sum);
    }

    return 0;
}
