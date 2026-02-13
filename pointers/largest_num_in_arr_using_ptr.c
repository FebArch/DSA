#include <stdio.h>

int findMax(int *arr, int len){
    int maxInt=0;
    for (int i = 0; i < len; i++)
    {
        // if (maxInt<=arr[i])
        if (maxInt<=(*arr))
        {
            maxInt = *arr;
        }
        arr++;
    }
    return maxInt;
}

int main(){
    int arr[6] = {12, 34, 189, 66, 111, 7};
    int r = findMax(arr, 6);
    printf("Maximum Integer in the array is %d\n", r);
    return 0;
}