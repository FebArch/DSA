#include<iostream>
#include<vector>
#include<string>

using namespace std;

int reverseNumber(int n){
    // 2345
    int m=0, adder=0;
    while (n != 0)
    {
        adder = n % 10;
        m = (m*10) + adder;
        n /= 10;
    }
    return m;
}

int main() {
    int num = 12345;
    int reversedNum = reverseNumber(num);

    cout << "Original Number: " << num << endl;
    cout << "Reversed Number: " << reversedNum << endl;
    
    return 0;
}

