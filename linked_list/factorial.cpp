#include <iostream>
using namespace std;

int factorial(int n){
    if (n==1)
    {
        return 1;
    }
    
    return n * (factorial(n-1));
}

int main(){
    int n = 5;
    cout << "Factorial of " << n << " is: " << factorial(4) << endl;
    cout << "Factorial of " << n << " is: " << factorial(5) << endl;
    cout << "Factorial of " << n << " is: " << factorial(10) << endl;
    return 0;
}