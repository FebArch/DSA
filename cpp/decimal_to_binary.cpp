#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    double answer = 1;
    if (n == 0)
    {
        return 1;
    }

    for (int i = n; i > 0; i /= 2)
    {
        if (i % 2 == 1)
        {
            answer *= x;
        }
        x *= x;
    }
    return answer;
}

int getDecimal(int n)
{
    if (n < 1)
    {
        return -1;
    }

    int d = 0;
    int i = n, index = 0;
    while (i != 0)
    {
        if (i % 2 == 1)
        {
            d += myPow(2, index);
            cout << "d vlaue is: " << d << "\n";
        }
        index++;
        i /= 10; // i will be either 1 or zero;
    }
    return d;
}


int getDecimal(char* c)
{
    int decimal=0;
    for (int i = 0; i < 4; i++)
    {
        if (*(c+i) == '1')
        {
            decimal += myPow(2, i);
        }
    }
    return decimal;
}

int main()
{
    int binary = 110;

    // cout << "2^3 = " << myPow(2,5);
    cout << "Binary = " << binary << endl;
    cout << "Decimal = " << getDecimal(binary) << endl;
    return 0;
}