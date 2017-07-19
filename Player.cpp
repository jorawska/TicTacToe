#include "Player.h"
#include <iostream>

char Player::chooseSymbol()
{
    char users_choice;
    bool end = false;
    std::cout << "Choose O or X" << std::endl;
    users_choice = std::cin.get();
    std::cin.ignore(256, '\n');
    while(!end)
    {
        if (users_choice == 'X' || users_choice == 'x' || users_choice == 'o' || users_choice == 'O')
        {
            users_choice = toupper(users_choice);
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
    bool end;
    std::cout << "Choose square" <<  std::endl;
    std::cin >> users_square;
    do
    {
        if (users_square == 0)
        {
            std::cout << "Wrong choice, try again" << std::endl;
        }
        else
        {
            end = true;
        }

        }while(!end);

    return users_square;
}
