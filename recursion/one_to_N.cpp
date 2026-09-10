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
    int n;
    std::cout << "Enter your nummber: ";
    std::cin >> n;
    printNumbers(n);
    return 0;
}