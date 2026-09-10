#include <iostream>

void printNumbers(int n){
    if (n==0)
    {
        return;
    }
    
    std::cout << n << std::endl;
    printNumbers(n-1);
}

int main(){
    int n;
    std::cout << "Enter your nummber: ";
    std::cin >> n;
    printNumbers(n);
    return 0;
}