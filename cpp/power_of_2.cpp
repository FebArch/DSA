#include <iostream>
using namespace std;

bool isPowerOf2(int n){
    bool yesPowerOfTwo = false;
    for (int i = 1; i <= n; i *= 2)
    {
        if (i == n)
        {
            yesPowerOfTwo = true;
        }                
    }
    return yesPowerOfTwo;    
}

int main(){
    int n = 0;
    if (isPowerOf2(n))
    {
        cout << "Yes number is power of 2" << endl;
    }else{
        cout << "No number is not a power of 2" << endl;
    }
    
    return 0;
}