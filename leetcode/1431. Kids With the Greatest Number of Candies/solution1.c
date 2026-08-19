#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    
    int yesBigger;

    bool* result = (bool*) malloc(candiesSize);
    for (int i = 0; i < candiesSize; i++)
    {
        yesBigger=0;
        for (int j = 0; j < candiesSize; j++)
        {
            if (candies[j] <= (candies[i] + extraCandies))
            {
                yesBigger++;
            }
        }   
        if (yesBigger==candiesSize)
        {
            result[i] = 1;
        }else{
            result[i] = 0;
        }
          
    }
    *returnSize = candiesSize;
    return result;
}

int main(){
    int len=5;
    int candies[5] = {4,2,1,1,2};
    int extraCandies = 1;
    int* returnSize;

    // [1,1,1,0,1] 

    bool* result = kidsWithCandies(candies, len, extraCandies, returnSize);

    for (int i = 0; i < len; i++)
    {
        printf("%d, ", result[i]);
    }
    
    return 0;
}