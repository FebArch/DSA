#include<iostream>
#include<vector>
#include<string>

using namespace std;

void permute(string alphabets, string subset, int index=0){
    if (alphabets.length() == index)
    {
        cout << subset << endl;
        return;        
    }
    subset.push_back(alphabets[index]);
    permute(alphabets, subset, index+1);
    
    subset.pop_back();
    permute(alphabets, subset, index+1);

}

int main() {
    string alphabets = "ABC";
    string subset;
    permute(alphabets, subset, 0);
    return 0;
}

