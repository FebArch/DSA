#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> nums);
int occurence(vector<int>& nums,int k, int index=0);

int main() {
    int k= 2;
    vector<int> arr= {2,4,6,8,2,2,2,16,2,20};
    printArray(arr);
    int result = occurence(arr, k);
    cout << "Number of times " << k << " occured in the array is " << result << endl;
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

int occurence(vector<int>& nums, int k, int index){
    if(nums.size() == 0){
        cout << "Your vector is empty";
        return 0;
    }

    if (index == (nums.size() - 1))
    {
        return (nums[index] == k) ? 1 : 0;
    }
    int count = occurence(nums, k, index+1);
    if (nums[index] == k)
    {
        count++;
    }
    return count;
}