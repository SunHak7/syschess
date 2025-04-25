#ifndef BOARD_H
#define BOARD_H
#include "pieces.h"


struct Board {
    unsigned sizeBoard = 64;
    unsigned widthBoard = 8, heightBoard = 8;
};

void displayBoard(const Board& board);
void intialGame(Board board);

#endif //BOARD_H
