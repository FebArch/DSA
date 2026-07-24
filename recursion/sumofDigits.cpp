#include <iostream>
using namespace std;

int sumofDigits(int n){
    int sum=n%10;
    if (n <= 0)
    {
        return 0;
    }
    // cout << n <<endl;
    return sum += sumofDigits(n/10);
}
/*
1234
123
12
1

*/

int main(){
    int n = 12345;
    cout << "Sum of " << n << " is "<< sumofDigits(n) <<endl;
    return 0;
}