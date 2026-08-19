#include <stdio.h>
#include <stdlib.h>

int* arrayRankTransform(int* arr, int arrSize, int* returnSize);
void display(int *arr, int len);

int main()
{
    int arr[9] = {37,12,28,9,100,56,80,5,12};
    // int arr[4] = {40, 10, 20, 30};
    int arrSize = 9;

    int *rankArr = arrayRankTransform(arr, arrSize, &arrSize);
    display(rankArr, arrSize);
    free(rankArr);
    return 0;
}

int* arrayRankTransform(int* arr, int arrSize, int* returnSize) {

    int rank = 1;
    *returnSize = arrSize;
    int* rankArray = (int*) malloc(arrSize*sizeof(int));

    for(int i = 0; i<arrSize; i++){
        // [37,12,28,9,100,56,80,5,12]
        for(int j=0; j<arrSize; j++){
            if(arr[j] < arr[i]){
                rank += 1;
            }
        }
        rankArray[i] = rank;
        rank = 1;
    }
    return rankArray;
}



void display(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d,", *(arr));
        arr++;
    }
    printf("\b}\n");    
}


// {5,3,4,2,8,6,7,1,3}
// { ,3, ,2, , , ,1,3}
// {5, ,4, ,8,6,7, , }


// {5,2,4,1,8,6,7,0,2}   // 0
// {6,3,5,2,9,7,8,1,3}   // 1