#include <stdio.h>
#include <stdlib.h>

void display(int *arr, int len);
void merge_sort(int *arr1, int *arr2, int* arr, int arr1Size, int arr2Size);

int main(){
    int arr1len=5, arr2len=8;
    int arr1[5] = {1,3,5,7,91};
    int arr2[8] = {1,4,6,8,10,12,14, 16};
    int* arr = (int *) malloc((arr1len+arr2len) * sizeof(int));

    display(arr1, arr1len);
    display(arr2, arr2len);
    merge_sort(arr1, arr2, arr, arr1len, arr2len);
    display(arr, (arr1len+arr2len));
    return 0;
}

void display(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *(arr));
        arr++;
    }
    printf("\b\b}\n");    
}







void merge_sort(int *arr1, int *arr2, int* arr, int arr1Size, int arr2Size){
        
    if (arr1Size==0 && arr2Size==0)
    {
        return;
    }

    if (arr1Size==0 && arr2Size > 0)
    {
        *arr = *arr2;
        arr2Size--;
        merge_sort(arr1, (arr2+1), (arr+1), arr1Size, arr2Size);
    }else if(arr2Size==0 && arr1Size>0){
        *arr = *arr1;
        arr1Size--;
        merge_sort((arr1+1), arr2, (arr+1),arr1Size, arr2Size);
    }
    
    if ( arr1Size > 0 && *arr1 <= *arr2)
    {
        *arr = *arr1;
        arr1Size--;
        merge_sort((arr1+1), arr2, (arr+1), arr1Size, arr2Size);
    }
    else if (arr2Size > 0 && *arr1 > *arr2)
    {
        *arr = *arr2;
        arr2Size--;
        merge_sort(arr1, (arr2+1), (arr+1), arr1Size, arr2Size);
    }
    
}



