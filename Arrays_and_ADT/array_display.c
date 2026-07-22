#include <stdio.h>

void display(int *arr, int len);

int main(){
    int arr[4] = {1,21,30,4};
    int len = 4;
    display(&arr[0], len);
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