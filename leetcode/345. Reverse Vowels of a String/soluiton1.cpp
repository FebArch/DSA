#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display(vector<char> arr);

class Solution
{
public:
    bool isVowel(char ch)
    {
        if (!((ch >= 'A' && ch <= 'Z') ||
              (ch >= 'a' && ch <= 'z')))
        {
            return false;
        }

        return (0x208222 >> (ch & 31)) & 1;
    }

    string reverseVowels(string s)
    {
        // "IcecreAm"
        vector<char> vowels;

        for (char ch : s)
        {
            if (isVowel(ch))
            {
                vowels.push_back(ch);
            }
        }
        display(vowels);

        int vptr = vowels.size() - 1;
        if (vptr <= 0)
        {
            return s;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (isVowel(s[i]))
            {
                s[i] = vowels[vptr];
                vptr--;
            }
        }

        return s;
    }
};

int main()
{
    // string str = "IcecreAm";
    string str = "Egad! Loretta has Adams as mad as a hatter. Old age!";
    cout << str << endl;
    Solution s;
    string newStr = s.reverseVowels(str);
    cout << newStr << endl;
    return 0;
}

void display(vector<char> arr)
{
    cout << "{";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b}" << endl;
}