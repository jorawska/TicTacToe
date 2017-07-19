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
        if (square[i] != 'X' || square[i] !='O')
        {
            return false;
        }
    }
    return true;
}

char Board::checkWin()
{
       //ROWS
       if(square[0] == square[1] && square[1] == square[2])
       {
           std::cout << square[0] << " wins!" <<std::endl;
           return  square[0];

       }

       else if(square[3] == square[4] && square[4] == square[5])
       {
           std::cout << square[3] << " wins!" <<std::endl;
           return  square[3];
       }

       else if(square[6] == square[7] && square[7] == square[8])
       {
           std::cout << square[6] << " wins!" <<std::endl;
           return  square[6];
       }

       //COLUMNS
        else if(square[0] == square[3] && square[3] == square[6])
       {
           std::cout << square[0] << " wins!" <<std::endl;
           return  square[0];
       }

       else if(square[1] == square[4] && square[4] == square[7])
       {
           std::cout << square[1] << " wins!" <<std::endl;
           return  square[1];
       }

       else if(square[2] == square[5] && square[5] == square[8])
       {
           std::cout << square[2] << " wins!" <<std::endl;
           return  square[2];
       }
        //DIAGONALS
       else if(square[0] == square[4] && square[4] == square[8])
       {
           std::cout << square[0] << " wins!" <<std::endl;
           return  square[0];
       }

       else if(square[2] == square[4] && square[4] == square[6])
       {
           std::cout << square[2] << " wins!" <<std::endl;
           return  square[2];
       }

         else if (checkEnd() == true)
       {
           std::cout << "Draw! Nobody wins!" <<std::endl;
           return '1';
       }

         else return '0';
}