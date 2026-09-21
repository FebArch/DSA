#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> nums);
int mySum(vector<int> nums, int index=0);

int main() {
    vector<int> arr = {2,4,6,8,10,12,14,16,18,20};
    printArray(arr);
    int result = mySum(arr);
    cout << "Sum of array elements is: " << result << endl;
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

int mySum(vector<int> nums, int index){
    if (index == (nums.size() - 1))
    {
        return nums[index];
    }
    
    return nums[index] + mySum(nums, index+1);
}