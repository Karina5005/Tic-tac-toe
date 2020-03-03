#include <iostream>
#include "StdioBoardView.h"

void StdioBoardView::print_board() {
    std::cout << '\n';
    for (int i = 0; i < Board::board_size; i++) {
        for (int j = 0; j < Board::board_size; j++) {
            std::cout << _board.get(i, j);
        }
        std::cout << '\n';
    }
}

void StdioBoardView::turn(player_type player) {
    bool success = false;
    while (!success) {
        if (player == X) std::cout << "X move: ";
        else std::cout << "O move: ";
        int x, y;
        std::cin >> x >> y;
        if (x == -1 && y == -1) exit(0);
        if (_board.canMove(x, y)) {
            _board.move(x, y, player);
            success = true;
        } else std::cout << "Bad move!\n";
    }
}

void StdioBoardView::runGame(bool silent) {
    while(_board.getState() == IS_GOING) {
        if (!silent) print_board();
        turn(O);
        if (_board.getState() != IS_GOING) break;
        if (!silent) print_board();
        turn(X);
    }
    print_board();
    if (_board.getState() == DRAW) std::cout << "Draw.\n";
    if (_board.getState() == WIN_X) std::cout << "X wins!\n";
    if (_board.getState() == WIN_O) std::cout << "O wins!\n";
}
