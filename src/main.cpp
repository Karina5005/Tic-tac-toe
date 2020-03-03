#include <cstring>
#include "StdioBoardView.h"
#include "Board.h"

int main(int argc, char** argv) {
    StdioBoardView game(*(new Board()));
    game.runGame(argc == 2 && !strcmp(argv[1], "silent"));
}

