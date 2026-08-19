#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> r;
        int i = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                else if ((nums[i] + nums[j]) == target)
                {
                    r.push_back(i);
                    r.push_back(j);
                    return r;
                }
            }
        }
    }
};

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 17;

    Solution s;
    vector<int> v = s.twoSum(nums, target);
    cout << "{";
    for (int x : v)
    {
        cout << x << ", ";
    }
    cout << "\b\b}" << endl;
    return 0;
}
