#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2){
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << ", ";
            }
        }        
    }    
}

int main(){
    int arr1[3] = {1,3,4};
    int size1 = sizeof(arr1)/sizeof(int);
    int arr2[6] = {1,2,3,4,5,6};
    int size2 = sizeof(arr2)/sizeof(int);
    
    intersection(arr1, arr2, size1, size2);
    return 0;
}