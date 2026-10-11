#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printSubset(vector<int> arr){
    for (int x: arr)
    {
        cout << x <<", ";
    }
}

int main() {
    vector<int> arr = {1,2,3};
    printSubset(arr);
    return 0;
}

