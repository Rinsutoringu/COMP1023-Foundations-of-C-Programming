/*
=============================================
 Name: L11T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: how to use struct 
 =============================================
*/

#include<stdio.h>
#include<math.h>

#define LINE_LENGTH(x1,x2,y1,y2) sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))

typedef struct 
{
    float x;
    float y;
} Point;

// define define define define define define define 
// define define define define define define define 
// define define define define define define define 
typedef struct 
{
    Point p1;
    Point p2;
    Point p3;
} Triangle;
// define define define define define define define 

// define define define define define define define 
// define define define define define define define 
// define define define define define define define 
int main(int argc, char const *argv[])
{
    Triangle triangle;
    printf("Enter the coordinates of the 1st point: ");
    scanf("%f, %f", &triangle.p1.x, &triangle.p1.y);
    printf("Enter the coordinates of the 2nd point: ");
    scanf("%f, %f", &triangle.p2.x, &triangle.p2.y);
    printf("Enter the coordinates of the 3rd point: ");
    scanf("%f, %f", &triangle.p3.x, &triangle.p3.y);

    printf("the circumference of the triangle is %f.\n", 
    LINE_LENGTH(triangle.p1.x, triangle.p2.x, triangle.p1.y, triangle.p2.y)+
    LINE_LENGTH(triangle.p1.x, triangle.p3.x, triangle.p1.y, triangle.p3.y)+
    LINE_LENGTH(triangle.p3.x, triangle.p2.x, triangle.p3.y, triangle.p2.y));
    return 0;
}
