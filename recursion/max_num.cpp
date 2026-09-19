#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> nums);
int maximumNumber(vector<int>& nums, int maxNum=INT_MIN, int index=0);
int myMax(vector<int>& v, int index=0);

int main(){
    vector<int> array = {-1};
    vector<int> array2 = {};
    printArray(array);
    // int result = maximumNumber(array);
    cout << "Maximum number present in your vector is " << myMax(array2) << endl;
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
int maximumNumber(vector<int>& nums, int maxNum, int index){
    if (index >= nums.size())
    {
        return maxNum;
    }
    
    if (nums[index] > maxNum)
    {
        maxNum = nums[index];
    }
    
    return maximumNumber(nums, maxNum, index+1);
}

// 1,23,4, 17
int myMax(vector<int>& v, int index){
    if (v.size() == 0)
    {
        cout << "Your vector is empty!" << endl;
        return 0;
    }
    
    if (index >= (v.size()-1))
    {
        return v[index];
    }

    int mx = myMax(v, index+1);
    if (mx < v[index])
    {
        return v[index];
    }else{
        return mx;
    }
    
}

