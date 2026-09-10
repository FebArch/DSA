#include <iostream>
using namespace std;

int sum(int n){
    if (n==0)
    {
        return n;
    }
    return n += sum(n-1);
}

int main(){
    int n=4;
    cout << "Sum of " << n <<" naturals number is: " << sum(n) << endl;
    return 0;
}