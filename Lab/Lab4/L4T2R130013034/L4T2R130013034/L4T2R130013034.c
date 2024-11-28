
/*
=============================================
 Name: L4T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Calculate the square product
 ============================================= 
*/

#include <stdio.h>

#define SQUARE_SUM(a, b, square_sum) { \
square_sum = (a) * (a) + (b) * (b); \
}

int main() {
int a, b, square_sum;
scanf("%d %d", &a, &b);
//Receives two integers from the keyboard

SQUARE_SUM(a, b, square_sum);
//Enable macro calculations to calculate the sum of squares of two numbers

printf("Square sum is %d\n", square_sum);
return 0;
}
