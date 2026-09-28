#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int binSearch(vector<int>& nums, int start, int end, int target){
        if(start > end) return -1;
        
        int mid = start + (end-start) / 2;

        if(nums[mid] == target) return mid;
        
        if(nums[mid] < target) return binSearch(nums, mid+1, end, target);
        
        return binSearch(nums, start, mid-1, target);
    }   
    int search(vector<int>& nums, int target) {
        return binSearch(nums, 0, nums.size()-1, target);
    }
};

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    Solution s;
    
    cout << s.search(nums, 9) << endl;
    return 0;
}

