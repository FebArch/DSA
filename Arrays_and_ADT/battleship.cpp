#include <iostream>
#include <string>

using namespace std;

void mapPrint(int row, int col, int map[][4])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << map[i][j] << " ";
        }
        cout << "\n";
    }
}

bool attack(int x, int y, int map[][4], int hits)
{
    if (map[x][y] == 1)
    {
        cout << "\nAttack hit!\nBattleship destroyed at " << x << "," << y << " coordinates\n";
        cout << "                                                   " << hits << " hits remains\n";
        map[x][y] = 0;
        return true;
    }
    else
    {
        cout << "\nAttack failed!\nBattleship is taking over our base commander! Hurry Up!\n";
        cout << "                                                   " << hits << " hits remains\n";
        return false;
    }
}

bool checkBattleships(int row, int col, int ship[][4])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ship[i][j] == 1)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int map[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}};
    int hits = 4;
    bool winState = true;
    string coords;

    while (hits > 0)
    {
        mapPrint(4, 4, map);
        cout << "Enter the coords to attack (x,y): ";
        cin >> coords;
        hits--;

        int x = coords[0] - '0';
        int y = coords[2] - '0';

        cout << "Attacking at coordinates (" << x << "," << y << ")..." << endl;
        attack(x, y, map, hits);
        winState = checkBattleships(4, 4, map); // if 1 is available in mar matrix returns 1 else 0

    }

    if (winState)   // 1-loss 0-win
    {
        cout << "We lost! The opponents has taken over our base\n";
    }else{
        cout << "Hurray We Won! Coward Isreal lost the war\n";
    }
    return 0;
}