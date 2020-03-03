#ifndef HOMEWORK02_TEST_H
#define HOMEWORK02_TEST_H

#include <iostream>

class Test {
protected:
    int failedNum = 0;
    int totalNum = 0;

    void check(bool expr, const char *func, const char  *filename, size_t lineNum) {
        if(!expr) {
            std::cerr << "in file: " << filename << " in function: " << func << " in line: " << lineNum << "\n";
            failedNum++;
        }
        totalNum++;
    };

public:
    Test() {
        failedNum = 0;
        totalNum = 0;
    };

    bool showFinalResult() {
        std:: cout << "All tests: " << totalNum << "\nFailed: " << failedNum << "\n";
        return failedNum == 0;
    }

    virtual void runAllTests() = 0;
};

#endif //HOMEWORK02_TEST_H
