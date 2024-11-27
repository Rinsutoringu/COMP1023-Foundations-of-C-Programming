/*
=============================================
 Name: L10T5R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: the length of string
 =============================================
*/

#include <stdio.h>
#include <string.h>

// return the last element pos
int strsize(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
    // if str[i] not NONE, loop next one
    // if str[i] == NONE, return
}

// compare the large string and the short string
int cmpstr(char str1[], char str2[])
{
    int i, j;
    for (i = 0; i < strsize(str1) - strsize(str2) + 1; i++)
    // outside loop, number of times : (longstr - shortstr + 1)
    {
        for (j = 0; j < strsize(str2); j++)
        // inside loop.
        {

            if (str1[i + j] != str2[j])
            // judgment
            {

                break;
            }
        }
        // if j == str2 size, the j will unable to loop
        if (j == strsize(str2))
        {
            return i;
        }
    }
    return -1;
}

char *cutstr(char str[], char cutoutstr[])
{
    char str2[] = "End";
    int pos = cmpstr(str, str2);
    printf("pos");
    for (int i = 0; i < pos; i++)
    {
        cutoutstr[i] = str[i];
    }
    cutoutstr[pos] = '\0';
    return cutoutstr;
}

int main(int argc, char const *argv[])
{
    char str[20];
    char inputstr[1000];
    int pos = 0;
    str[0] = "\0";
    printf("Please input some words: ");
    while (1)
    {
        scanf("%s", str);
        // 读取一个单词
        int lenofstr = strsize(str) + 1;
        // 更新索引
        str[lenofstr] = ' ';
        // 给读取到的字符串加个空格
        for (int i = 0; i < lenofstr; i++)
        {
            inputstr[pos + i] = str[i];
        }
        // 将读取到的字符串复制到inputstr里面
        pos += lenofstr;
        // 更新inputstr的长度索引
        if (str[0] == 'E' || str[1] == 'n' || str[2] == 'd')
        {
            break;
        }
    }

    printf("cut out str is %s", inputstr);
    return 0;
}
