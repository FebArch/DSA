#include <stdio.h>

int search(int* ptr,int size, int element);

int main(){
    int element = 56;
    int arr[10] = {37,12,28,9,100,56,80,5,12};
    int index = search(arr, 9, element);
    printf("Index of %d is %d\n", element, index);
    return 0;
}

int search(int* ptr, int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (element == ptr[i])
        {
            return i;
        }else{
            continue;
        }
    }
}