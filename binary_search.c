#include <stdio.h>

int binarySearch(int* ptr,int size, int element);

int main(){
    int element = 2;
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int index = binarySearch(arr, 9, element);
    printf("Index of %d is %d\n", element, index);

    return 0;
}

int binarySearch(int* ptr,int size, int element){
    // 1 2 3 4 5 6 7 8 9;  // 7    
    int firstElement = 0, lastElement = size-1;

    for (int i = 0; i < lastElement; i = (int) (firstElement+lastElement)/2)
    {
        if (ptr[i] == element)    // 0     4       //  6     
        {
            return i;
        }else if(ptr[i] < element){
            firstElement = i; //            0               4                  6
        }else if(ptr[i] > element){
            lastElement = i;
        }        
    }
    
}
