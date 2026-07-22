#include<iostream>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout << "Enter Your Number: ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            // cout << "number is " << i;
        }
    }
    
    if (isPrime && num > 1)
    {
        cout << "Yes the Number " << num << " is a prime\n";
    }else{
        cout << "No the Number " << num << " is not a prime\n";
    }
    
    
    return 0;
}