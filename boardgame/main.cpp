//#include "boardclass.cpp"
#include "mainfunctions.hpp"

int main()
{
    BoardGame game;
    int row, column;       //card positions
    char playerCard = ' '; //player1 card is 'x'. player2 card is 'o'

    cout << "default positions\n";
    cout << "Position X: " << game.getPositionX() << endl;
    cout << "position Y: " << game.getPositionY() << endl;

    //select position to put your card
    for (int i = 0; i < 16; i++)
    {
        cout << "input row and column: ";
        cin >> row >> column;
        game.setInputPosition(row, column); //The position to input your values.
        if (game.getBoardLayout() == '-')
        {
            //player plays card here
            cout << "input card: ";
            cin >> playerCard;
            game.playCard(row, column, playerCard);
        }
        else
        {
            i--;
            cout << "\nPosition occupied, try another position please!\n";
        }
    }

    
    cout << "game diplay: \n";
    displaygame(game);

    countRows(game); // count the values in a row
}