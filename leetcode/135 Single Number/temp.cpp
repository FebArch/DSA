#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {0};
    v[3] = 11;
    
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << ", ";
    }
    
    return 0;
}