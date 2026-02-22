#include <stdio.h>

void display(int *a, int length)
{
    printf("{");
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\b\b}\n");
}

int findMax(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[0];
}

int main()
{
    printf("Stock Buy and Sell Problem\n");
    int prices[] = {7, 10, 1, 3, 6, 9, 2};
    int diff[21];
    int len = 7, count = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            printf("%d, ", j);

            diff[count] = prices[j] - prices[i];
            count++;
        }
    }
    // display(diff, 21);
    int r = findMax(diff, 21);
    printf("%d, \n", r);
    return 0;
}