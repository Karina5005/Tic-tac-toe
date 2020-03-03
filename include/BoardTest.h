#ifndef HOMEWORK02_BOARDTEST_H
#define HOMEWORK02_BOARDTEST_H

#include "Test.h"
#include "Board.h"

class BoardTest : public Test {
private:
    void testIsWin();
    void testMove1();
    void testMove2();
    void testMove3();
    void testMove4();
    void testMove5();
    void vertical_line1();
    void vertical_line2();
    void vertical_line3();
    void vertical_line4();
    void vertical_line5();
    void vertical_line6();
    void vertical_line7();
    void horizontal_line1();
    void horizontal_line2();
    void horizontal_line3();
    void horizontal_line4();
    void horizontal_line5();
    void horizontal_line6();
    void horizontal_line7();
    void diagonal_line1();
    void diagonal_line2();
    void diagonal_line3();
    void diagonal_line4();
    void diagonal_line5();
    void diagonal_line6();
    void diagonal_line7();
    void diagonal_line8();
    void diagonal_line9();
    void diagonal_line10();
    void diagonal_line11();
    void diagonal_line12();
    void draw1();
    void draw2();
    void draw3();
    void get1();
    void get2();
    void get3();

public:
    void runAllTests() override;
};

#endif //HOMEWORK02_BOARDTEST_H
