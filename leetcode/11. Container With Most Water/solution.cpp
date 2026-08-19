#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
        int width=0, maxArea = 0;

        for (int i = 0; i < sz; i++)
        {
            for (int j = i+1; j < sz; j++)
            {
                width++;
                if (height[i] <= height[j] && maxArea < (height[i]*width))
                {
                    maxArea = height[i] * width;
                }else if(height[j] < height[i] && maxArea < (height[j] * width)){
                    maxArea = height[j] * width;
                }
            }
            width=0;
        }
        return maxArea;
    }
};

int main(){
    // vector<int> height = {1,8,6,2,5,4,8,3,7};
    vector<int> height = {0,2};
    Solution s;
    int result = s.maxArea(height);
    cout << "Container Area to hold max Water is: " << result << endl;
    return 0;
}

