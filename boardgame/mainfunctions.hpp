#include <iostream>
#include "boardclass.cpp"

using namespace std;

void displaygame(BoardGame game);
void countRows();

void displaygame(BoardGame game)
{
    game.showGame();
}

void countRows(BoardGame game)
{
    game.returnAll();
}
