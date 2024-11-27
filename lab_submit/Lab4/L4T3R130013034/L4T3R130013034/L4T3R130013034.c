/*
=============================================
 Name: L4T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Use your brain to run the C language compilation simulator
 ============================================= 
*/

#include <stdio.h>
int main (){
    int x = 50, y = 25;
    int temp1, temp2;
    temp1 = x/++y;
    printf("temp1= %d\ty= %d\n", temp1, y);
    y=25;
    temp2 = x/y++;
    printf("temp2= %-7d\ty= %d\n", temp2, y);
    return 0;
}
/* 
Output of
(1)	%7d: 

temp1= 1        y= 26
temp2=       2  y= 26
Press any key to continue...

(2)	%-7d:

temp1= 1        y= 26
temp2= 2        y= 26
Press any key to continue...

Explanation: 
(1)	difference between temp1 and temp2:

y++ is first to / x and second to +
++y is first to + and second to /x

(2)	difference between %7d and %-7d:

%7d Align to the right
%-7d Align to the left

*/
