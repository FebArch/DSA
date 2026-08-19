#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2){
    char* mergedStr = (char*) malloc(100*sizeof(char));
    // char* ptr = mergedStr;
    int word1Index=0, word2Index=0, strIndex=0;

    while (word1[word1Index] != '\0' || word2[word2Index] != '\0')
    {
        if (word1[word1Index] == '\0')
        {
            mergedStr[strIndex] = word2[word2Index];
            word2Index++;
        }
        else if (word2[word2Index] == '\0')
        {
            mergedStr[strIndex] = word1[word1Index];
            word1Index++;
        }
        else if (word1Index == word2Index)
        {
            mergedStr[strIndex] = word1[word1Index];
            word1Index++;
            
        }else if(word1Index > word2Index){
            mergedStr[strIndex] = word2[word2Index];
            word2Index++;
        }
        
        strIndex++;
    }
    mergedStr[strIndex] = '\0';
    return mergedStr;
}

int main(){
    char word1[] = "abcd";
    char word2[] = "pq";

    char *mergeString = mergeAlternately(word1, word2);
    printf("%s\n", mergeString);

    free(mergeString);
    return 0;
}