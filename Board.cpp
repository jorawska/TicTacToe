#include <iostream>
#include "Board.h"


void Board::draw()
{

    std::cout << "-------------" << std::endl
              << "| " << square[0] <<" | " << square[1] <<" | "<< square[2] <<" |"<< std::endl
              << "------------" <<std::endl
              << "| " << square[3] <<" | " << square[4] <<" | "<< square[5] <<" |"<< std::endl
              << "------------" <<std::endl
              << "| " << square[6] <<" | " << square[7] <<" | "<< square[8] <<" |"<< std::endl
              << "-------------" <<std::endl;
}

void Board::reset()
{
    square[0] = '1';
    square[1] = '2';
    square[2] = '3';
    square[3] = '4';
    square[4] = '5';
    square[5] = '6';
    square[6] = '7';
    square[7] = '8';
    square[8] = '9';
    draw();
}

bool Board::changeSquare(int choice, char symbol)
{
    bool end = false;
    while(!end)
    {
        if (square[choice - 1] == 'O' || square[choice - 1] == 'X')
        {
            std::cout << "You can't put " << symbol << " here. Choose another place." << std::endl;
            return false;
        }

        else
        {
            end = true;
        }
    }
    square[choice - 1] = symbol;
    draw();
    return true;
}

bool Board::checkEnd()
{
    for(int i = 0; i < SIZE; i++)
    {
        if (!(square[i] == 'X' || square[i] == 'O'))
        {
            return false;
        }
    }
    return true;
}

bool Board::checkWinRows(char &winner)
{
    if(square[0] == square[1] && square[1] == square[2])
    {
        winner = square[0];
        return true;
    }

    else if(square[3] == square[4] && square[4] == square[5])
    {
        winner = square[3];
        return true;
    }

    else if(square[6] == square[7] && square[7] == square[8])
    {
        winner = square[6];
        return true;
    }
    else
    {
       return false;
    }
}
bool Board::checkWinCollumns(char &winner)
{
    if(square[0] == square[3] && square[3] == square[6])
    {
        winner = square[0];
        return true;
    }

    else if(square[1] == square[4] && square[4] == square[7])
    {
        winner = square[1];
        return true;
    }

    else if(square[2] == square[5] && square[5] == square[8])
    {
        winner = square[2];
        return true;
    }
    else
    {
        return false;
    }
}
bool Board::checkWinDiagonals(char &winner)
{
    if(square[0] == square[4] && square[4] == square[8])
    {
        winner = square[0];
        return true;
    }

    else if(square[2] == square[4] && square[4] == square[6])
    {
        winner = square[2];
        return true;
    } else
    {
        return false;
    }

}
bool Board::checkWinElse(char &winner)
{
    if (checkEnd() == true)
    {
        winner = '0';
        return true;
    }

    else
    {
        return false;
    }
}
bool Board::checkWin(char &winner)
{
    if(checkWinRows(winner) || checkWinCollumns(winner) || checkWinDiagonals(winner) || checkWinElse(winner))
    {
        return true;
    }
    else return false;
}
