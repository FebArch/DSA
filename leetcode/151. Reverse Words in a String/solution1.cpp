#include <iostream>
#include <memory>
#include <string.h>
using namespace std;

string reverseWords(string s)
{
    char word[10];
    char newStr[40];
    int wi=0, i=0;
    // char* newStr = new char(s.size());
    // int index= 0;
    // newStr[s.size()] = '\0';

    while (i<s.size())
    {
        if (s[i] != ' ')
        {
            /* code */
        }
        
        i++;
    }
    
    return word;
}

int main()
{
    string s = "  hello world  ";
    string r = reverseWords(s);
    // cout << r;
    return 0;
}