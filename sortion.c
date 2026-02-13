#include <stdio.h>

void display(int *arr, int len){
    printf("{");
    for(int i=0; i<len; i++){
        printf("%d, ", *arr);
        arr++;
    }
    printf("\b\b}");
}

void sortion(int *arr, int len){
    for(int i=0; i<len; i++){
        int temp=0;
        for(int j=0; j<=i+1; j++){
            if(arr[i]<arr[j]){
                temp=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]=temp; 
            }
        }
    }
} 

int main(){
    int len=7;
    int arr[7] = {56, 34, 77, 21, 145, 876};
    sortion(arr, len);
    display(arr, len);

    return 0;
}