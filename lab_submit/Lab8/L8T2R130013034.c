/*
=============================================
 Name: L8T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: calculate char
 =============================================
*/

#include<stdio.h>

int differenceASCIICode(char char_a,char char_b){
    int a = char_a - char_b;
    return (a);
}



int main(int argc, char const *argv[])
{

    char a,b;
    printf("Please enter two characters: ");
    scanf("%c %c",&a,&b);
    printf("The difference between character '%c' and '%c' is %d.",a,b,differenceASCIICode(a,b));
    return 0;
}

// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef
// aaaaaafefnefwnnef