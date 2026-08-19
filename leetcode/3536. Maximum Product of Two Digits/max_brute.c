#include <stdio.h>

int maxProduct(int n)
{
    int maxDigit=0, maxDigitCount=0;
    int remainingDigits = n, lastDigit, product=1;
    int num = n;
    int tenExp=1;
    while (maxDigitCount<2)
    {
        while (remainingDigits > 0)
        {
            remainingDigits /= 10;
            lastDigit = num - (remainingDigits*10); 

            num = remainingDigits;
            if (maxDigit <= lastDigit)
            {
                
                maxDigit = lastDigit;
                tenExp *= 10; 
            }
        }

        if (tenExp == 10)
        {
            tenExp = 1;
        }else{
            tenExp /= 10;
        }
        
        remainingDigits = n - ((maxDigit-1)*tenExp);
        num = remainingDigits;
        product *= maxDigit;
        maxDigit = 0;
        maxDigitCount++;
    }
    return product;
}

int main()
{
    int n = 20;
    // 911  786   119-90;
    int max = maxProduct(n);
    // printf("Maximum: %d", max);

    // printf("remainder: %d\n", 987%2);  // 7  8
    printf("remainder: %d\n", 987/10);  // 98  9
    printf("remainder: %d\n", 98/10);  // 98  9
    printf("remainder: %d\n", 9%10);  // 98  9
    return 0;
}


/*
remainingDigits /= 10; // 297 -> 29
        lastDigit = num - (remainingDigits*10);
        num = remainingDigits;
        if (maxDigit < lastDigit)
        {
            maxDigit = lastDigit;
            // remainingDigits = n - (maxDigit*tenExp);
        }
        tenExp *=10;
*/