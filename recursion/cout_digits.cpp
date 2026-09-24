#include<iostream>
#include<vector>
#include<string>

using namespace std;

int count_digits(int n);

int main() {
    int num = -1987;
    cout << "Number of digits in " << num << " is " << count_digits(num) << endl;
    return 0;
}

int count_digits(int n){
    if ((n/10) == 0)
    {
        return 1;
    }
    n=n/10;
    int count = 1;
    return count + count_digits(n);
}
