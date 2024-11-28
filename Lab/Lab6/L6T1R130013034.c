/*
=============================================
 Name: L6T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: number of cccccccccccccc
 =============================================
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int count = 0;

    printf("Input a line of characters: ");

    // start to read
    while ((ch = getchar()) != '\n')
    {
        if (ch == 'c')
        {
            count++;
        }
    }

    printf("There are totally %d 'c'.\n", count);

    return 0;
}