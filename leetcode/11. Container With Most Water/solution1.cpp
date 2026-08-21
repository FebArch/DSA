#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
        int width=sz-1, maxArea = 0;
        int i = 0, j = sz-1;

        while (i<j)
        {
            if (height[i] <= height[j])
            {
                int area = height[i]*width;
                if (maxArea < area)
                {
                    maxArea = area;
                }
                width--;
                i++;
            }else if(height[j] < height[i]){
                int area = height[j] * width;
                if (maxArea < area)
                {
                    maxArea = area;
                }
                width--;
                j--;
            }   
        }
        return maxArea;
    }
};

int main(){
    // vector<int> height = {1,8,6,2,5,4,8,3,7};
    vector<int> height = {1,4,2,3,1,5,2,4,2};
    Solution s;
    int result = s.maxArea(height);
    cout << "Container Area to hold max Water is: " << result << endl;
    return 0;
}

