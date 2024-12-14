/*
=============================================
 Name: L13T3R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: read bin data
 =============================================
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // this is the main function
    float num;
    FILE *file = fopen("sample.bin", "rb");
    if (file == NULL)
    {
        // if the file is not opened
        printf("File open error\n");
        return 0;
    }
    // read the content of the file
    fseek(file, 4 * sizeof(float), SEEK_SET);
    fread(&num, sizeof(float), 1, file);
    printf("num1 is %f\n", num);

    // read the content of the file
    fseek(file, 6 * sizeof(float), SEEK_SET);
    fread(&num, sizeof(float), 1, file);
    // close the file
    printf("num2 is %f\n", num);
    return 0;
}
