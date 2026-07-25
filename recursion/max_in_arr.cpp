#include <iostream>
using namespace std;

int findMax(int* arr, int len){
    int max = *arr;  // 5   
    if (len == 1)
    {
        return *arr;
    }
    int ptr = findMax(arr+1, len-1); // 5
    
    if (max < ptr)
    {
        max = ptr;
    }
    
    return max;
}

int main(){
    int arr[] = {2, 8, 11, 10, 5, 99};
    int len = sizeof(arr)/sizeof(int);
    int result = findMax(arr, len);
    cout << "Maximum " << result <<endl;
    return 0;
}