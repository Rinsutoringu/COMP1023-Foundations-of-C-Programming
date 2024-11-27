/*
=============================================
 Name: L3T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Comment on the output of running a given program
 ============================================= 
*/
#include <stdio.h>
int main() {
  float value1, value2, sum;
  value1 = 15;
  value2 = 30;
  sum = value1 + value2;
  printf("The sum of %.2f and %f is %f\n", value1, value2, sum);
  return 0;
} 
/* 
Put your outputs here.
1. The sum of 15 and 30 is 45

all is normal

2. The sum of 0 and 0 is 0

This is because this method interprets the incoming variables based on
 the type of control character 

3. The sum of 15.000000 and 30.000000 is 45.000000

This is because this method interprets the incoming variables based on
 the type of control character now it is true

4. The sum of 15.00 and 30.000000 is 45.000000

This is because the new syntax specifies that only
 2 decimal places will be kept when outputting floating-point numbers
*/
