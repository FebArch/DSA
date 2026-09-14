#include <iostream>
using namespace std;

int pow(int n, int x){
    if (x==1)
    {
        return n;
    }
    return n * pow(n, (x-1)); 
};

int main(){
    int number, x;
    cout << "Enter Your Base Number: ";
    cin >> number;
    cout << "Enter Your Raise to Number: ";
    cin >> x;

    cout << number << " raise to " << x << " = " << pow(number, x);
}