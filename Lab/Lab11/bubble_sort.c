#include <stdio.h>
void poop_string(int string[], int index);
int main(int argc, char const *argv[])
{
    int index = 10;
    int string[50];
    printf("input a 10 bitintenger stringing.\n");
    for (int i= 0; i < index; i++)
    {
        scanf("%d", &string[i]);
    }
    poop_string(string, index);
    for (int i = 0; i < index; i++)
    {
        printf("%d", string[i]);
    }
    
    return 0;
}

void poop_string(int string[], int index)
{
    int temp;
    for (int i = 0; i < index - 1; i++)
    {
        for (int n = 0; n < index - i - 1; n++)
        {
            if (string[n] > string[n + 1])
            {
                temp = string[n];
                string[n] = string[n + 1];
                string[n + 1] = temp;
            }
        }
    }
}