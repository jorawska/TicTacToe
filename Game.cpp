#include <iostream>
#include "Game.h"
#include "Board.h"
#include "Player.h"
#include "Scores.h"
#include "AI.h"

void Gameplay()
{
    Player p1, p2;
    p1.symbol = p1.chooseSymbol();

    if (p1.symbol == 'o' || p1.symbol == 'O')
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

    bool user_end = false;
    char user_end_in;


    while(!user_end)
    {
    board1.reset();
    bool end = false, endp1 = false, endp2 = false, successp1, successp2;
    char winner;

        while (!end) {

            int usersSquare1 = p1.chooseSquare();
            successp1 = board1.changeSquare(usersSquare1, p1.symbol);
            while (!successp1) {
                usersSquare1 = p1.chooseSquare();
                successp1 = board1.changeSquare(usersSquare1, p1.symbol);
            }
           if(board1.checkWin(winner))
           {
               endp1 = true;
           }
            if (endp1 == true || endp2 == true) {
                end = true;
            }
            if (!end) {
                int usersSquare2 = p2.chooseSquare();
                successp2 = board1.changeSquare(usersSquare2, p2.symbol);
                while (!successp2) {
                    usersSquare2 = p2.chooseSquare();
                    successp2 = board1.changeSquare(usersSquare2, p2.symbol);
                }
            }
            if(board1.checkWin(winner))
            {
                endp2 = true;
            }
            if (endp1 == true || endp2 == true) {
                end = true;
            }
        }


        if (winner == 'X')
        {
            std::cout << "X wins!" << std::endl;
            if (p1.symbol == 'X')
            {
                p1.points++;
            } else
            {
                p2.points++;
            }
        }

        else if (winner == 'O')
        {
            std::cout << "O wins!" << std::endl;
            if (p1.symbol == 'O')
            {
                p1.points++;
            } else
            {
                p2.points++;
            }
        }
        else if(winner == '0')
        {
            std::cout << "Draw! Nobody wins!" <<std::endl;
        }

        std::cout << "POINTS" << std::endl << "Player 1: " << p1.points << std::endl << "Player 2: " << p2.points
                  << std::endl;

        std::cout << "End game? Y/N" << std::endl;
        std::cin >> user_end_in;
        if (user_end_in == 'Y' || user_end_in == 'y')
        {
            user_end = true;
        }
        else if (user_end_in == 'N' || user_end_in == 'n')
        {
            user_end = false;
        }
        else
        {
            std::cout << "Wrong choice" <<std::endl;
            user_end = true;
        }

    }
    SaveScore(p1, p2);
}

void PrintMenu()
{
    std::cout << "Tic Tac Toe" << std::endl
    << "1. Start new game" << std::endl
    << "2. History of scores" << std::endl
    << "3. Escape" << std::endl;
}
void Menu()
{

    int choice;
    while(true)
    {
        PrintMenu();
        while (!(std::cin >> choice))
        {
            std::cin.clear();
            std::cin.ignore();
        }
        getchar();
        if (choice == 1)
        {
            Gameplay();

        }
        else if (choice == 2)
        {
            ReadScore();

        }
        else if (choice == 3)
        {
            exit(NULL);
        }
        else
        {
            std::cout << "Wrong choice" << std::endl;
        }
    }
}
