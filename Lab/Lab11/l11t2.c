/*
=============================================
 Name: L11T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description:

 写一段程序，允许输入年月日，输出第二天的日期、
 注意闰年什么的

 =============================================
*/

#include <stdio.h>

// Define struct to save date.
typedef struct{
    int year;
    int month;
    int day;
} Date;

// To process date
void findNextDay(Date *current, Date *next){
    int day = current->day;
    int month = current->month;
    int year = current->year;
    int d = 0;

    // Invalid month
    if (month < 1 || month > 12) {
        next->month = -1;
        return; 
    }

    // check the wrong input
    switch (month){
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        // These months have 31 days
        d = 31;
        break;
    case 2:
        // leap year:month 2 is 29 days, and other month 2 is 28 days
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            d = 29;
        else
            d = 28;
        break;
    case 4:case 6:case 9:case 11:
        // These months have 30 days
        d = 30;
        break;
    }
    // Invalid day
    if (day < 1 || day > d){
        next->day = -1;
        return;
    }
    if (year < 1){
        next->year = -1;
        return;
    }

    // calculate the date

    if (day == d){
        day = 1;
        month++;
        if (month > 12){
            month = 1;
            year++;
        }
    }
    else{
        day++;
    }

    next->day = day;
    next->month = month;
    next->year = year;
}

int main(){
    Date now, next;
    printf("Input a date by the order of month, day, year: ");
    scanf("%d %d %d", &now.month, &now.day, &now.year);
    findNextDay(&now, &next);

    if (next.month == -1){
        printf("Warning! Month input should be ranging in [1, 12].\n");
        return 0;
    }
    if (next.day == -1){
        printf("Warning! Date input is not real.\n");
        return 0;
    }
    if (next.year == -1){
        printf("Warning! Year input should be positive.\n");
        return 0;
    }

    printf("The next day of input date is %d/%d/%d.\n", next.month, next.day, next.year);
    return 0;
}

// nextday(date.month, date.day, date.year