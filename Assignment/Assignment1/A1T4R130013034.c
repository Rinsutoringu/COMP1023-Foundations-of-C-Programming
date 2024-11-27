/*
=============================================
 Name: A1T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: ABC scanner
 =============================================
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char a,b,output_a,output_b;
    int flag_1,flag_2;
    printf("Input: ");
    scanf("%c %c",&a,&b); 

    output_a = a;
    output_b = b; 


    if (!(( a >= 'a' && a <= 'z' )||(a >= 'A' && a<='Z')))
    {
        printf("Warning! '%c' is not an English letter.\n",a);
        return 0;
    }

    if (!(( b >= 'a' && b <= 'z' )||(b >= 'A' && b<='Z')))
    {
        printf("Warning! '%c' is not an English letter.\n",b);
        return 0;
    }
    if ( a >= 'a' && a <= 'z' )
    {
        a -= 'a' - 'A';
    }   

    if ( b >= 'a' && b <= 'z' )
    {
        b -= 'a' - 'A';
    }   

    if (a<=b)
    {
        printf("Output: %c %c",output_a,output_b);
    }
    else
    {
        printf("Output: %c %c",output_b,output_a);
    }

    int i,str_num;
    int false;

    while (i==-1||str_num>50)
    {
        false;
    }
    

    return 0;
}
