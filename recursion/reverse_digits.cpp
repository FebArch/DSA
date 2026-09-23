#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;


int reverseNumber(int n, int m=0);

int main() {
    int num = -123;

    cout << "Original Number: " << num << endl;
    cout << "Reversed Number: " << reverseNumber(num) << endl;
    return 0;
}


int reverseNumber(int n, int m){
    if (n==0)
    {
        return m;
    }
    
    int adder = n % 10;
    m = (m*10) + adder;

    return reverseNumber((n/10), m);
}
