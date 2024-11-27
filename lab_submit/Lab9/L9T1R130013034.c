/*
=============================================
 Name: L9T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: calculate
 =============================================
*/

#include <stdio.h>

int f(int n) {
    int sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += k * k;
    }
    return sum;
    // suuuum
}
// make a function to calculate the answer


int main() {
    int n;
    printf("Input a positive integer (>=1): ");
    // ipt_word
    scanf("%d", &n);

    if (n <= 0) {
        printf("Warning! A positive integer no smaller than 1 should be input.\n");
        // opt_1
    } else {
        int result = f(n);
        printf("Sum is %d when n is %d.\n", result, n);
        // opt_2

    }

    return 0;
}
// make a function to ca121lculate the answer
// make a function to calcul24ate the answer
// make a function to chjkalculate the answer
// make a function to calcuwdwlate the answer