#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int *arr;
    int f;
    int r;
};

void display(int *arr, int len);

void moveZeroes(int* nums, int numsSize) {
    struct Queue q1;
    q1.arr = (int *) malloc(numsSize * sizeof(int));
    q1.f = -1;
    q1.r = -1;
    int i = 0;
    

    while (i<numsSize)
    {
        if (nums[i] == 0)
        {
            q1.r++;
            q1.arr[q1.r] = i;
        }
        else if(nums[i] != 0){  // 1
            if (q1.f != q1.r)
            {
                q1.f++;
                nums[q1.arr[q1.f]] = nums[i];
                nums[i] = 0;
                q1.r++;
                q1.arr[q1.r] = i;
            }
        }
        i++;
    }
    
    free(q1.arr);
}

int main(){
    int numsSize = 1;
    int nums[1] = {0};
    display(nums, numsSize);
    moveZeroes(nums, numsSize);
    display(nums, numsSize);

    return 0;
}

void display(int *arr, int len){
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", *(arr));
        arr++;
    }
    printf("\b\b}\n");    
}