#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(char *s, int numRows)
{
    char *newStr = (char *)malloc(strlen(s) * sizeof(char));
    int gap = numRows - 2;

    for (int i = 0; i < numRows; i++)
    {
        char *ptr = s + i;
        int j = 0;
        while (j < strlen(s))
        {
            if ((i == 0 || i == (numRows - 1)))
            {

                *(newStr + j) = ptr[j];
                printf("%c", *(newStr + j));
                j += gap + numRows; // 1+4
            }
            else
            {
                *(newStr + j) = ptr[j];
                printf("%c", *(newStr + j));
                j += numRows - gap; // 3-1
            }
        }
        printf("String %s\n", newStr);
    }


    return newStr;
}

/*

num of word=14
numrows = 4

PAYPALISHIRING -> PAHN APLSIIG YIR for row = 3
PAYPALISHIRING -> PINALSIGYAHRPI for row = 4


*/

int main()
{
    char *s = "PAYPALISHIRING";
    printf("Your Original String is: %s\n", s);
    char *newS = convert(s, 3);
    // printf("Your Zigzag Pattern is: %s\n", newS);
    return 0;
}