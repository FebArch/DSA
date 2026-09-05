#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr);

void partitioning_sort(vector<int>& nums){
    bool passthrough = true;
    int sz = nums.size() - 1;
    int lptr=0, rptr = sz-1;
    int pivot = nums[sz];

    while (passthrough)
    {
        display(nums);
        if (lptr == sz)
        {
            break;
        }        

        if (lptr > rptr)
        {
            nums[lptr] += pivot;
            nums[sz] = nums[lptr] - pivot;
            nums[lptr] -= nums[sz];

            pivot = nums[sz];
            cout << pivot << endl;
            lptr = 0;
            rptr = sz-1;
        }

        if (nums[lptr] <= pivot)
        {
            lptr++;
            continue;
        }else if(nums[rptr] >= pivot){
            rptr--;
            continue;
        }else{
            int temp = nums[lptr];
            nums[lptr] = nums[rptr];
            nums[rptr] = temp;
        }
    }
    
}

int main(){
    vector<int> nums = {0,5,2,1,6,3};
    display(nums);
    partitioning_sort(nums);
    display(nums);
    return 0;
}


void display(vector<int> arr)
{
    cout << "{";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b}" << endl;
}