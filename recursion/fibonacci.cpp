#include <iostream>
using namespace std;

int fibonacci(int n){
    //0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    if (n==0)
    {
        return 0;
    }else if(n==1){
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n=6;
    cout << n << "th element in Fibonacci series is " <<fibonacci(n);
    return 0;
}