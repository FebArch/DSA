#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr);
int main(){
    vector<int> jofra = {1,2,3,66};
    display(jofra);
    vector<int> archer = jofra;
    display(archer);
}


void display(vector<int> arr){
    cout << "{";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b}" << endl;    
}
