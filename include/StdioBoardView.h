#ifndef HOMEWORK02_STDIOBOARDVIEW_H
#define HOMEWORK02_STDIOBOARDVIEW_H

#include "Board.h"

class StdioBoardView {
public:
    explicit StdioBoardView(Board &board): _board(board) {};

    void turn(player_type player);

    void runGame(bool silent);

    void print_board();

private:
    Board &_board;
};

#endif //HOMEWORK02_STDIOBOARDVIEW_H
