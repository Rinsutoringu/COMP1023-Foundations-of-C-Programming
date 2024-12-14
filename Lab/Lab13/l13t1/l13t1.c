/*
=============================================
 Name: L13T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: file operation
 =============================================
*/
#include <stdio.h>
#include <string.h>

int fileCopy(char *destFileName, char *resFileName);

int main()
{
    char fileName1[20], fileName2[20];
    int flag;
    strcpy(fileName1, "a.txt");
    strcpy(fileName2, "b.txt");
    flag = fileCopy(fileName2, fileName1);
    if (flag == 1) 
        printf("Success"); 
    else 
        printf ("Failure");
    return 0;
}

// this function is used to copy the content of resFileName to destFileName
int fileCopy(char *destFileName, char *resFileName)

{
    char str[1000];
    FILE* read_file = NULL;
    FILE* write_file = NULL;


    // open read_file
    read_file = fopen(resFileName, "r");
    // if readfile error, return 0
    if (read_file == NULL)
    {
        return 0;
    }
    // get string size 1000 from read_file
    char * get_string = fgets(str, 1000, read_file);
    fclose(read_file);

    write_file = fopen(destFileName,  "w");
    // if readfile error, return 0
    if (write_file == NULL)
    {
        fclose(write_file);
        return 0;
    }
    // write get_string to write_file
    if (fputs(get_string, write_file) == EOF)
    {
        fclose(write_file);
        return 0;
    }
    return 1;
    
}