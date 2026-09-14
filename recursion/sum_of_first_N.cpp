#include <iostream>
using namespace std;

int mySum(int n){
    if (n==0)
    {
        return n;
    }
    return n + mySum(n-1); 
};

int main(){
    int number, x;
    cout << "Enter Your Number: ";
    cin >> number;

    cout << "Sum of first " << number << " is " << mySum(number);
}