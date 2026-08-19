#include <stdio.h>

int maxProduct(int n){
    int max1 = -1;
    int max2 = -1;

    int digit = n;
    while (n != 0)   // 930
    {
        digit = n%10;   // 0
        if (digit > max1)
        {
            // printf("dgiig: %d\n", digit);
            max2 = max1;  // -1
            max1 = digit;  //
        }else if(digit > max2){
            max2 = digit;
        }
        n /= 10;
    }
    return max1*max2;
} 

int main(){
    int n = 930;
    int maxMul = maxProduct(n);
    printf("result: %d\n", maxMul);
    return 0;
}