cmake_minimum_required(VERSION 3.7)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Logic.cpp Board.cpp Board.h Logic.h Player.cpp Player.h)
add_executable(TicTacToe ${SOURCE_FILES})