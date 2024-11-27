/*
use loop to implementation excute code multiple times
*/

#include <stdio.h>

int PowerLoop(int m, int n)
{
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product *=m;
    }
    return product;
}