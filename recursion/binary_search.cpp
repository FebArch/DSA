#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printArray(vector<int> nums);
int search(vector<int> nums, int f, int l, int k);

int main() {
    int k= 16;
    vector<int> arr= {2,4,6,8,16,20};
    printArray(arr);
    int index = search(arr, 0, arr.size(), k);
    cout << "Index: " << index << endl;
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


int search(vector<int> nums, int f, int l, int k){
    if ((f+1) == l && nums[f] != k && nums[l-1] != k)
    {
        cout << "The value " << k << " is not present in your vector" << endl;
        return -1;
    }
    

    int m = (l + f) / 2;
    int index;

    if (nums[m] == k)
    {
        return m;
    }
    else if(nums[m] < k){
        index = search(nums, m, l, k);
    }
    else if(nums[m] > k){
        index = search(nums, f, m, k);
    }
    
    return index;
}
