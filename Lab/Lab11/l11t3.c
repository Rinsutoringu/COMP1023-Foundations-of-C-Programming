/*
=============================================
 Name: L11T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description:

 recieve students information and order

 =============================================
*/

#include <stdio.h>
struct Student
{
    char name[10];
    int score;
    char major[5];
};

void sort_students(struct Student students_info[], int n)
{
    // use poop sort
    struct Student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students_info[j].name[0] > students_info[j + 1].name[0])
            {
                // sooooorts
                temp = students_info[j];
                students_info[j] = students_info[j + 1];
                students_info[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // input
    int n;
    printf("Input the number of students: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Warning! Student number should be positive.");
        return 0;
    }
    // from 0 begin to calculate student info.
    struct Student student_info[n];
    printf("Please input students' information:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &student_info[i].name);
        scanf("%d", &student_info[i].score);
        scanf("%s", &student_info[i].major);
    }
    // do sorts
    sort_students(student_info, n);
    printf("The student list in ascending order by name is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %s\n", student_info[i].name, student_info[i].score, student_info[i].major);
    }
    return 0;
}
