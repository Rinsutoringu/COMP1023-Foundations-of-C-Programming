/*
=============================================
 Name: L3T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: debug
 ============================================= 
*/

/*
#include <stdio.h>

int main() {
int i;
char ch;
float j;
scanf("%d %f %c", &i, &j, &ch);
printf("%d is the ASCII code of '%c'.\n", ch, ch);
printf("The value of i is %d.\n", i);
printf("The value of j is %.1f.\n", j);
return 0;
}
*/

#include <stdio.h>

int main() {
int i;
char ch;
float j;
scanf("%d %f %c", &i, &j, &ch);
printf("%d is the ASCII code of '%c'.\nThe value of i is %d.\nThe value of j is %.5f.\n", ch, ch, i, j);
return 0;
}
