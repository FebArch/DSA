#include <iostream>
using namespace std;

bool isVowel(char c){
    char arr[] = {'a','e','i','o','u','A','E','I','O','U'};

    for (char x: arr)
    {
        if (x==c)
        {
            return true;
        }
    }
    return false;
};

int main(){
    bool r = isVowel('m');
    cout << boolalpha << r << endl;
    return 0;
}