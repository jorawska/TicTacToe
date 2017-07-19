#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

class Player
{
private:
    char symbol;
    bool win;

public:
    char chooseSymbol();
    int chooseSquare();
};
#endif //TICTACTOE_PLAYER_H
