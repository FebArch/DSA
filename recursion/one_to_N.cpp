#include <iostream>

int printNumbers(int n){
    if (n == 0)
    {
        return n;
    }
    printNumbers(n-1);
    std::cout << n << ", ";
}

int main(){
    int  a = NULL;
    std::cout << a << std::endl;
    int n;
    std::cout << "Enter your nummber: ";
    std::cin >> n;
    printNumbers(n);
    return 0;
}