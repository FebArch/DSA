#include <iostream>
using namespace std;

char reverse(char* str){
    char* newStr;
    cout << *(str) << endl;

    if (*str == '\0')
    {
        return '\0';
    }
    str++;
    return reverse(str);
}

int main(){
    reverse("hello");
    return 0;
}