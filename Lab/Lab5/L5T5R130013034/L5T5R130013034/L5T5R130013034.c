/*
=============================================
 Name: L5T5R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: GPA calculator
 ============================================= 
*/

#include <stdio.h>

int main() {
    char grade;
    float gpa;

    printf("Enter a letter grade: ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
        case 'a':
            gpa = 4.00;
            break;
        case 'B':
        case 'b':
            gpa = 3.00;
            break;
        case 'C':
        case 'c':
            gpa = 2.00;
            break;
        case 'D':
        case 'd':
            gpa = 1.00;
            break;
        case 'F':
        case 'f':
            gpa = 0.00;
            break;
        default:
            printf("warning!\n");
            return 0;
    }

    printf("%.2f\n", gpa);
    return 0;
}
