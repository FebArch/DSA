#include<iostream>
#include<vector>
#include<string>

using namespace std;

int search(vector<int> nums, int fptr, int lptr, int k){
    if (fptr == (lptr-1) && nums[fptr] != k)
    {
        cout << "The value " << k << " is not present in your vector" << endl;
        return -1;
    }
    
    int mptr = (lptr+fptr) / 2;
    int index;
    if (nums[mptr] == k) return mptr;
    else if(nums[mptr] > k) index = search(nums, fptr, mptr, k);
    else if(nums[mptr] < k) index = search(nums, mptr, lptr, k);

    return index;
}

int main() {
    vector<int> nums = {3,4,9,11,17};
    int k =17;
    int index = search(nums,0, nums.size(), k);
    cout << "Index of " << k << " is " << index << endl;
    return 0;
}

