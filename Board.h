#ifndef TICTACTOE_DISPLAY_H
#define TICTACTOE_DISPLAY_H

class Board
{
private:
    char square[9];
    int choice;
    char symbol;

public:
    void drawBoard();
    void clearBoard();
    bool changeSquare(int choice, char symbol);

};


#endif //TICTACTOE_DISPLAY_H
