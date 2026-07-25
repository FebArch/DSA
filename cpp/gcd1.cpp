// Listing Comman Factor method

#include <iostream>
using namespace std;

int gcd(int m, int n){
    int max = (n>m) ? n : m;
    int commanDivisor[10];
    int index=0;
    // cout << max <<endl;
    for (int i = max; i >= 1; i--)
    {
        if (m%i == 0 && n%i == 0)
        {
            commanDivisor[index] = i;
            index++;
        }
    }
    
    cout << commanDivisor[0] << endl;


}

int main(){
    int m=30, n=45;
    // cout << "GCD of " << m << " and " << n << " is " << gcd(m,n); 
    gcd(m,n);
    return 0;
}
