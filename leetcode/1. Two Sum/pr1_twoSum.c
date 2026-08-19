/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

void twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int a,b;

    for(int i=0; i < numsSize; i++){
        a = nums[i];
        for(int j=0; j < numsSize; j++){
            if(j==i){
                continue;
            }
            else if(nums[i] + nums[j] == target){
                *returnSize = i;
                *(returnSize+1) = j;
                return;
            }
        }
    }
}

int main(){
    int nums[4] = {2,7,11,15};
    int numsSize = 4;
    int target = 9;
    int* returnSize = malloc(2*sizeof(int));

    twoSum(nums, 4, target, returnSize);
    printf("[ %d, ", *returnSize);
    printf("%d ]\n", *(returnSize+1));
    free(returnSize);
    return 0;
}









/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* answer = malloc(2*sizeof(int));
    for(int i=0; i < numsSize; i++){
        for(int j=0; j < numsSize; j++){
            if(j==i){
                continue;
            }
            else if(nums[i] + nums[j] == target){
                *answer = i;
                *(answer+1) = j;
                return answer;
            }
        }
    }
    return answer;
}

*/