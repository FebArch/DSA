#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseWords(char *s)
{
    char word[10000];
    int wi = -1, i = (strlen(s) - 1), j;
    char *newStr = (char *) malloc(sizeof(char) * 10000);
    int index = 0;

    while (i > -1)
    {
        if (s[i] != ' ')
        {
            j = i;
            while (j > -1 && s[j] != ' ')
            {
                wi++;
                word[wi] = s[j];   //dlrow
                j--;
            }
            word[wi+1] = '\0';

            while (wi > -1)
            {
                newStr[index] = word[wi];

                wi--;
                index++;
            }
        }else{
            i--;
            continue;
        }
        newStr[index] = ' ';
        index++;
        i = j;
    }
    newStr[index-1] = '\0';

    return newStr;
}

int main()
{
    // char *s = "  hello   world  ";
    // char *s = "the sky is blue";
    char *s = "a good   example";
    char *r = reverseWords(s);
    printf("%s\n", r);
    printf("%s\n", s);

    return 0;
}