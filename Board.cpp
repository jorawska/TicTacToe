#include <iostream>
#include "Board.h"

void Board::drawBoard()
{

    std::cout << "-------------" << std::endl
              << "| " << square[0] <<" | " << square[1] <<" | "<< square[2] <<" |"<< std::endl
              << "------------" <<std::endl
              << "| " << square[3] <<" | " << square[4] <<" | "<< square[5] <<" |"<< std::endl
              << "------------" <<std::endl
              << "| " << square[6] <<" | " << square[7] <<" | "<< square[8] <<" |"<< std::endl
              << "-------------" <<std::endl;
}

void Board::clearBoard()
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
    drawBoard();
}

bool Board::changeSquare(int choice, char symbol)
{
    bool end = false;
    while(!end)
    {
        if (square[choice - 1] == 'O' || square[choice - 1] == 'X')
        {
            std::cout << "You can't put " << symbol << " here. Choose another square." << std::endl;
            return false;
        }

        else
        {
            end = true;
        }
    }
    square[choice - 1] = symbol;
    drawBoard();
    return true;
}