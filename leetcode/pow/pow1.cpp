#include <iostream>
using namespace std;

double myPow(double x, int n){
    long power = n;
    if (power<0)
    {
        x = 1 / x;
        power = -power;
    }else if(power==0){
        return 1;
    }
    

    double base = x;
    double answer =1;

    while (power > 0)
    {
        if (power%2 != 0)
        {
            answer *= base;
        }
        base *= base; 
        power /= 2;
    }
    
    return answer;
}

int main()
{
    cout <<  "result of 2^10 is: " << myPow(2, 10) << endl;
    cout <<  "result of 2^10 is: " << myPow(2.1, 3) << endl;
    cout <<  "result of 2^10 is: " << myPow(2, -2) << endl;
    return 0;
}