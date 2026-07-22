#include <stdio.h>

int main(){
    int n=6;
    // int arr[n] = {1,2,3,4,5,6};
    int arr[n];
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Summation of elements in array is %d\n", sum);

    return 0;
}