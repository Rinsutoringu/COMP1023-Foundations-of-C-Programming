/*
=============================================
 Name: L11T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description:

enum

 =============================================
*/

#include<stdio.h>
enum year{Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
int main()
{
    int i;
    for (i=Jan; i<=Dec; i++)     
        printf("%d ", i);
    return 0;
}
// 121212121212
// 121212121212
// 12122feffef
// dsvvd