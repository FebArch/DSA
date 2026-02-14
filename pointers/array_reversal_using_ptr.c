#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int len){
    for (int j = 0; j < len; j++)
    {
        printf("%d, ", arr[j]);
    }
    printf("\n");    
}

void reverseArray(int *arr, int len){
    int temp=0;
    for (int i = 0; i < (len/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i] = temp;
    }
}

int main(){
    int arr[5] = {10,20,30,40, 50};
    int length=5;
    display(arr, length);
    reverseArray(arr, length);
    display(arr, length);
    return 0;
}