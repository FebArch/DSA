#include <iostream>
#include <time.h>

using namespace std;

int randomNumberGenerator(){
    int randNum = rand() % 100 + 1;
    // cout << "Random number: " << randNum;
    return randNum;
}

int main(){
    int num, guess=1;
    srand(time(0));
    int randNum = randomNumberGenerator();

    while (1)
    {
        cout << "Guess the number (1-100): ";
        cin >> num;

        if (num == randNum)
        {
            cout << "You guessed the number in " << guess << " guesses" << endl;

            break;

        }else if(num < randNum){
            cout << "Guess the higher number\n";
        }else{
            cout << "Guess the lower number\n";
        }
        guess++;
    }
    
    return 0;
}