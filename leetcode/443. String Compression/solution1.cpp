#include <iostream>
#include <vector>
using namespace std;

void displayStr(vector<char> s);

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        vector<char> myStr;
        int sz = chars.size();
        char consecutiveChar = chars[0];
        int charRepeatCount = 0;

        for (char x : chars)
        {
            if (x != consecutiveChar)
            {
                myStr.push_back(consecutiveChar);
                if (charRepeatCount > 1 && charRepeatCount < 9)
                {
                    myStr.push_back(static_cast<char> (charRepeatCount + '0'));
                }else if(charRepeatCount > 9){
                    
                }
                

                consecutiveChar = x;
                charRepeatCount = 0;
            }
            charRepeatCount++;
        }

        displayStr(myStr);

        return myStr.size();
    }

};

int main()
{
    vector<char> str = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    // vector<char> str = {'a'};
    displayStr(str);
    cout << "After Compression " << endl;
    Solution s;
    int compressStrLen = s.compress(str);
    cout << "Answer: " << compressStrLen << endl;
    return 0;
}

void displayStr(vector<char> s)
{
    cout << "{";
    for (char c : s)
    {
        cout << c << ", ";
    }
    cout << "\b\b}" << endl;
}

