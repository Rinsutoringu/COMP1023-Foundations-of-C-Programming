/*
=============================================
 Name: L6T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: ***********============
 =============================================
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //define

    int count, row, column;
    int flag = 0;
    // first for
    for (row = 9; row >= 1; row -= 2)
    {
        //this is a free flag
        flag++;

        // second for
        for (column = 0; column < row; column++)
        {
            if (flag % 2 == 0)
            {
                printf("=");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}