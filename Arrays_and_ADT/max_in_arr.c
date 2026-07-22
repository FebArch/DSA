#include <stdio.h>

int main(){
    int arr[6] = {22, 4, 671, 88, 1};
    int max = *arr;

    for (int i = 1; i < 6; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }

    printf("Tha max number in array is %d\n", max);
    
    return 0;
}