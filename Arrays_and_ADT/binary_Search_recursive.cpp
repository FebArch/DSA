#include <iostream>
using namespace std;

int search(int *arr, int low, int high, int element){

    if (element == arr[low])
    {
        return low;
    }else if(element == arr[high]){
        return high;
    }
    
    int mid = (high+low) / 2;

    if (arr[mid] == element)
    {
        return mid;
    }
    


}

int main(){
    int len = 12;
    int arr[12]= {10, 23, 25, 30, 35, 41, 49, 52, 53, 60, 67, 70};
    int element = 53;
    int index = search(arr, 0, len, element);
    

    return 0;
}