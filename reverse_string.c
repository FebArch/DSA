// Input: s = ”i.like.this.program.very.much”
// Output: much.very.program.this.like.i

#include <stdio.h>
#include <string.h>

void copyStr(char *s, char *str2)
{
    for (int i = 0; i < strlen(s); i++)
    {
        // str2[i] = *(s+i);
        *(str2 + i) = *(s + i);
    }
};

void prependWord(char *str, char *word){

}

void printWord(char *c, int upperLimit, int lowerLimit){
    char word[10];
    for (int i = lowerLimit; i <= (upperLimit-1); i++)
    {
        if (i==(upperLimit-1))
        {
            word[i-lowerLimit] = '\0';
        }else{
        word[i-lowerLimit] = *(c+i);
        }
    }
    printf("%s\n", word);
}

int main()
{
    char s[] = "like.this.program.very.much";
    char str2[28];
    int lowerLimit=strlen(s), upperLimit=strlen(s);

    for (int i = (strlen(s)-1); i >= 0; i--)
    {
        lowerLimit--;
        if (*(s+i) == '.')
        {
            printf(">>>%d\n", lowerLimit);
            for (int j = lowerLimit+1; j < upperLimit; j++)
            {
                *(str2+j-lowerLimit) = *(s+j);
            }
            upperLimit = lowerLimit;
            continue;
        }

    }
    
    
    for (int i = 0; i < 15; i++)
    {
        printf("%c,", *(str2+i));
    }

    return 0;
}