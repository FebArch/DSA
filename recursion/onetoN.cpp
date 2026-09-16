#include <iostream>
using namespace std;

void printNumbers(int n){
    if (n==0)
    {
        return;
    }
    cout << n << ", ";
    printNumbers(n-1);
}

int main(){
    int num;
    cout << "Enter Your Number: ";
    cin >> num;
    printNumbers(num);
    return 0;
}