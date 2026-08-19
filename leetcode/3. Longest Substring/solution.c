#include <stdio.h>

int longestSubstringSize(char* str);

int main(){
    char *str = "abcabcbb";
    int result = longestSubstringSize(str);
    printf("Result: %d\n", result);
    return 0;
}

int longestSubstringSize(char* str){
    int i = 0, max=0;
    while (str[i] != '\0')
    {
        int j=i+1, count=0, lastCharIndex;
        
        while (str[j] != '\0')
        {
            if (str[i] != str[j])
            {
                count++;
                printf("1 %d\n", count);
            }else{
                lastCharIndex = j;
                printf("lastIndex %d\n", lastCharIndex);
                break;
            }
            j++;
        }
        
        int k=i+1; //b
        while (k < lastCharIndex && (k+1)<lastCharIndex)
        {
            if (str[k] != str[k+1])
            {
                count++;
                printf("2. %d\n", count);
            }
            else{
                break;
            }
            k++;
        }
        if (max<count)
        {
            max = count;
        }
        
        i++;
    }
    return max;
}