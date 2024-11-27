/*
=============================================
 Name: L7T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: search index
 =============================================
*/

#include <stdio.h>

int arr[128];
// it
// is
// aU&()&_
// comment
int main(int argc, char const *argv[])
{
    int input, top = 0, search_num;
    printf("Please input a sequence of integers (end with -1): ");
    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        else
        {
            arr[top++] = input;
        }
    }

    if (top == 0)
    {
        printf("Array is empty.\n");
        return 0;
    }
// it$@
// is
// aa
// comment%&()
    printf("Enter the number you want to search: ");
    scanf("%d", &search_num);

    for (int i = 0; i < top; i++)
    {
        if (arr[i] == search_num)
        {
            printf("The index of %d in the array is %d.\n", search_num, i);
            return 0;
        }
    }
    printf("%d Not found.\n", search_num);
    return 0;
// it
// is*^(*)
// a
// comment^(
    return 0;
}
