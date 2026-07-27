#include <iostream>
using namespace std;

int max2nd(int*arr, int len){
    int max1=0;
    int max2=0;
    int max_digit = arr[0];
    for (int i = 0; i < len; i++)
    {
        max_digit = arr[i];
        if (max_digit > max1)
        {
            max2= max1;
            max1 = max_digit;
        }else if(max_digit > max2){
            max2  = max_digit;
        }
    }

    return max2;
    
}

int main(){
     int len=5;
    // int arr[len] = {2,5,6,9,1};
    int arr[len] = {7,3,9,1,8};
    cout << "Second largest digit in the array is " << max2nd(arr, len);
    return 0;
}