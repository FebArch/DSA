#include <iostream>
#include <vector>
using namespace std;

bool increasingTriplet(vector<int>& nums){
    int a = INT8_MAX;
    int sz = nums.size();

    for (int i = 0; i < sz; i++)
    {
        if (nums[i] <= a)
        {
            a = nums[i];
        }
    }
    cout << "Minimum in vecotr is: "<<a<<endl;
    return 1;
    
}


int main(){
    vector<int> nums = {11,5,5,4,11,3}; //013
    if (increasingTriplet(nums))
    {
        cout << "Increasing Triplets!!!" << endl;
    }else{
        cout << "Not Increasing Triplets!!!" << endl;
    }
    return 0;
}
