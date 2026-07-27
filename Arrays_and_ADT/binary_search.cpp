#include <iostream>
using namespace std;

int search(int *arr, int len, int element)
{
    int low = 0;
    int high = len - 1;
    int mid, steps = 0;
    while (mid != element)
    {
        if (*arr == element)
        {
            return low;
        }
        else if (*(arr + high) == element)
        {
            return high;
        };

        mid = (high + low) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (element < arr[mid])
        {
            high = mid;
        }
        else if (element > arr[mid])
        {
            low = mid;
        }
    }
    return mid;
}

int main()
{
    int len = 6;
    int arr[len] = {1, 2, 3, 4, 5, 9};

    int index = search(arr, len, 9);
    cout << index << endl;
    return 0;
}