#include <stdio.h>

void sortedArrayInsertion(int *arr, int len, int element)
{
    *(arr+(len-1)) = element;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = 0;
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void display(int *arr, int len){
    printf("{");
    for (int k = 0; k < len; k++)
    {
        printf("%d, ", arr[k]);
    }
    printf("\b\b}\n");
}


int main()
{
    int arr[6] = {10, 14, 7, 19, 3};
    int len = 6;
    display(arr, len);
    sortedArrayInsertion(arr, len, 12);
    display(arr, len);

    return 0;
}