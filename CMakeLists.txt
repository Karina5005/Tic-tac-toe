cmake_minimum_required(VERSION 3.5)
project(hw_02)
project(test_hw_02)

set(CMAKE_CXX_STANDARD 11)

include_directories(include/)
add_executable(hw_02 src/main.cpp src/Board.cpp src/StdioBoardView.cpp include/Board.h include/StdioBoardView.h)
add_executable(test_hw_02 test/test.cpp include/Test.h include/BoardTest.h test/BoardTest.cpp src/Board.cpp src/StdioBoardView.cpp)
