#include <stdio.h>

int myPow(int x, int n){
    int i=0;
    int ans = 1;
    while (n>0) // 10   5    2
    {
        if (n%2 == 1)  // 1
        {
            ans *= x; //20   8
        }
        x*=x; 
        n/=2;
    }
    return ans;
}

int toDec(int bin){
    int n=0;
    int power=0;
    while (bin > 0)
    {
        if (bin%10 == 1)
        {
            n += myPow(2, power);
        }
        bin/=10;
        power++;
    }
    return n;
}

int main(){
    int binary = 101010; //5
    int n = toDec(binary);
    printf("%d\n", n);
    return 0;
}