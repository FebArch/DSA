#include <iostream>
using namespace std;

void displayArray(int *arr, int len)
{
    cout << "{";
    for (int i = 0; i < len; i++)
    {
        cout << *(arr + i) << ", ";
    }
    cout << "\b\b}" << endl;
}

int main()
{
    int len = 5;
    int size = len;
    int arr[len] = {1, 3, 7, 2, 5};
    int temp;
    bool passthrough = true;

    cout << "Unsorted Array: \n";
    displayArray(arr, size);

    while(passthrough)
    {
        for (int i = 0; i < (len-1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                passthrough = true;
                continue;
            }
            else
            {
                passthrough = false;
            }
        }
        if (passthrough)
        {
            len--;
        }
    }
    cout << "Sorted Array: \n";
    displayArray(arr, size);
    return 0;
}