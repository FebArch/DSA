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
    int temp, i = 0;
    bool passthrough = true;

    while(passthrough)
    {
        for (int j = 0; j < len; j++)
        {
            
            if (j+1 == len)
            {
                continue;
            }
            else if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                passthrough = true;
                // cout << j << "true\n";
                continue;
            }
            else
            {
                // cout << j << "false\n" << arr[j] <<" , "<< arr[j + 1] << endl; 
                passthrough = false;
            }
        }
        if (passthrough)
        {
            len--;
        }
    }

    displayArray(arr, size);
    return 0;
}