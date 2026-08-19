#include <iostream>
#include <vector>
using namespace std;

void displayStr(vector<char> s);

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int sz = chars.size();
        char c = chars[0];
        int charCount = 0;

        if(sz == 1){
            return 1;
        }

        int ptr1 = 0;
        for (int i = 0; i <= sz; i++)
        {
            if (chars[i] == c)
            {
                charCount++;
            }else if(chars[i] != c){
                ptr1++;
                chars[ptr1] = static_cast<char> (charCount + '0');
                ptr1++;

                int a = ptr1;
                int b = i;
                
                while (b < sz)
                {
                    chars[a] = chars[b];
                    a++;
                    b++;
                }
                
                c = chars[i];
                i = ptr1;
                charCount = 1;
                chars.pop_back();
            }
            displayStr(chars);
        }
        displayStr(chars);
        return 1;
    }
};

int main()
{
    vector<char> str = {'a', 'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c'};
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