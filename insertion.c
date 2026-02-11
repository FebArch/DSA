#include <stdio.h>

void display(int *a, int length){
    printf("{");
    for(int i=0; i<length; i++){
        printf("%d, ", a[i]);
    }
    printf("\b\b}\n");
}

void append(int *arr, int length, int element){
    // printf("%p\n", arr);
    // printf("%d\n", *arr);
    // *(arr+(length-1)) = element;
    arr[length-1] = element;
}

void indexInsertion(int *arr, int length, int index, int element){
    int temp=0;
    for(int i=index; i<length; i++){
        // printf(">>>arr[%d]=%d e=%d\n", i, arr[i], element);
        temp = arr[i];
        arr[i] = element;
        element = temp;
    }
}



int main(){
    int arr[5] = {19,34,56,78};
    int len=5;
    display(arr, len);
    // append(arr, len, 9);
    // display(arr, len);
    indexInsertion(arr, len, 2, 89);
    display(arr, len);
    return 0;
}