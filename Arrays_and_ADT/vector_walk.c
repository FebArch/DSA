#include <stdio.h>

float find_max(float *arr, int len);

int main(){
    float arr[] = {1,211,31,4, 55, 7};
    int len = 6;
    printf("Maximum value in array is %f\n", find_max(arr, len));
    return 0;
}

float find_max(float *arr, int len){
    float max = *arr;
    for (int i = 1; i < len; i++)
    {
        if (max < *(arr+i))
        {
            max = *(arr+i);
        }
    }
    return max;
}