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


int* mergedArr(int*arr1, int *arr2, int arr1Size, int arr2Size){
    int i = 0, j = 0;
    int* arr = (int *) malloc((arr1Size+arr2Size) * sizeof(int));
    int k =0;

    while ( k< (arr1Size+arr2Size))
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }else if(arr2[j] < arr1[i]){
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    return arr;
}

int main(){
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,4,6,8,10};

    int* arr = mergedArr(arr1, arr2, 4, 5);

    displayArray(arr, 9);

    return 0;
}