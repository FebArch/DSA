#include <iostream>
using namespace std;


int main(){
    string cars[4] = {"Volvo", "Tesla", "Tata", "BMW", };
    for (string car : cars)
    {
        cout << car <<"\n";
    }
    cars[5] = "Toyota";
    cout << cars[5];
    return 0;
}