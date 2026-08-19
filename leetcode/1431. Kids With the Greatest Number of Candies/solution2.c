#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool *kidsWithCandies(int *candies, int candiesSize, int extraCandies, int *returnSize)
{
    int max = candies[0];
    bool *result = (bool *)malloc(candiesSize);

    for (int i = 0; i < candiesSize; i++)
    {
        if (max < candies[i])
        {
            max = candies[i];
        }
    }

    for (int j = 0; j < candiesSize; j++)
    {
        printf("%d, %d\n", max, candies[j] + extraCandies);
        if (max > (candies[j] + extraCandies))
        {
            result[j] = 0;
        }
        else
        {
            result[j] = 1;
        }
    }

    *returnSize = candiesSize;
    return result;
}

int main()
{
    int len = 5;
    int candies[5] = {4, 2, 1, 1, 2};
    int extraCandies = 1;
    int *returnSize;

    // [1,1,1,0,1]

    bool *result = kidsWithCandies(candies, len, extraCandies, returnSize);
    // free(result);
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", result[i]);
    }

    return 0;
}