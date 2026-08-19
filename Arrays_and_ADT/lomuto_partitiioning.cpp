#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>, int sz);
vector<int> lomuto(vector<int> v, int sz);

int main(){
    vector<int> v = {0, 4, 3, 8, 7, 2};
    int sz = v.size();
    display(v, sz);
    lomuto(v, sz);
    cout << "Lomuto" << endl;
    display(v, sz);
    return 0;
}

void display(vector<int> v, int sz){
    cout << "{";
    for(int x: v){
        cout << x << ", ";
    }
    cout << "\b\b}" << endl;
}



vector<int> lomuto(vector<int> nums, int sz){
    int pivot = nums[sz-1];
    int j=0, i=-1;

    while (j<=(sz-1))
    {
        cout << "lomuto\n";
        if (j == (sz-1))
        {
            nums[sz-1] = nums[i+1];
            nums[i+1] = pivot;
        }
        else if(nums[j] < pivot){
            i++;
            nums[i] += nums[j];
            nums[j] = nums[i] - nums[j];
            nums[i] -= nums[j];
        }
        
        j++;
    }
    
}
