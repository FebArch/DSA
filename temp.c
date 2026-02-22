#include <stdio.h>
#include <string.h>

int main(){
    char s1[16] = "harry is bad boy";
    char s2[16];

    for (int i = 10; i < strlen(s1); i++)
    {
        *(s2+i) = 'p';
    }
    
    for (int i = 0; i < 15; i++)
    {
        printf("%c,", *(s2+i));
    }
    
}