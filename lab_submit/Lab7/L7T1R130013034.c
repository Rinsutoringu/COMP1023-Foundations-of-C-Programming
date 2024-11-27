/*
=============================================
 Name: L7T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Access stack manager
 =============================================
*/

#define SIZE 128
#define _CRT_SECURE_NO_WARNINGS
// this
// is
// comment
#include <stdio.h>

int in_stack, out_stack, control_flag;
int stack[SIZE];
int top = 0;

int main(int argc, char const *argv[])
{
    while (1)
    {
        printf("Please choose action(1: Push 2: Pop  0: Exit): ");
        scanf("%d", &control_flag);

        switch (control_flag)
        {
        case 1:
            if (top>=5)
            {
                printf("Unsuccessful push operation: Stack is full\n");
            }
            else
            {
                printf("Enter an integer to push: ");
                scanf("%d", &in_stack);
                stack[top++]= in_stack;
            }
            
            // this
            // is
            // comment
            break;
        case 2:
            if (top<=0)
            {
                printf("Unsuccessful pop operation: Stack is empty\n");
            }
            else
            {
                printf("Popped: %d\n", stack[--top]);
            }
            break;
        case 0:
            printf("Exiting the program");
            return 0;
            break;
        default:
            printf("wrong input!");
            return 0;
            // this
            // is
            // comment
        }

        printf("----------------------\n| Stack: ");

        for (int i = 0; i < top; i++)
        {
            printf("%d ", stack[i]);
        }

        printf("\n----------------------\n");
        // this
        // is
        // comment
    }

    return 0;
}
