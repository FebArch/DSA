#include <iostream>
using namespace std;

void countdown(int n){
    cout << n <<endl;
    if (n==0)
    {
        return;
    }
    
    countdown(n-1);
}

int main(){
    countdown(10);
    return 0;
}