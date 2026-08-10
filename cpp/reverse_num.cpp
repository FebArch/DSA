#include <iostream>
using namespace std;

int reverse(int n){
    int i = n;
    int rNum=0;
    
    while(n!=0){
        i = n % 10;
        rNum = (rNum * 10) + i;  // 2  23  
        n /= 10;
    }
    return rNum;    
}

int main(){
    int n = 4321;
    int result = reverse(n);
    cout << "Straight Number: " << n << endl;
    cout << "Reverse Number: " << result << endl;
    
    return 0;
}