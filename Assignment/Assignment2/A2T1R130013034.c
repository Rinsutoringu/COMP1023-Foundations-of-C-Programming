/*
=============================================
 Name: A2T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: #####
 =============================================
*/

#include<stdio.h>
// it is a comment
int main(int argc, char const *argv[])
{
    for (int i = 1; i < 7; i++)
    {
        if (i % 2)
        {
            for (int n = 0; n < i; n++)
            {
                printf("#");
            }
            printf("\n");
            
        }
        else
        {
            for (int n = 0; n < i; n++)
            {
                printf("+");
            }
            printf("\n");
            // it is a comment
        }
        // it is a comment
    }

    for (int i = 7; i > 1; i--)
    {
        if (i % 2)
        {
            for (int n = 0; n < i; n++)
            {
                printf("#");
            }
            printf("\n");
            // it is a comment
        }
        else
        {
            for (int n = 0; n < i; n++)
            {
                printf("+");// it is a comment
            }
            printf("\n");
            
        }
        
    }// it is a comment
    printf("#");
    
    return 0;
}
