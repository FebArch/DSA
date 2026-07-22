#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "a+b = " << a+b << endl;
    cout << "a-b = " << a-b << endl;
    cout << "a*b = " << a*b << endl;
    cout << "a/b = " << (float) a/b << endl;
    cout << "a%b = " << a%b << endl;
    return 0;
}