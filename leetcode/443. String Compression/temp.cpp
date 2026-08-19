#include <iostream>
#include <vector>
using namespace std;
void displayStr(vector<char> s);

int main(){
    vector<char> myStr;
    int x=2;
    myStr.push_back('a');
    myStr.push_back('b');
    displayStr(myStr);
    myStr.push_back('1234');
    displayStr(myStr);
    return 0;
}


void displayStr(vector<char> s){
    cout << "{";
    for (char c: s)
    {
        cout << c << ", ";
    }
    cout << "\b\b}" << endl;
}