#include <stdio.h>

int longestSubstringSize(char* str);

int main(){
    char *str = "abcabcbb";
    int result = longestSubstringSize(str);
    printf("Result: %d\n", result);
    return 0;
}

int longestSubstringSize(char* str){
    int count=0;
    if (*(str) == *(str+1) || *(str) == '\0')
    {
        return 0;
    }
    
    return 1 + longestSubstringSize(str+1);
}