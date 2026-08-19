#include <stdio.h>
#include <stdlib.h>

char* mergeAlternately(char* word1, char* word2){
    int index=0, strIndex=0;
    char* mergedString = (char*) malloc(201);
    char *ptr = mergedString;

    while (word1[index] != '\0' || word2[index] != '\0')
    {
        printf("hello %c\n", word2[index]);
        if (word1[index] != '\0'  && word2[index] == '\0')
        {
            *ptr = word1[index];
        }else if(word1[index] == '\0' && word2[index] != '\0'){
            *ptr = word2[index];
        }else{
            *ptr = word1[index];
            ptr++;
            *ptr = word2[index];
        }
        ptr++;
        index++;
    }

    *ptr = '\0';
    return mergedString;
}

int main(){
    char word1[] = "abcd";
    char word2[] = "pq";

    char* mergeString = mergeAlternately(word1, word2);
    printf("%s\n", mergeString);

    return 0;
}