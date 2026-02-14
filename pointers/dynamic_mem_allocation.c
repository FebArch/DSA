#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int length){
    printf("{");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", *arr);
        arr++;
    }
    printf("\b\b}\n");
}

void stackMemAllocation(int *arr, int length){
    for (int i = 0; i < length; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void stackAddresses(int *arr, int length){
    for (int j = 0; j < length; j++)
    {
        printf(">>>>%p \n", arr);
        arr++;
    }
    printf("\n");
}

int *heapMemAllocation(int length){
    int *arr = (int *) malloc(length*sizeof(int));
    
    for (int i = 0; i < length; i++)
    {
        printf("Enter value for index %d (heap): ", i);
        scanf("%d", (arr+i));
    }
    return arr;
    // free(arr);
}

void heapAddresses(int *arr, int length){
    for (int j = 0; j < length; j++)
    {
        printf("-----%p \n", arr);
        arr++;
    }
    printf("\n");
}


int main(){
    int arr[3];
    int len=3;
    stackMemAllocation(arr, len);
    for (int j = 0; j < len; j++)
    {
        printf(">>>>%p \n", &arr[j]);
    }
    printf("\n");
    stackAddresses(arr, len);
    
    int *arr1 = heapMemAllocation(len);
    display(arr1, len);
    heapAddresses(arr1, len);
    for (int j = 0; j < len; j++)
    {
        printf("-----%p \n", &arr1[j]);
    }
    printf("\n");
    return 0;
}
