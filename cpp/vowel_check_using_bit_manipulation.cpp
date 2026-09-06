#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter your character: ";
    cin >> ch;

    int thirtyOne = 31;
    int magicNumber = 0x208222;

    if ((magicNumber >> (thirtyOne & ch)) & 1)
    {
        cout << "Character is Vowel" << endl;
    }else{
        cout << "Character is not a Vowel" << endl;
    }
    return 0;
}