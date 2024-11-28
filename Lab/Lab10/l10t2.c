/*
=============================================
 Name: L10T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: pop and count the number of upper-case letters, lower-case letters and spaces in a string.
 =============================================
*/

#include <stdio.h>
#include <string.h>


// pop the element at pos in str
void pop(int pos, int maxsize, char str[])
{
    for (size_t i = pos; i < maxsize - 1; i++)
    {
        str[i] = str[i + 1];
    }
    str[maxsize - 1] = '\0';
}


// main function
int main(int argc, char const *argv[])
{
    int num_of_lower = 0;
    int num_of_upper = 0;
    int num_of_space = 0;

    char str[50];
    printf("Input a string: ");
    // ask for input
    fgets(str, 50, stdin);
    // get some string at input
    printf("Original str is %s", str);
    // print the original string
    int maxsize = strlen(str);
    // get the length of the string
    if (maxsize > 0 && str[maxsize - 1] == '\n') {
        str[maxsize - 1] = '\0';
    }

    for (int i = 0; i < maxsize; i++)
    {
        if (str[i] <= 90 && str[i] >= 65)
        {
            num_of_upper++;
        }
        else if (str[i] <= 122 && str[i] >= 97)
        {
            num_of_lower++;
        }
        else if (str[i] == 32)
        {
            num_of_space++;
            pop(i, maxsize, str);
            i--;
        }
        // count the number of 'a'
    }

    // print the result
    printf("There are %d upper-case letters, %d lower-case letters, %d spaces totally.\n", num_of_upper, num_of_lower, num_of_space);
    printf("String now is %s\n", str);
    return 0;
}
