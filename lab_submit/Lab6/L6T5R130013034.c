/*
=============================================
 Name: L6T5R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: GPA
 =============================================
*/

#include <stdio.h>

int main()
{
    char grade;
    int unit;
    int point;
    int sum_points = 0;
    int sum_units = 0;
    float GPA;

    // user input
    printf("Please input grade and units for each course (6 courses): ");

    // read
    for (int i = 0; i < 6; i++)
    {
        scanf(" %c %d", &grade, &unit);

        // check
        if (unit != 1 && unit != 3)
        {
            printf("Warning! Invalid grade or unit.\n");
            return 1;
        }

        // trans
        switch (grade)
        {
        case 'A':
            point = 4;
            break;
        case 'B':
            point = 3;
            break;
        case 'C':
            point = 2;
            break;
        case 'D':
            point = 1;
            break;
        case 'F':
            point = 0;
            break;
        default:
            printf("Warning! Invalid grade or unit.\n");
            return 1;
        }

        // sum
        sum_points += point * unit;
        sum_units += unit;
    }

    // sum
    GPA = (float)sum_points / sum_units;

    // opt
    printf("The GPA for this semester is: %.2f\n", GPA);

    return 0;
}
