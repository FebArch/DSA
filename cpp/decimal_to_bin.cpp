#include <iostream>
using namespace std;

void printBinaryForm(int n)
{
    cout << n << ">>" << n%2 << "\n";
    if (n < 1)
    {
        return;
    }
    printBinaryForm(n/2);
    cout << n%2;     
}

void binaryForm(int n){
    for (int i = n; i > 0; i/=2)  // 5   2   1
    {
        cout << i << "-" << i%2<<endl;
        // break;
    }
    
}

int main()
{
    // printBinaryForm(12);
    binaryForm(5);
    return 0;
}