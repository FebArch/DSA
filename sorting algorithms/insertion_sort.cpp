#include <iostream>
#include <vector>
using namespace std;

void displayArray(vector<int> v);
void insertionSort(vector<int>& v);

int main()
{
    vector<int> v = {91, 92, 94, 93, 92, 91};
    displayArray(v);
    insertionSort(v);
    displayArray(v);
    return 0;
}

void displayArray(vector<int> v)
{
    cout << "{";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }
    cout << "\b\b}" << endl;
}

void insertionSort(vector<int>& v){
    int sz = v.size();
    // 4, 12, 7, 23, 18, 9
    for (int i = 0; i < sz; i++)
    {
        int temp_value = v[i];  // 7
        for (int j = (i-1); j>=0; j--)
        {
            if (v[j] > temp_value)
            {
                v[j+1] = v[j];
                v[j] = temp_value;
            }
        }
    }
}