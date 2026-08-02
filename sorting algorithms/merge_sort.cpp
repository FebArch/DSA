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
    
    k--;
    // printf("%d\n",arr1Size);
    while (i<arr1Size)
    {
        arr[k] = arr1[i];
        printf("looper %d\n", arr[k]);
        i++;
        k++;
    }

    while (j<arr2Size)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    

    return arr;
}

int main(){
    int len1=6, len2=7;
    int arr1[] = {1,3,5,7,99, 678};
    int arr2[] = {2,4,6,8,10,11,22};

    int* arr = mergedArr(arr1, arr2, len1, len2);

    displayArray(arr, (len1+len2));

    return 0;
}