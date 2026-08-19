// O(n^2)

#include <iostream>
#include <vector>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
    int sz  = nums.size();
    int count=0;
    for (int i = 0; i < sz; i++)
    {
        int m = nums[i];
        for (int j = i+1; j < sz; j++)
        {
            if (m < nums[j]) // 0< 4    4<1   0<
            {
                m = nums[j]; // 4
                count++;
            }
            else if(nums[i] < nums[j]){
                count++;
            }
            else{
                m = nums[j];    // 0
                count = 0;
            }
        }
        if(count>=2) return true;
        else count = 0;
        
    }
    return false;
}

int main(){
    // vector<int> nums = {20,100,10,12,5,13};
    // vector<int> nums = {5,4,3,2,1};
    vector<int> nums = {1,5,0,4,1,3}; //013
    if (increasingTriplet(nums))
    {
        cout << "Increasing Triplets!!!" << endl;
    }else{
        cout << "Not Increasing Triplets!!!" << endl;
    }
    
    return 0;
}