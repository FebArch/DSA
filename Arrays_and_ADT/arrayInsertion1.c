// insert() function inserts an element at given index (no sortion or any other operation)

#include <stdio.h>

void insert(int* arr, int size, int index, int element);
void display(int *arr, int len);

int main(){
    int arr[5] = {11,2,4,51};
    int len = 5;
    int index = 2, e=24;
    insert(arr, len, index, e);
    display(arr, len);
    return 0;
}

void insert(int* arr, int size, int index, int element){
    int temp;
    for (int i = index; i < size; i++)
    {
        temp = arr[i];  // 4, 
        arr[i] = element; // 24
        element = temp; // 4
        printf("%d, ", arr[i]);
    }
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


