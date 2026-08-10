#include <iostream>
using namespace std;

int max(int arr[], int size){
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[maxIndex] < arr[i])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int min(int arr[], int size){
    int minIndex=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    }
    return minIndex;
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

int main(){
    int arr[5] = {11,3,4,5,8};
    int size = sizeof(arr)/sizeof(int);

    int minIndex = min(arr, size);
    int maxIndex = max(arr, size);
    display(arr, size);
    arr[minIndex] = arr[minIndex] + arr[maxIndex];
    arr[maxIndex] = arr[minIndex] - arr[maxIndex];
    arr[minIndex] = arr[minIndex] - arr[maxIndex];
    display(arr, size);
    return 0;
}