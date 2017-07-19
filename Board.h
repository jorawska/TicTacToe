#ifndef TICTACTOE_DISPLAY_H
#define TICTACTOE_DISPLAY_H
static const int SIZE = 9;

class Board
{
private:
    char square[SIZE];


public:
    void draw();
    void reset();
    bool changeSquare(int choice, char symbol);
    bool checkEnd();
    char checkWin();

};


#endif //TICTACTOE_DISPLAY_H
