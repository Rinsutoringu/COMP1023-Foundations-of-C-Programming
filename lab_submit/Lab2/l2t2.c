/*
=============================================
 Name: L2T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Hello_World program week1 labtask1
 ============================================= 
*/

#include <stdio.h>
int main (){
    short int x, y, z;
    x = 32767;
    y = 3;
    z = x + y;
    printf("%d + %d = %d\n", x, y, x + y); //print x+y
    printf("%d + %d = %d\n", x, y, z); //print z
    return 0;
}

/* 
This is due to the problem caused by the optimization of the compiler,
 the compiler of Pelles C uses a higher accuracy register in order to
 perform the addition process with higher accuracy, so there is no 
immediate value overflow, and when the value is stored in the short 
int variable, it exceeds the maximum value that the variable can hold, 
so the value overflow occurs, and the value becomes an error value
*/


