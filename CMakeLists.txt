cmake_minimum_required(VERSION 3.29)
project(SysChess)

set(CMAKE_CXX_STANDARD 20)

add_executable(SysChess main.cpp pieces.cpp game.cpp pieces.h)
