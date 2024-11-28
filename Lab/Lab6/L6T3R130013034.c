/*
=============================================
 Name: L6T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: *****************
 =============================================
*/


#include <stdio.h>

int main(int argc, char const *argv[]){

    int count,row,column;
    //first for
    for (row = 1; row <= 5; row++)
    {
        //second for
        for ( column = 0; column < row; column++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}