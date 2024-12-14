/*
=============================================
 Name: L13T2R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: file operation
 =============================================
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fileCombine(char *destFileName, char *resFileName);

int main()
{
    // this is the main function
    char fileName1[20], fileName2[20];
    int flag;
    strcpy(fileName1, "a.txt");
    strcpy(fileName2, "b.txt");
    flag = fileCombine(fileName2, fileName1);
    if (flag == 1)
        printf("Success");
    else
        printf("Failure");
    return 0;
}

int fileCombine(char *destFileName, char *resFileName)
{
    // define string to store the content of the file
    char str_1[1000] = {0};
    char str_2[1000] = {0};
    // open the file and read the content
    FILE *r_file_1 = fopen(resFileName, "r");
    if (r_file_1 == NULL)
    {
        return 0;
    }
    // read the content of the file
    char *get_string_1 = fgets(str_1, 1000, r_file_1);
    if (get_string_1 == NULL)
    {
        return 0;
    }
    fclose(r_file_1);
    
    // open the file and read the content
    FILE *r_file_2 = fopen(destFileName, "r");
    char *get_string_2 = fgets(str_2, 1000, r_file_2);
    if (get_string_2 == NULL)
    {
        return 0;
    }
    fclose(r_file_2);
    // combine the content of the two files
    strcat(str_2, "\n");
    strcat(str_2, str_1);
    FILE *w_file = fopen(destFileName, "w");
    if (fputs(str_2, w_file) == EOF)
    {
        return 0;
    }
    fclose (w_file);

    return 1;
}