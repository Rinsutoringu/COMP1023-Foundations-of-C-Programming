/*
=============================================
 Name: L9T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: calculate
 =============================================
*/

#include <stdio.h>

void find_factors(int n, int m) {
    int num = n;
    if (n % m == 0) {
        int count = 0;

        // 统计 `m` 是 `n` 的因子的次数
        while (n % m == 0) {
            n /= m;
            count++;
        }

        // 输出因子数量及其大小
        printf("There are %d %d(s) in %d.\n", count, m, num); // 根据循环后的 n 恢复原值计算
    } else {
        // 即使 m 不是因子，也输出零
        printf("There are 0 %d(s) in %d.\n", m, n);
    }
}

int main() {
    int n, m;

    printf("Please input n and m: ");
    scanf("%d%d", &n, &m);

    // 检查 n 和 m 的有效性
    if (n <= 1) {
        printf("Warning! value of n is invalid!\n");
    } else if (m <= 1) {
        printf("Warning! value of m is invalid!\n");
    } else {
        find_factors(n, m);
    }

    return 0;
}
