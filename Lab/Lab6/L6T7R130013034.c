/*
=============================================
 Name: L6T7R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: number
 =============================================
*/


#include <stdio.h>

int main() {
    int n, i;
    int prime_number = 1;

    // read

    printf("Input a positive integer: ");
    scanf("%d", &n);

    // check

    if (n <= 0) {
        printf("Warning! You should input a positive integer.\n");
        return 1;
    }

    // check

    if (n == 1) {
        prime_number = 0; 
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                prime_number = 0; 
                break;
            }
        }
    }

    // output

    if (prime_number)
        printf("%d is a prime.\n", n);
    else
        printf("%d is not a prime.\n", n);

    return 0;
}
