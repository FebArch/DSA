#include <stdio.h>

void displayArray(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        // printf("%d, ", *(arr+i));
        printf("%d, ", *arr);
        arr++;
    }
    printf("\b\b}\n");
}

int checkArray(int *arr, int len){
    int count=0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j] && i!=j)
            {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {1, 4, 56, 77, 12};
    int len = 5;
    displayArray(arr, len);
    int result = checkArray(arr, len);

    if (result>0)
    {
        printf("Yes there element is repetition in array!");
    }else{
        printf("There is no element repetition in array!");
    }
    
    return 0;
}