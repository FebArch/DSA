#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char compPlays()
{
    int randNum = rand() % 3;
    if (randNum == 0)
    {
        return 'r';
    }
    else if (randNum == 1)
    {
        return 'p';
    }
    else
    {
        return 's';
    }
}

int main()
{
    srand(time(0));
    char playerPlays;
    cout << "Rock(r), Paper(p), Scissors(s)" << endl;
    while (1)
    {

        cout << "Enter Your Move: ";
        cin >> playerPlays;

        char complay = compPlays();

        if (playerPlays == complay)
        {
            cout << "It's a Draw!" << endl;
        }
        else if (playerPlays == 'r' && complay == 'p')
        {
            cout << "Comp wins! comp choosed " << complay << endl;
        }
        else if (playerPlays == 'r' && complay == 's')
        {
            cout << "You win! comp choosed " << complay << endl;
        }
        else if (playerPlays == 'p' && complay == 's')
        {
            cout << "Comp wins! comp choosed " << complay << endl;
        }
        else if (playerPlays == 'p' && complay == 'r')
        {
            cout << "You win! comp choosed " << complay << endl;
        }
        else if (playerPlays == 's' && complay == 'r')
        {
            cout << "Comp wins! comp choosed " << complay << endl;
        }
        else if (playerPlays == 's' && complay == 'p')
        {
            cout << "You win! comp choosed " << complay << endl;
        }
        else
        {
            cout << "invalid operation" << endl;
            break;
        }
    }

    return 0;
}