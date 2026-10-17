#include<iostream>
#include<vector>
#include<string>

using namespace std;

// {1,2,3}
void printSubset(vector<int>& arr, vector<int>& subset, int index=0){
    if (index == arr.size())
    {
        for (int x: subset)
        {
            cout << x << ", ";
        }
        cout << endl;
        return;
    }

    subset.push_back(arr[index]);
    printSubset(arr, subset, index+1);
    
    
    subset.pop_back();
    printSubset(arr, subset, index+1);   
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> subset = {};
    printSubset(arr, subset);
    cout << "subset completed!" << endl;
    return 0;
}

