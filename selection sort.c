/*
If this were an interview...

Suppose I asked:

"Implement selection sort."

If you wrote this from scratch in 10–15 minutes, I'd be happy.

I'd then ask follow-up questions:

What's the time complexity?
Is it stable?
Can it be made stable?
Best-case complexity?
Why does it use fewer swaps than bubble sort?

Those questions test your understanding beyond implementation.
*/

#include <stdio.h>

void displayArray(int *arr, int len);

int main()
{
    int arr[6] = {2, 34, 6, 1, 93, 7};
    int len = 6, temp = 0;

    displayArray(arr, len);

    for (int i = 0; i < len; i++)
    {
        // assuming 1st element as smallest number here to start looping and checking and finding out the smallest element within the array
        // int minNum = arr[i];
        int minNumIndex = i;
       
        for (int j = (i+1); j < len; j++)
        {
            if (arr[minNumIndex] > arr[j])
            {
                // minNum = arr[j];
                minNumIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minNumIndex];
        arr[minNumIndex] = temp;

    }

    displayArray(arr, len);

    return 0;
}

void displayArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}