#include <iostream>
#include <vector>
using namespace std;

vector<int> partition(vector<int> &nums, int pivot)
{
    int sz = nums.size();
    int front = 0;
    int rear = sz - 2;

    while (front <= rear)
    {
        if(front==rear){
            nums[sz-1] = nums[rear];
            nums[rear] = pivot;
            front++;
        }
        else if (nums[front] < pivot) 
        {
            front++;
        }
        else if (nums[rear] > pivot)
        {
            rear--;
        }
        else if (nums[front] > pivot && nums[rear] < pivot)
        {
            nums[front] += nums[rear];
            nums[rear] = nums[front] - nums[rear];
            nums[front] = nums[front] - nums[rear];
            front++;
        }
    }

    return nums;
}

int main()
{
    vector<int> r = {0, 4, 3, 8, 7, 2};
    int sz = r.size();
    int pivot = r[sz-1];
    cout << "{";
    for (int x : r)
    {
        cout << x << ", ";
    }
    cout << "\b\b}" << endl;

    partition(r, pivot);
    cout << "After" <<endl;

    cout << "{";
    for (int x : r)
    {
        cout << x << ", ";
    }
    cout << "\b\b}" << endl;
    return 0;
}