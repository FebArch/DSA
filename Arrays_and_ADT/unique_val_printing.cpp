#include <iostream>
using namespace std;

void printUnique(int arr[], int sz){
    bool isUnique=false;
    for (int i = 0; i < sz; i++)
    {
        // {11,14,14,51,51, 8, 9, 8};
        for (int j = 0; j < sz; j++)
        {
            if (i==j)
            {
                continue;
            }            
            else if (arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }else{
                isUnique = true;
            }
            
        }
        
        if (isUnique)
        {
            cout << arr[i] << ", ";
        }
        
    }
    
}

int main(){
    int arr[] = {11,14,14,51, 8, 9, 8};
    int size = sizeof(arr)/sizeof(int);
    printUnique(arr, size);
    return 0;
}
