#include <stdio.h>
#include <string.h>

void displayString(char *s, int len){
    for (int i = 0; i < len; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

void stringSortion(char *c, int len){
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (c[i] < c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

int isValidAnagram(char *str1, char *str2){
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        else{
            return 1;
        }
    }
    
}

int main()
{
    char s[] = "zxy";
    char t[] = "wxz";

    int len = 3;
    // displayString(s, len);
    stringSortion(s, len);
    stringSortion(t, len);
    // displayString(s, len);
    int r = isValidAnagram(s, t);
    if (r)
    {
        printf("Yes the string is anagram!");
    }else{
        printf("No the string is not the anagram!");
    }
    
    return 0;
}