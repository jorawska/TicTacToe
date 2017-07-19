#include <iostream>
#include "Game.h"
#include "Board.h"
#include "Player.h"

void Gameplay()
{
    Player p1, p2;
    p1.symbol = p1.chooseSymbol();

    if (p1.symbol == 'o' || p1.symbol== 'O')
    {
        p2.symbol = 'X';
    }

    else
    {
        p2.symbol = 'O';
    }
    p1.points = 0;
    p2.points = 0;
    Board board1;
    board1.reset();

    char end = '0';
    while(end =='0')
    {
        int usersSquare1 = p1.chooseSquare();
        board1.changeSquare(usersSquare1, p1.symbol);
        int usersSquare2 = p2.chooseSquare();
        bool success = board1.changeSquare(usersSquare2, p2.symbol);
        while (!success)
        {
            usersSquare2 = p2.chooseSquare();
            success = board1.changeSquare(usersSquare2, p2.symbol);
        }
        end = board1.checkWin();
    }

    if (end == 'X')

    {
        if (p1.symbol == 'X')
        {
            p1.points++;
        }
        else
        {
            p2.points++;
        }
    }
    else if (end == 'O')
    {
        if (p1.symbol =='O')
        {
            p1.points++;
        }
        else
        {
            p2.points++;
        }
    }
    std::cout << "POINTS" <<std::endl <<"Player 1: " << p1.points <<std::endl <<"Player 2: " <<p2.points <<std::endl;
}



