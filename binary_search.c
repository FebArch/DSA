#include <stdio.h>

int binarySearch(int* ptr,int size, int element);

int main(){
    int element = 9;
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int index = binarySearch(arr, 9, element);
    printf("Index of %d is %d\n", element, index);

    return 0;
}

int binarySearch(int* ptr,int size, int element){
    // 1 2 3 4 5 6 7 8 9;  // 7    
    int firstIndex = 0, lastIndex = size-1;

    for (int i = 0; i < lastIndex; i = (int) (firstIndex+lastIndex)/2)
    {
        if (ptr[i] == element)    // 0     4       //  6     
        {
            return i;
        }else if(ptr[size-1] == element){
            return (size-1);
        }
        else if(ptr[i] < element){
            firstIndex = i; //            0               4                  6
        }else if(ptr[i] > element){
            lastIndex = i;
        }        
    }
    
}
