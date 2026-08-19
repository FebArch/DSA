// #include <iostream>
#include <stdio.h>

double myPow(double x, int n)
{
    double answer=1;
    double value=1;

    int power = (n<0) ? n*(-1) : n;
    double base = (n<0) ? ((double) 1/x) : x;
    
    while (power > 1)    // 10  5  
    {
        if (power % 2 == 0) //
        {
            base = base * base;
            // answer *= base;
            // value = 1;
            power /= 2;            
        }
        else
        {
            value = base;
            power -= 1;    
        }
    }

    return base*value;
}

int main()
{

    printf("2 raise to 8 is : %f\n", myPow(2,10));
    printf("2.1 raise to 3 is : %f\n", myPow(2.1,3));
    printf("2 raise to -2 is : %f\n", myPow(2,-2));

    return 0;
}
