/*
=============================================
 Name: L10T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Read two str and check if str2 appears in str1.\

 the way to implement this task:
    compare two string whether the str2 appears in str1
        ABCDEFG   A -> G
        12  1->2 1->2 1->2 1->2 ...

            A->1, （A+1）->2; (A+1)->1, (A+2)->2; ....
 =============================================
*/
#include <stdio.h>

// return the last element pos
int strsize(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {}
    return i;
    // if str[i] not NONE, loop next one
    // if str[i] == NONE, return
}

// compare the large string and the short string
int cmpstr(char str1[], char str2[])
{
    int i, j;
    for (i = 0; i < strsize(str1) - strsize(str2) + 1; i++)
    // outside loop, number of times : (longstr - shortstr + 1)
    {
        for (j = 0; j < strsize(str2); j++)
        // inside loop.
        {
            if (str1[i + j] != str2[j])
            // judgment
            {
                break;
            }
        }
        // if j == str2 size, the j will unable to loop
        if (j == strsize(str2))
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    char str1[50], str2[50];
    printf("Input 2 strings: ");
    scanf("%s %s", str1, str2);
    int pos = cmpstr(str1, str2);
    if (pos < 0)
    {
        printf("str1 does not contain str2");
    }
    else
    {
        printf("str1 contains str2 at position %d", pos);
    }

    return 0;
}
