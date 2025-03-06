cmake_minimum_required(VERSION 3.29)
project(SysChess)

set(CMAKE_CXX_STANDARD 14)

add_executable(SysChess main.cpp display.cpp pieces.cpp pieces.h board.h)
