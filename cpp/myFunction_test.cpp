#include<iostream>
#include<vector>
#include<string>

using namespace std;

void myFunction(){
    int i = 10;
    cout << "Value of i: " << i << endl;
    {
        int a;
        cout << "Enter Your Number: ";
        cin >> a;
        cout << "2 x " << a << " = " << 2*a;
    }
}

int main() {
    cout << "Hello World" << endl;
    myFunction();
    return 0;
}

