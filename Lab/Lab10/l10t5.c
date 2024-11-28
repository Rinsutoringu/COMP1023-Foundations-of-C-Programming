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


int strsize(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {}
    return i;
    // if str[i] not NONE, loop next one
    // if str[i] == NONE, return
}

int main() {
    char input[200];  
    // 设定一个足够大的数组
    char word[20];    
    // 每个单词的最大长度
    int words_qnty = 0;

    printf("Please input some words: ");

    // 使用scanf逐个读取单词，直到输入结束
    while (scanf("%19s", word) == 1) 
    {
        if (strsize(word)!= 3||word[0]!='E'||word[1]!='n'||word[2]!='d')
        {
            words_qnty++;
        }
        else
        {
            printf("There are totally %d words.",words_qnty);
            break;
        }
    }

    return 0;
}
