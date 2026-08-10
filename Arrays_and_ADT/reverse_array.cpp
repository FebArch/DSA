#include <iostream>

using namespace std;

void display(int *arr, int len);

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    for (int i = 0; i < (size/2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
    display(arr, size);

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