#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int num1, int num2){
    int max = (num1>num2) ? num1 : num2;
    // printf("%d, %d,", num1, num2);

    for (int i = max; i > 0; i--)
    {
        if (num1%i==0 && num2%i==0)
        {
            return i;
        }
        
    }
    return -1;
}

char* gcdOfStrings(char* str1, char* str2) 
{
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    int newStrLen = gcd(str1Len, str2Len);
    char* newStr = (char*) malloc(newStrLen*sizeof(char));
    // char* ptr = newStr;
    // printf("len %d", str1Len);

    int i=0, j=0, k=0;

    while(i<str1Len){
        if (str1[i] == str2[j] && (k < newStrLen)) // 012
        {
            newStr[k] = str1[i];

        }else if(str1[i] != str2[j]){
            newStr="";
            // printf("deo %d %d\n", i, j);
            break;
        }   
        i++;
        k = (k+1) % newStrLen; 
        j= (j+1)%str2Len;
    }
    if (newStr[newStrLen])
    {
        newStr[newStrLen] = '\0';
    }
    
    return newStr;
}

int main(){

    char* str = gcdOfStrings("ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZQJXZKMPVYWTBAOHNRLIEGDSCUFABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZZYXWVUTSRQPONMLKJIHGFEDCBAABCDEFGHIJKLMNOPQRSTUVWXYZ");
    // char* str = gcdOfStrings("LEET", "CODE");
    printf(">> %s", str);
    return 0;
    
}