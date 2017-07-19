#include "Board.h"
#include "Player.h"

int main() {
    Player player1;
    Player player2;
    char usersSymbol1, usersSymbol2;
    usersSymbol1 = player1.chooseSymbol();
    if (usersSymbol1 == 'o' || usersSymbol1 == 'O')
    {
        usersSymbol2 = 'X';
    }

    else
    {
        usersSymbol2 = 'O';
    }

    Board board1;
    board1.clearBoard();
    char usersSquare1 = player1.chooseSquare();
    board1.changeSquare(usersSquare1, usersSymbol1);
    char usersSquare2 = player2.chooseSquare();
    bool success = board1.changeSquare(usersSquare2, usersSymbol2);
    while(!success)
    {
        usersSquare2 = player2.chooseSquare();
        success = board1.changeSquare(usersSquare2, usersSymbol2);
    }
    return 0;
}