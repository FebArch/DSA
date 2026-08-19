#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        // "abc", "ahbgdc"
        int sSize = s.size(), tSize = t.size();
        int trueCount = 0, sptr = 0;
        for (int i = 0; i < tSize; i++)
        {
            if (sptr < sSize && s[sptr] == t[i])
            {
                sptr++;
            }
        }
        return sptr == sSize;
    }
};

int main(){
    Solution s;
    bool result = s.isSubsequence("ahc", "ahbgdc");
    if (result)
    {
        cout << "Yes, s is a substring of t" << endl;
    }else{
        cout << "No, s is not a substring of t" << endl;
    }
    
    return 0;
}