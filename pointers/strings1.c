#include <stdio.h>

int main(){
    char s[] = {'H', 'a', 'r', 'r', 'y', '\0'};
    // char s[] = "Harry";

    for (int i = 0; i < 6; i++)
    {
        printf("%p, ", s+i);
    }

    
    
    return 0;
}