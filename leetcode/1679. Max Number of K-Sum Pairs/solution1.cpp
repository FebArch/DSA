#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr);

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int sz = nums.size();
        int count=0;
        sort(nums.begin(), nums.end());

        
        int i = 0;
        while(i < sz)
        {
            
            int subtrahend = k - nums[i];
            int mid = 0;
            int last = sz - 1;
            int first = 0;
            while (first <= last) // 0<=2  1<=2  
            {
                cout << mid << " " << last << endl;

                // 1,3,3,3,4
                if(mid == i){
                    mid++;
                    continue;
                }
                else if(subtrahend == nums[mid]){
                    subtrahend -= nums[mid];
                    count++;
                    break;
                }
                else if(nums[mid] > subtrahend){
                    last = mid - 1;
                }
                else if(nums[mid] < subtrahend){
                    first = mid + 1; // 0 2  3
                }
                mid = (last + first)/2;
            }

            if(subtrahend == 0){
                nums.erase(find(nums.begin(), nums.end(), nums[mid]));
                nums.erase(find(nums.begin(), nums.end(), nums[i]));
                first = 0;
                sz = nums.size();
                last = sz - 1;
                cout << "In function" << endl;
                display(nums);
                continue;
            }
            i++;
        }
        return count;
    }
};


int main(){
    vector<int> nums = {1,2,3,4};
    display(nums);
    Solution s;
    int count = s.maxOperations(nums, 6);
    // display(nums);
    cout << "Max Number of K-Sum pairs is: " << count << endl;
    return 0;
}


void display(vector<int> arr){
    cout << "{";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b}" << endl;    
}


// 1,3,4,5,3,7,1,6,4