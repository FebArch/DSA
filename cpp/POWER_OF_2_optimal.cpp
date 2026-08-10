#include <iostream>
using namespace std;

bool isPowerOf2(int n){
    int temp = n;
    bool yesPowerOfTwo = false;

    if (((temp << 1) & n) == 0)
    {
        yesPowerOfTwo = true;
    }
    return yesPowerOfTwo;    
}

int main(){
    int n = 42;
    if (isPowerOf2(n))
    {
        cout << "Yes number is power of 2" << endl;
    }else{
        cout << "No number is not a power of 2" << endl;
    }
    
    return 0;
}