#include <iostream>
using namespace std;
int main(){
    float celcius;
    cout << "Enter the tempreture in celcius: ";
    cin >> celcius;

    float far = (celcius*9/5) + 32;
    cout << "Tempreture in fahrenheit is " << far << endl;
    return 0;
}