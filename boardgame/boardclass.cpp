#include <iostream>
using namespace std;

class BoardGame
{
    char player1;
    char player2;
    int positionX;
    int positionY;
    char boardLayOut[4][4];

  public:
    BoardGame();
    void setInputPosition(int positionXIn, int positionYIn);
    void playCard(int positionXIn, int positionYIn, char playerCardIn);
    void showGame();
    int getPositionX();
    int getPositionY();
    char getBoardLayout();
    int returnAll();
};

BoardGame ::BoardGame()
{
    player1 = '-';
    player2 = '-';
    positionX = 0;
    positionY = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
            boardLayOut[i][k] = '-';
    }
}

void BoardGame ::setInputPosition(int positionXIn, int positionYIn)
{
    positionX = positionXIn;
    positionY = positionYIn;
}

int BoardGame ::getPositionX()
{
    return positionX;
}
int BoardGame ::getPositionY()
{
    return positionY;
}

void BoardGame ::playCard(int positionXIn, int positionYIn, char playerCardIn)
{
    boardLayOut[positionXIn][positionYIn] = playerCardIn;
}

void BoardGame ::showGame()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int k = 0; k <= 3; k++)
        {
            cout << boardLayOut[i][k] << "    ";
        }
        cout << "\n";
    }
}

char BoardGame ::getBoardLayout()
{
    return boardLayOut[positionX][positionY];
}

int BoardGame ::returnAll()
{
    int countX = 0;
    for (int i = 0; i <= 3; i++)
    {
        for (int k = 0; k <= 3; k++)
        {
            if (boardLayOut[i][k] == 'x')
            {
                countX++;
                //if (countX == 4)
                //cout << "\nFour in a row. row " << i << " \n";
            }
            if (countX == 4)
            cout << "\nFour in a row. row " << i << " \n";
            continue;
        }
        
    }
    return 0;
}