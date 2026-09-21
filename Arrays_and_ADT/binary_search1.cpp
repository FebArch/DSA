#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> nums);
int search(vector<int> nums, int k);

int main() {
    int k= 21;
    vector<int> arr= {2,4,6,8,16,20};
    printArray(arr);
    int result = search(arr, k);
    if(result != -1) cout << "Index of " << k << " in the array is " << result << endl;
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

int search(vector<int> nums, int k){
    int f= 0, l= nums.size();
    int m = (f+l)/2;
    if (k > nums[l-1])
    {
        cout << "The element " << k << " is not present in the array" << endl;
        return -1;
    }
    
    while (l != f )
    {
        if (nums[m] == k)  return m;
        else if(nums[m] < k) f = m;
        else if(nums[m] > k) l = m;
        
        m = (f+l)/2;
    }
    cout << "The element " << l << " is not present in the vector" << endl;
    return -1;
}