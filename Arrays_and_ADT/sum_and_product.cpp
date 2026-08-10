#include <iostream>
using namespace std;

int product(int arr[], int size){
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {11,3,4,5,8};
    int size = sizeof(arr)/sizeof(int);

    int result = product(arr, size);
    result = product(arr, size);
    cout << "Product of all elements in the array is: "<< result <<endl;

    result = sum(arr, size);
    cout << "Sum of all elements in the array is: "<< result <<endl;
    return 0;
}