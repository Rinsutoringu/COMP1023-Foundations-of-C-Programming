/*
=============================================
 Name: A1T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: ABC_Compare
 =============================================
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char char1,char2;
    int num1,num2,result_num;

    printf("Please enter two characters: ");
    scanf("%c %c",&char1,&char2);
    num1=(char1);
    num2=(char2);


    if ((num1>=65 && num1<=90)||(num1>=97 && num1<=122))
    {
        if ((num2>=65 && num2<=90)||(num2>=97 && num2<=122))
        {
            if (num1>90)
            {
                num1-=32;
            }
            else if (num2>90)
            {
                num2-=32;
            }
                
            
            

            if (num1>num2)
            {
                result_num = num1 - num2;
            }
            else
            {
                result_num = num2 - num1;
            }
            
            
        }
        else
        {
            printf("Input invalid.");
            return 0;
        }
        
        
    }
    else
    {
        printf("Input invalid.");
        return 0;
    }

    printf("The difference is %d\n",result_num);
    
     

    return 0;
}
