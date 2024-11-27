/*
=============================================
 Name: A2T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: i dont like maths
 =============================================
*/

#include <stdio.h>

int main() {
    int number, sum, divisor;

    for (number = 1; number < 1000; number++) {
        sum = 0;
        for (divisor = 1; divisor < number; divisor++) {
            if (number % divisor == 0) {
                sum += divisor;
            }
        }
        if (sum == number) {
            printf("%d = ", number);
            for (divisor = 1; divisor < number; divisor++) {
                if (number % divisor == 0) {
                    printf("%d", divisor);
                    if (divisor < number / 2) {
                        printf(" + ");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}

// yooohooo
// oi
// Hey, guys. I'm a stun stick
// Whaooo!!!!!!!!!!!!!!!!!