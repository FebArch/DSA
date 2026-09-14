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
    int sz = len-1;
    int arr[len] = {6,5,3,2,1};
    int temp;
    bool passthrough = true;

    cout << "Unsorted Array: \n";
    displayArray(arr, len);

    while(passthrough)
    {
        cout << "passthrough is true " << endl;
        for (int i = 0; i < sz; i++)
        {
            cout << sz << endl;
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                passthrough = true;
            }
            else
            {
                cout << "passthrough is false " << endl;
                passthrough = false;
            }
        }
        if (passthrough)
        {
            sz--;
        }
    }
    cout << "Sorted Array: \n";
    displayArray(arr, len);
    return 0;
}