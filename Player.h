#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

class Player
{
public:
    char symbol;
    int points;


    char chooseSymbol();
    int chooseSquare();
};
#endif //TICTACTOE_PLAYER_H
