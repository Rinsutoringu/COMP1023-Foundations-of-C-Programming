/*
=============================================
 Name: L10T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: the length of string
 =============================================
*/

#include<stdio.h>


// to calculate the Length of input string
int stringLength(char s[])
{
    int i;
    for (i = 0; s[i]!='\0' ; i++){}
    //  core calculate
    return i;
}

int main(int argc, char const *argv[])
{
    char str[50];
    printf("Input a string: ");
    // remain to input
    scanf("%s", str);
    // recieve input
    printf("The length of the string is %d", stringLength(str));
    // print out message
    return 0;

}

