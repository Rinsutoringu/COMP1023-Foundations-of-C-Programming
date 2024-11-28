/*
=============================================
 Name: L7T4R130013034.c
 Author: Pengran Wang
 Version: 1.0
 Copyright: copyright CC_BY_NC_ND
 Description: bubble sort
 =============================================
*/

#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int swapped = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1; 
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}
// this
// is
// comment

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int swapped = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}
// this
// is
// comment
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// this
// is
// comment

int main(int argc, char const *argv[])
{
    int size;
    printf("Input the size of the array: ");
    scanf("%d",&size);
    if (size <= 0)
    {
        printf("Warning! Array size should be positive.");
        return 0;
    }
// this
// is
// comment    
    int arr[size];
    printf("Input 5 integers of the array: ");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The original array is: ");
    printArray(arr,size);
    bubbleSort(arr,size);

    printf("After sorting, the array in ascending order is: ");
    printArray(arr,size);
    bubbleSortDescending(arr,size);
    
    printf("After sorting, the array in descending order is: ");
    printArray(arr,size);

    return 0;
}
