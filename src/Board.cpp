#include "Board.h"
#include <iostream>

#define WIN 5


Board::Board(): playing_board() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            playing_board[i][j] = '.';
        }
    }
}

bool Board::canMove(int x, int y) {
    return x >= 0 && y >= 0 && x <= 9 && y <= 9 && playing_board[x][y] == '.';
}

void Board::move(int x, int y, player_type player) {
    if (player == X) playing_board[x][y] = 'X';
    if (player == O) playing_board[x][y] = 'O';
}

play Board::find_line(int x , int y, int &line_x, int &line_o, int &empty) {
    if (playing_board[x][y] == 'O') {
        line_x = 0;
        line_o++;
        if (line_o == WIN) return WIN_O;
    } else if (playing_board[x][y] == 'X') {
        line_o = 0;
        line_x++;
        if (line_x == WIN) return WIN_X;
    } else if(playing_board[x][y] == '.'){
        line_o = 0;
        line_x = 0;
        empty++;
    }
    return IS_GOING;
}

play Board::getState() {
    int line_x = 0, line_o = 0, empty = 0;
    for (int i = 0; i < board_size; i++) {
        for (int j = 0; j < board_size; j++) {
            play check =  find_line(i, j, line_x, line_o, empty);
            if (check == IS_GOING) continue;
            return check;
        }
        line_o = 0, line_x = 0;
    }

    for (int i = 0; i <  board_size; i++) {
        for (int j = 0; j <  board_size; j++) {
            play check =  find_line(j, i, line_x, line_o, empty);
            if (check == IS_GOING) continue;
            return check;
        }
        line_o = 0, line_x = 0;
    }

    for (int i = 0; i <  board_size; i++) {
        for(int k = 0; k + i < board_size; k++) {
            play check = find_line(i + k, k, line_x, line_o, empty);
            if (check == IS_GOING) continue;
            return check;
        }
        line_o = 0, line_x = 0;
    }

    for (int j = 0; j <  board_size; j++) {
        for (int k = 0; k + j < board_size; k++) {
            play check = find_line(k, j + k, line_x, line_o, empty);
            if (check == IS_GOING) continue;
            return check;
        }
        line_o = 0, line_x = 0;
    }

    for (int i = board_size - 1; i >= 0; i--) {
        for (int k = 1; i + k < board_size; k++) {
            play check = find_line(board_size - k, k + i, line_x, line_o, empty);
            if (check == IS_GOING) continue;
            return check;
        }
        line_o = 0, line_x = 0;
    }

    for (int i = board_size - 1; i >= 0; i--) {
        for (int k = 0; i - k >= 0; k++) {
            play check = find_line(i - k, k, line_x, line_o, empty);
            if (check == IS_GOING) continue;
            return check;
        }
        line_o = 0, line_x = 0;
    }
    if (empty == 0) return DRAW;
    return IS_GOING;
}

char Board::get(int i, int j) {
    return playing_board[i][j];
}

