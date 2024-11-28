/*
=============================================
 Name: L10T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Read a string from the keyboard and count the number of 'a' in the string.
 =============================================
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_of_a;
    char string[50];
    printf("Input a string: ");
    // ask for input
    fgets(string, 50, stdin);
    // get some string at input
    for (int i = 0; i < 50; i++)
    {
        if ('a' == string[i])
        {
            num_of_a++;
        }
        // count the number of 'a'
    }
    printf("There totally %d 'a' in %s\n", num_of_a, string);
    // print the result

    return 0;
}
