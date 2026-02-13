#include <stdio.h>

void printArray(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *(arr+i));
    }
    printf("\b\b}\n");
}

void printArrayElementsAddresses(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        // printf("%p, ", *arr);
        // arr++;
        printf("%p, ", *(arr+i));
    }
    printf("\b\b}\n");
}

int main(){
    int arr[5] = {12, 24, 36, 48, 60};
    printArray(arr, 5);
    // printArrayElementsAddresses(arr, 5);
    return 0;
}