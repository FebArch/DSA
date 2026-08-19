#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int sz = nums.size();
    int a = nums[0];
    
    for (int i = 1; i < sz; i++)
    {
        a = a ^ nums[i];
    }
    return a;
}

int main()
{
    vector<int> v = {1,4,1,2,4,3,5,6,7,6,5,7,2};
    cout << "Unique Number in the entire vector is: " << singleNumber(v) << endl;

    return 0;
}