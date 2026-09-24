#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

bool isPalindrome(char* str, int fptr, int lptr){
    if (fptr >= lptr)
    {
        return true;
    }
    
    if (str[fptr] == str[lptr])
    {
        return isPalindrome(str, fptr+1, lptr-1);
    }
    return false;
}

int main() {
    char str[] = "";
    bool result = isPalindrome(str, 0, strlen(str)-1);
    if (result)
    {
        cout << "The string '" << str <<"' is a palindrome" << endl;
    }else{
        cout << "The string '" << str <<"' is not a palindrome" << endl;
    }
    
    return 0;
}

