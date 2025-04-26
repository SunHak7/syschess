#ifndef PIECES_H
#define PIECES_H
#include <array>
#include <map>
#include <ostream>


// K: King
// Q: Queen
// R: Rook
// B: Bishop
// N: Knight
// P: Pawn(although, by convention, P is usually omitted from notation)

const unsigned BOARD_SIZE = 8;

enum class PieceType { Pawn, Bishop, Knight, Rock, Queen, King };
const std::map<PieceType, char> PIECETYPE_CHARS = {{PieceType::Rock, 'R'}, {PieceType::Knight, 'N'},
{PieceType::Bishop, 'B'}, {PieceType::Queen, 'Q'}, {PieceType::King, 'K'}, {PieceType::Pawn, 'P'}};

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
    std::array<std::array<Piece*, BOARD_SIZE>, BOARD_SIZE> pieces{};
    void start();
    friend std::ostream& operator<<(std::ostream& os, const Piece& pieces);

    Game();
    ~Game();
    void display();
};


#endif //PIECES_H
