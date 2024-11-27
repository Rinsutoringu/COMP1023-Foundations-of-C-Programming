/*
=============================================
 Name: A3T1R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: Accept a list of integers from the user, and sort them in ascending order.
 =============================================
*/

#include<stdio.h>


void ascending_sort(int a[],int m)
{
    //pop sort
    int i,j,t;
    // loop m-1 times
    for(i=0;i<m-1;i++)
    {
        // every loop complate, the biggest number will be put in the last position
        for(j=0;j<m-i-1;j++)
        {

            if(a[j]>a[j+1])
            {
               t=a[j+1];
               a[j+1]=a[j];
               a[j]=t;
            }
        }
    }
    return;
}

/* 处理用户的输入：
    先获取一行数据 然后把一行数字进行遍历

*/

#include <stdio.h>

int main() {
    char buffer[1024];
    int numbers[100]; // 假设最多100个整数
    int index = 0;

    printf("Input: ");

    // 读取整行输入,把输入的数字存入数组
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {

        // 初始化一个位置在数组buffer第一个元素上的指针
        char *ptr = buffer;
        int num;
        
        // 在指针位置上从数组中读取一个整数，写入到num中，同时进行条件判断，写入成功就是1
        while (sscanf(ptr, "%d", &num) == 1) {
            // 把读取的整数存入数组

            if (num==-1)
            {
                break;
            }
            else if (num>0)
            {
                numbers[index++] = num;
            }
            // 把指针移动出读完的这个整数的范围
            while (*ptr != ' ' && *ptr != '\0') {
                ptr++;
            }
            // 跳过空格
            while (*ptr == ' ') {
                ptr++;
            }
        }
    }

    ascending_sort(numbers,index);

    // 输出结果，因为数组不能直接输出，所以需要遍历输出
    printf("Output:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
