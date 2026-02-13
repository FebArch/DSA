#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 9, b = 7;
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);

    swap(&a, &b);

    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    return 0;
}