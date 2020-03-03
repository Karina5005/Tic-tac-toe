#include <BoardTest.h>

#define DO_CHECK(EXPR) check(EXPR, __func__, __FILE__, __LINE__);

void BoardTest::testIsWin() {
    Board b;
    b.move(0, 0, X);
    b.move(0, 1, X);
    b.move(1, 0, X);
    b.move(4, 5, O);
    b.move(5, 5, O);
    DO_CHECK(b.getState() == IS_GOING);
}

void BoardTest::testMove1() {
    Board b;
    b.move(0, 0, X);
    DO_CHECK(!b.canMove(0, 0));
}

void BoardTest::testMove2() {
    Board b;
    DO_CHECK(!b.canMove(-2, -4));
}

void BoardTest::testMove3() {
    Board b;
    DO_CHECK(!b.canMove(-2, 11));
}

void BoardTest::testMove4() {
    Board b;
    b.move(0, 0, X);
    DO_CHECK(b.canMove(1, 1));
}

void BoardTest::testMove5() {
    Board b;
    DO_CHECK(!b.canMove(12, 26));
}

void BoardTest::vertical_line1() {
    Board b;
    b.move(0, 0, X);
    b.move(1, 0, X);
    b.move(2, 0, X);
    b.move(3, 0, X);
    b.move(4, 0, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::vertical_line2() {
    Board b;
    b.move(0, 2, O);
    b.move(1, 2, O);
    b.move(2, 2, O);
    b.move(3, 2, O);
    b.move(4, 2, O);
    DO_CHECK(b.getState() == WIN_O);
}

void BoardTest::vertical_line3() {
    Board b;
    b.move(0, 3, X);
    b.move(1, 3, X);
    b.move(2, 3, X);
    b.move(3, 3, X);
    b.move(4, 3, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::vertical_line4() {
    Board b;
    b.move(0, 6, O);
    b.move(1, 6, O);
    b.move(2, 6, O);
    b.move(3, 6, O);
    b.move(4, 6, O);
    DO_CHECK(b.getState() == WIN_O);
}

void BoardTest::vertical_line5() {
    Board b;
    b.move(5, 9, X);
    b.move(6, 9, X);
    b.move(7, 9, X);
    b.move(8, 9, X);
    b.move(9, 9, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::vertical_line6() {
    Board b;
    b.move(0, 0, X);
    b.move(1, 0, X);
    b.move(2, 0, X);
    b.move(3, 0, X);
    b.move(0, 1, X);
    DO_CHECK(b.getState() == IS_GOING);
}

void BoardTest::vertical_line7() {
    Board b;
    b.move(0, 1, X);
    b.move(6, 0, X);
    b.move(7, 0, X);
    b.move(8, 0, X);
    b.move(9, 0, X);
    DO_CHECK(b.getState() == IS_GOING);
}

void BoardTest::horizontal_line1() {
    Board b;
    b.move(0, 5, X);
    b.move(0, 4, X);
    b.move(0, 3, X);
    b.move(0, 2, X);
    b.move(0, 1, X);
    DO_CHECK(b.getState() == WIN_X);
};

void BoardTest::horizontal_line2() {
    Board b;
    b.move(1, 5, X);
    b.move(1, 6, X);
    b.move(1, 7, X);
    b.move(1, 8, X);
    b.move(1, 9, X);
    DO_CHECK(b.getState() == WIN_X);
};

void BoardTest::horizontal_line3() {
    Board b;
    b.move(8, 5, O);
    b.move(8, 4, O);
    b.move(8, 3, O);
    b.move(8, 2, O);
    b.move(8, 1, O);
    DO_CHECK(b.getState() == WIN_O);
};

void BoardTest::horizontal_line4() {
    Board b;
    b.move(9, 5, X);
    b.move(9, 6, X);
    b.move(9, 7, X);
    b.move(9, 8, X);
    b.move(9, 9, X);
    DO_CHECK(b.getState() == WIN_X);
};

void BoardTest::horizontal_line5() {
    Board b;
    b.move(7, 5, O);
    b.move(7, 4, O);
    b.move(7, 3, O);
    b.move(7, 2, O);
    b.move(7, 1, O);
    DO_CHECK(b.getState() == WIN_O);
};

void BoardTest::horizontal_line6() {
    Board b;
    b.move(1, 0, X);
    b.move(0, 6, X);
    b.move(0, 7, X);
    b.move(0, 8, X);
    b.move(0, 9, X);
    DO_CHECK(b.getState() == IS_GOING);
};

void BoardTest::horizontal_line7() {
    Board b;
    b.move(1, 0, X);
    b.move(0, 6, X);
    b.move(0, 7, X);
    b.move(0, 8, X);
    b.move(1, 9, X);
    DO_CHECK(b.getState() == IS_GOING);
};

void BoardTest::diagonal_line1() {
    Board b;
    b.move(0, 0, X);
    b.move(1, 1, X);
    b.move(2, 2, X);
    b.move(3, 3, X);
    b.move(4, 4, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::diagonal_line2() {
    Board b;
    b.move(5, 5, X);
    b.move(6, 6, X);
    b.move(7, 7, X);
    b.move(8, 8, X);
    b.move(9, 9, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::diagonal_line3() {
    Board b;
    b.move(2, 3, X);
    b.move(3, 4, X);
    b.move(4, 5, X);
    b.move(5, 6, X);
    b.move(6, 7, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::diagonal_line4() {
    Board b;
    b.move(1, 5, X);
    b.move(2, 6, X);
    b.move(3, 7, X);
    b.move(4, 8, X);
    b.move(5, 9, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::diagonal_line5() {
    Board b;
    b.move(1, 4, X);
    b.move(2, 5, X);
    b.move(3, 6, X);
    b.move(4, 7, X);
    b.move(5, 8, X);
    DO_CHECK(b.getState() == WIN_X);
}

void BoardTest::diagonal_line6() {
    Board b;
    b.move(0, 9, O);
    b.move(1, 8, O);
    b.move(2, 7, O);
    b.move(3, 6, O);
    b.move(4, 5, O);
    DO_CHECK(b.getState() == WIN_O);
}

void BoardTest::diagonal_line7() {
    Board b;
    b.move(3, 9, O);
    b.move(4, 8, O);
    b.move(5, 7, O);
    b.move(6, 6, O);
    b.move(7, 5, O);
    DO_CHECK(b.getState() == WIN_O);
}

void BoardTest::diagonal_line8() {
    Board b;
    b.move(3, 7, O);
    b.move(4, 6, O);
    b.move(5, 5, O);
    b.move(6, 4, O);
    b.move(7, 3, O);
    DO_CHECK(b.getState() == WIN_O);
}

void BoardTest::diagonal_line9() {
    Board b;
    b.move(5, 5, O);
    b.move(6, 4, O);
    b.move(7, 3, O);
    b.move(8, 2, O);
    b.move(9, 1, O);
    DO_CHECK(b.getState() == WIN_O);
}

void BoardTest::diagonal_line10() {
    Board b;
    b.move(5, 8, O);
    b.move(6, 7, O);
    b.move(7, 6, O);
    b.move(8, 5, O);
    b.move(9, 4, O);
    DO_CHECK(b.getState() == WIN_O);
}

void BoardTest::diagonal_line11() {
    Board b;
    b.move(0, 9, O);//.........O
    b.move(1, 8, O);//........O.
    b.move(2, 7, O);//.......O..
    b.move(3, 6, O);//......O...
    b.move(9, 1, O);//.O........
    DO_CHECK(b.getState() == IS_GOING);
}

void BoardTest::diagonal_line12() {
    Board b;
    b.move(0, 1, O);//.O........
    b.move(9, 9, O);//......O...
    b.move(8, 8, O);//.......O..
    b.move(7, 7, O);//........O.
    b.move(6, 6, O);//.........O
    DO_CHECK(b.getState() == IS_GOING);
}

void BoardTest::draw1() {
    Board b;
    for(int i = 0; i < b.board_size; i++) {
        for(int j = 0; j < b.board_size; j++) {
            if(i%2==0) {
                if (j % 5 == 0) {
                    b.move(i, j, O);            //OXXXXOXXXX
                } else {                               //XOOOOXOOOO
                    b.move(i, j, X);            //OXXXXOXXXX
                }                                      //OXXXXOXXXX
            } else {                                   //XOOOOXOOOO
                if (j % 5 == 0) {                      //OXXXXOXXXX
                    b.move(i, j, X);            //XOOOOXOOOO
                } else {                               //OXXXXOXXXX
                    b.move(i, j, O);            //XOOOOXOOOO
                }                                      //OXXXXOXXXX
            }
        }
    }
    DO_CHECK(b.getState() == DRAW);
}

void BoardTest::draw2() {
    Board b;
    for(int i = 0; i < b.board_size; i++) {
        for(int j = 0; j < b.board_size; j++) {
            if(i%2==0) {
                if (j % 4 == 0) {
                    b.move(i, j, O);            //OXXXOXXXOX
                } else {                               //XOOOXOOOXO
                    b.move(i, j, X);            //OXXXOXXXOX
                }                                      //XOOOXOOOXO
            } else {                                   //OXXXOXXXOX
                if (j % 4 == 0) {                      //XOOOXOOOXO
                    b.move(i, j, X);            //OXXXOXXXOX
                } else {                               //XOOOXOOOXO
                    b.move(i, j, O);            //OXXXOXXXOX
                }                                      //XOOOXOOOXO
            }
        }
    }
    DO_CHECK(b.getState() == DRAW);
}

void BoardTest::draw3() {
    Board b;
    for(int i = 0; i < b.board_size; i++) {
        for(int j = 0; j < b.board_size; j++) {
            if(i%2==0) {
                if (j % 3 == 0) {
                    b.move(i, j, O);            //OXXOXXOXXO
                } else {                               //XOOXOOXOOX
                    b.move(i, j, X);            //OXXOXXOXXO
                }                                      //XOOXOOXOOX
            } else {                                   //OXXOXXOXXO
                if (j % 3 == 0) {                      //XOOXOOXOOX
                    b.move(i, j, X);            //OXXOXXOXXO
                } else {                               //XOOXOOXOOX
                    b.move(i, j, O);            //OXXOXXOXXO
                }                                      //XOOXOOXOOX
            }
        }
    }
    DO_CHECK(b.getState() == DRAW);
}

void BoardTest::get1(){
    Board b;
    b.move(0,0,X);
    DO_CHECK(b.get(0, 0) == 'X');
}

void BoardTest::get2(){
    Board b;
    b.move(0,0,O);
    DO_CHECK(b.get(0, 0) == 'O');
}

void BoardTest::get3(){
    Board b;
    b.move(0,0,X);
    DO_CHECK(b.get(1, 1) == '.');
}

void BoardTest::runAllTests() {
    testIsWin();
    testMove1();
    testMove2();
    testMove3();
    testMove4();
    testMove5();
    vertical_line1();
    vertical_line2();
    vertical_line3();
    vertical_line4();
    vertical_line5();
    vertical_line6();
    vertical_line7();
    horizontal_line1();
    horizontal_line2();
    horizontal_line3();
    horizontal_line4();
    horizontal_line5();
    horizontal_line6();
    horizontal_line7();
    diagonal_line1();
    diagonal_line2();
    diagonal_line3();
    diagonal_line4();
    diagonal_line5();
    diagonal_line6();
    diagonal_line7();
    diagonal_line8();
    diagonal_line9();
    diagonal_line10();
    diagonal_line11();
    diagonal_line12();
    draw1();
    draw2();
    draw3();
    get1();
    get2();
    get3();
}

