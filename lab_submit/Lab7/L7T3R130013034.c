/*
=============================================
 Name: L7T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: search index
 =============================================
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // input
    int a, asci_num;
    printf("Input the total number of letters: ");
    scanf("%d", &a);
    printf("Input %d ASCII codes: ", a);

    char arr[a];
    // user input
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        // logical
        if ((arr[i] <= 0) || (arr[i] < 65 && arr[i] > 90) || (arr[i] < 97 && arr[i] > 122))
        {
            printf("Warning! Invalid ASCII code.");
            return 0;
        }
    }
     // output
    printf("%s", arr);
    return 0;
}
