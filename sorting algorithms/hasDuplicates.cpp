#include <iostream>
using namespace std;

bool hasDuplicates(int *arr, int len){
    int existingArr[len] = {0,0,0,0,0,0,0};
    for (int i = 0; i < len; i++)
    {

        if (existingArr[arr[i]] != 1)
        {
            existingArr[arr[i]] = 1;
        }else{
            return true;
        }        
    }
    return false;
}

int main(){ 
    int arr[] = {1,2,3,1,4};
    int len = sizeof(arr) / sizeof(arr[0]);
    bool result = hasDuplicates(arr, len);
    if (result)
    {
        cout << "yes the array contain duplicate value(s)" <<endl;
    }else{
        cout << "No the array does not contain duplicate value(s)" <<endl;
    }
    
    return 0;
}