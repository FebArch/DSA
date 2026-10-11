#include<iostream>
#include<vector>
#include<string>
#include<cstring>

using namespace std;

int main() {
    char* str = "kevin";
    if (*str == '\0')
    {
        cout << "string" << endl;
    }else{
        cout << "null" << endl;
    }
    cout << strlen(str);
    
    return 0;
}

