#include <iostream>
using namespace std;

void sort(int *arr, int len);
void display(int *arr, int len);

int main()
{
    int len = 5;
    int arr[len] = {4, 3, 1, 7, 5};
    // int arr[len] = {1,3,4,7,5};
    display(arr, len);
    cout << "Sorted Array: \n";
    sort(arr, len);
    display(arr, len);
    return 0;
}

void sort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        int index = i;
        for (int j = (i + 1); j < len; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }

        int swap = arr[i];
        arr[i] = arr[index];
        arr[index] = swap;
    }
}

void display(int *arr, int len)
{
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *(arr));
        arr++;
    }
    printf("\b\b}\n");
}