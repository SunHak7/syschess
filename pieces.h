#ifndef PIECES_H
#define PIECES_H
#include <array>


// K: King
// Q: Queen
// R: Rook
// B: Bishop
// N: Knight
// P: Pawn(although, by convention, P is usually omitted from notation)

const unsigned BOARD_SIZE = 8;

enum class PieceType { Pawn, Bishop, Knight, Rock, Queen, King };
enum class Color { White, Black };

// chess symbols in the terminal
// https://www.alt-codes.net/chess-symbols.php

struct Coord {
    int x;
    int y;
};

struct Piece {
    Coord position;
    Color color;
    PieceType type;
};

class Game {
    public:
    std::array<std::array<Piece*, BOARD_SIZE>, BOARD_SIZE> pieces;
    bool start();

    Game();
    ~Game();
};

void displayBoard(const Game& board);
void intialGame(Game board);
#endif //PIECES_H
