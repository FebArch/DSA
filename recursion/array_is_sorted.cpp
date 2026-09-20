#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> nums);
int isArraySorted(vector<int> nums, int index=0);
bool isSorted(vector<int> nums, int index=0);

int main() {
    vector<int> arr = {-1,2, 0, 5, 7};
    // vector<int> arr = {1,2,3,4};
    bool result = isSorted(arr);
    printArray(arr);
    if (result)
    {
        cout << "The Array is Sorted" << endl;
    }else{
        cout << "Your Array is not Sorted" << endl;
    }
    
    return 0;
}

void printArray(vector<int> nums){
    cout << "{";
    for (int x: nums)
    {
        cout << x << ", ";
    }
    cout << "\b\b}" << endl;
    
}

// 1,3,4,5,6

// int isArraySorted(vector<int> nums, int index){
//     if (index == (nums.size() - 1))
//     {
//         return nums[index];
//     }
    
//     if (nums[index] <= isArraySorted(nums, index+1))
//     {
//         if (nums[index] == 0)
//         {
//             return true;
//         }
//         return nums[index];
//     }
//     return false;
// }

bool isSorted(vector<int> nums, int index){
    if (index==(nums.size() -1))
    {
        return nums[index];
    }
    
    if (nums[index] <= nums[index+1] && isSorted(nums, index+1))
    {
        return true;
    }
    return false;
}