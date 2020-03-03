#ifndef HOMEWORK02_BOARD_H
#define HOMEWORK02_BOARD_H

enum play {
    IS_GOING, WIN_X, WIN_O, DRAW
};

enum player_type {
    O, X
};

class Board {
public:
    Board();

    char get(int i, int j);

    bool canMove(int x, int y);

    void move(int x, int y, player_type player);

    play getState();

    static constexpr int board_size = 10;

private:
    play find_line(int x, int y, int& line_x, int& line_y, int& empty);

    char playing_board [10][10];
};

#endif //HOMEWORK02_BOARD_H
