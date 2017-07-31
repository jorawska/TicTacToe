cmake_minimum_required(VERSION 3.7)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Game.cpp Board.cpp Board.h Game.h Player.cpp Player.h Scores.cpp Scores.h AI.cpp AI.h Window.cpp Window.h)
add_executable(TicTacToe ${SOURCE_FILES})



# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()