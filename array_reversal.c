#include <stdio.h>

void reverseArray(int *arr, int len);
void displayArray(int *arr, int len);

int main(){
    int arr[] = {7,8,9,1, 6, 77, 3};
    int len = 7;
    reverseArray(arr, len);
    displayArray(arr, len);
    return 0;
}

void displayArray(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *arr);
        arr++;
    }
    printf("\b\b}\n");
}

void reverseArray(int *arr, int len){
    int *left = arr;
    int *right = (arr+len-1);
    int temp;

    for (int i = 0; i < (len/2); i++)
    {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }   
}