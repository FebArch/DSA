#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> nums);
void mZeros(vector<int> &nums);

int main()
{
    vector<int> array = {0, 0, 17, 12, 9, 0,0};
    printArray(array);
    mZeros(array);
    printArray(array);
    return 0;
}

void printArray(vector<int> nums)
{
    cout << "{";
    for (int x : nums)
    {
        cout << x << ", ";
    }
    cout << "\b\b}" << endl;
}

void mZeros(vector<int> &nums)
{
    int zPtr = 0;
    int nonzPtr = 0;
    int sz = nums.size();

    while (nonzPtr < sz)
    {
        
        if (nums[zPtr] == 0 && nums[nonzPtr] != 0)
        {
            nums[zPtr] = nums[nonzPtr];
            nums[nonzPtr] = 0;
        }
        if (nums[zPtr] == 0)
        {
            nonzPtr++;
        }
        else
        {
            zPtr++;
        }
    }
}
