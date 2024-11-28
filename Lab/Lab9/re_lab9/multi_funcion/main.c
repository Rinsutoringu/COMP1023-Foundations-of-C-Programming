/*
The main function of use two function to implementation excute code multiple times
*/

#include<stdio.h>
#include "loop.h"
#include "recursion.h"

int main(int argc, char const *argv[])
{
    int m, n;
    printf("please input m and n: ");
    scanf("%d %d", &m, &n);
    if (m<=0 || n<=0)
    {
        printf("m and n must be natural number!");
        return 0;
    }
    printf("calculate result in recursion: %d\n", PowerRec(m, n));
    printf("calculate result in recursion: %d\n", PowerLoop(m,n));
    return 0;
}
