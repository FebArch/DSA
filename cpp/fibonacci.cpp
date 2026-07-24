#include <iostream>

using namespace std;

int fibonacci(int n){
    int t1=0, t2=1;
    int next;
    for (int i = 0; i <= n-2; i++)
    {
        next = t1+t2;
        t1=t2;
        t2=next;
    }
    return next;
}

int main(){
    //0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    int index = 6;
    cout << index << "th element of Fibonacci Series is: " << fibonacci(index);
    return 0;
}