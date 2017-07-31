#include <iostream>
#include "Player.h"

char Player::chooseSymbol()
{
    char users_choice;
    bool end = false;
    std::cout << "Choose O or X" << std::endl;

    while(!end)
    {
        users_choice = std::cin.get();
        std::cin.ignore(256, '\n');
        users_choice = toupper(users_choice);
        if (users_choice == 'X' || users_choice == 'O')
        {

            end = true;
        }
        else
        {
            std::cout << "Wrong choice, try again";

        }
    }
    return users_choice;
}

int Player::chooseSquare()
{
    int users_square;
    std::cout << "Choose square" <<  std::endl;

    while(!(std::cin >> users_square) || users_square == 0)
        {
            std::cin.clear();
            std::cin.ignore();
        }



    return users_square;
}
