#include <iostream>
using namespace std;

int fibonacci(int n){

    return 1;
}

int main(){
    int n=5;
    int f = 0, s = 1, t=f+s;
    // cout << "fibonacci of " << n <<" naturals number is: " << fibonacci(n) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << f << ", "; // 0 1 1 2
        f=s; // 1 1 2
        s = s+f; // 1 2 3
    }
    
    return 0;
}