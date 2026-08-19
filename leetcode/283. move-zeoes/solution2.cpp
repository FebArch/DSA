#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v);

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();
        int zeroIndex=0;
        
        for (int i = 0; i < sz; i++)
        {
            if (nums[i] == 0 && !zeroIndex) //!0->true   !2->false 
            {
                zeroIndex = i+1;
            }
            else if(nums[i] != 0 && zeroIndex){
                nums[zeroIndex-1] = nums[i];   // {1, 0}
                nums[i] = 0;
                zeroIndex++;
            }
        }   
    }
};

void display(vector<char> s);

int main(){
    // vector<int> nums = {1,3,0, 9,0,4,0,12};
    vector<int> nums = {0,3,0, 9,0,4,0,12};
    Solution s;
    display(nums);
    s.moveZeroes(nums);
    display(nums);

    return 0;
}





void display(vector<int> v)
{
    cout << "{";
    for (int i : v)
    {
        cout << i << ", ";
    }
    cout << "\b\b}" << endl;
}
