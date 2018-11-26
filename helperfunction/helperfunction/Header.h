//
//  Header.h
/*header file for main.cpp*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition
Gameboard :: Gameboard()
{
    for (int i = 0; i < 4; i++)
        for (int k = 0; k < 4; k++)
            gameSpace[i][k] = '-';
}

void Gameboard::setGameSpace(int row,int column, char value)
{
            gameSpace[row][column] = value;
    
}


int Gameboard::fourInRow()
{
    int count;
    for (int k = 0; k < 4; k++)
    {
        count = 0;
        for (int k = 0; k < 4; k++)
        {
            if (gameSpace[1][k] == 'x')
            {
                count ++;
            }
        }
            if (count == 4)
                return 1;
            
        }
        return 0;
        
    }

void Gameboard::printInfo()
{
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
            cout << gameSpace[i][k];
        cout << "\n";
        
    }
    
}
