#ifndef TICTACTOE_DISPLAY_H
#define TICTACTOE_DISPLAY_H

static const int SIZE = 9;

class Board
{
public:
    char square[SIZE];


    void draw();
    void reset();
    bool changeSquare(int choice, char symbol);
    bool checkEnd();
    bool checkWinRows(char &winner);
    bool checkWinCollumns(char &winner);
    bool checkWinDiagonals(char &winner);
    bool checkWinElse(char &winner);
    bool checkWin(char &winner);
};


#endif //TICTACTOE_DISPLAY_H
