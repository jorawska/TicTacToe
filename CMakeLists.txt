cmake_minimum_required(VERSION 3.7)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Game.cpp Board.cpp Board.h Game.h Player.cpp Player.h Scores.cpp Scores.h AI.cpp AI.h)
add_executable(TicTacToe ${SOURCE_FILES})