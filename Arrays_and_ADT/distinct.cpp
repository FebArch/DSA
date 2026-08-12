#include <iostream>
using namespace std;

void printDistinct(int arr[], int sz){
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            if (i==j)
            {
                continue;
            }else if(1){

            }
            
        }
        
    }
    
}

int main(){
    int arr[] = {11,14,14,51, 8, 9, 8};
    int size = sizeof(arr)/sizeof(int);
    printDistinct(arr, size);
    return 0;
}