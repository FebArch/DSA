#include <stdio.h>

void deleteElement(int *arr, int* size, int element);
void display(int *arr, int len);


int main(){
    int arr[4] = {40,10,20,30};
    int size = 4;
    printf("Size of array before is: %d\n", size);
    display(arr, size);    // if element is not present it will pop the last element
    deleteElement(arr, &size, 140);
    display(arr, size);
    printf("Size of array after is: %d\n", size);
    return 0;
}

void deleteElement(int *arr, int* size, int element){
    for (int i = 0; i < *size; i++)
    {
        if ((i+1) == *size)     // 1 2 3 4
        {
            *(arr+i) = 0;  //
            *size -= 1;
        }
        else if (*(arr+i) == element)      // 40==10  10==10  20==20
        {  
            *(arr+i) = *(arr+i+1);    // 40 20 30 30
            element = *(arr+i+1);     // 30
            continue;
        }
    }   
}
        // else if (*(arr+i) == element && (i+1) < *size)

void display(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *(arr));
        arr++;
    }
    printf("\b\b}\n");    
}