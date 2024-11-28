/*
=============================================
 Name: L3T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Comment on the output of running a given program
 ============================================= 
*/

#include <stdio.h>
int main() {
    int percentage, x;
    char ch1, ch2;
    scanf("%d%c%c%d", &percentage, &ch1, &ch2, &x);
    printf("%d%% %c%c %d is %f\n", percentage, ch1, ch2, x, 1.0*x*percentage/100); 
    return 0;
}
/* 
Put outputs and explanations here.
1. 10of100:
output:
10of100
10% of 100 is 10.000000
Press any key to continue...

comments:
When I enter the specified input, 
the code stores 10 in the first 
variable, o and f in the second and
 third variables, and 100 in the 
x variable. In the output, 10 is 
output as 10% because of the %% 
escape character, and six decimal 
places are reserved because the 
output controller of the calculation
 is a single-precision floating-point number.
 
2. 10 of100:
output:
10%  o 0 is 0.000000

comments:
At this point, the space is parsed as ch1 because
 the space is also a string so only an o is printed 
out, because f is not a valid number, so the input 
parsing stops early, which causes x to not be 
assigned, so the result is 0

3. 10 of 100:

output:
10%  o 0 is 0.000000

comments:
ch1 is parsed to 0 again so ch2 is parsed to
 o and f is discarded, which causes x to not 
be assigned, so there is such an output

*/
