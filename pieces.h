#ifndef PIECES_H
#define PIECES_H

enum class Pieces { Pawn, Bishop, Knight, Rock, Queen, King };
enum class Color { White, Black };
enum class Move { Checkmate, Check, Attack };

// chess symbols in the terminal
// https://www.alt-codes.net/chess-symbols.php

class Coord {
    int x;
    int y;
};

class piecesGame {
    Coord position;
    Color color;
};

class Game {
    int gameover;
    Move move;
};

#endif //PIECES_H
