#include <stdio.h>

void display(int *arr, int len);
void insertSort(int *arr, int len){
    // {4,1,2,7,5};
    for (int i = 0; i < len; i++)
    {
        int temp_value = arr[i]; //1
        for (int j = (i-1); j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                arr[i] = arr[j];
                arr[j] = temp_value;
            }   
        }
    }
}

int main(){
    int len = 5;
    int arr[5] = {4,1,2,7,5};
    insertSort(arr, len);
    display(arr, len);
    return 0;
}

void display(int *arr, int len)
{
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *(arr));
        arr++;
    }
    printf("\b\b}\n");
}