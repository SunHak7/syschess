#ifndef PIECES_H
#define PIECES_H
#include "board.h"

// K: King
// Q: Queen
// R: Rook
// B: Bishop
// N: Knight
// P: Pawn(although, by convention, P is usually omitted from notation)

enum class Pieces { Pawn, Bishop, Knight, Rock, Queen, King };
enum class Color { White, Black };
enum class Move { Checkmate, Check, Attack };

// chess symbols in the terminal
// https://www.alt-codes.net/chess-symbols.php

struct Coord {
    int x;
    int y;
};

struct piecesGame {
    Coord position;
    Color color;
};

struct Game {
    bool checkMate;
    Move move;
};

#endif //PIECES_H
