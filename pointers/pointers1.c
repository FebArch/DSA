#include <stdio.h>

int main(){
    int a = 10;
    int *b = &a;

    printf("Value of a is %d\n", a);
    printf("Address of a is %p\n", &a);

    printf("Value of a is %d\n", *b);
    printf("Address of a is %p\n", b);

    printf("Address of b is %p\n", &b);
    return 0;
}