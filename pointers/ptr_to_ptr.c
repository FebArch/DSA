#include <stdio.h>

int main(){
    int num = 23;
    int *num_ptr = &num;
    int **ptr_ptr = &num_ptr;

    printf("Value of num is %d\n", num);
    printf("Address of num is %p\n", &num);

    printf("Value of num is (dereferencing): %d\n", *num_ptr);
    printf("Address of num is %p\n", num_ptr);

    printf("Value of num_ptr is %d\n", **ptr_ptr);  // double dereferencing
    printf("Address of num_ptr is %p\n", ptr_ptr);
    return 0;
}