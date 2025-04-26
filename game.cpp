#include <iostream>
#include <vector>

#include "pieces.h"

using namespace std;

Game::Game() {
    // Savoir les couleurs des pieces
    // mettre des null
    // 4 ligne 7 colo

    // comment mettre le Roi Noir, puis simplifier pour généraliser la position de chaque pièce
    const array<PieceType, 8> initialPositionsEdgeLines { PieceType::Rock, PieceType::Knight,
            PieceType::Bishop, PieceType::Queen, PieceType::King, PieceType::Bishop, PieceType::Knight, PieceType::Rock };

    // array de piece type pour les noir et blanc
    for(int i = 0; i < initialPositionsEdgeLines.size(); ++i) {
        pieces[0][i] = new Piece {.position = {0,i}, .color = Color::Black, .type=initialPositionsEdgeLines[i]};
        pieces[1][i] = new Piece {.position = {1, i}, .color=Color::Black, .type = PieceType::Pawn};
        pieces[6][i] = new Piece {.position = {6, i}, .color=Color::White, .type = PieceType::Pawn};
        pieces[7][i] = new Piece {.position = {7,i}, .color = Color::White, .type=initialPositionsEdgeLines[i]};
    }
}

Game::~Game() {
    for(int i = 0; i < pieces.size(); i++) {
        for(int j = 0; j < pieces[i].size(); j++) {
            delete pieces[i][j];
        }
    }
}

void displayBoard(const Game& board) {

    cout << "♔" << endl;
    cout << "U+2656" << endl;
    cout << "&#9814" << endl;

    for(int n = 1; n <= 18; ++n) {
        for(int i = 0; i <= 32; ++i) {
            if(i % 4 == 0 && n != 18) {
                cout << '|';
                intialGame(board);
            }
            if(n % 2 == 0)
                cout << " ";
            if(i != 32 && n % 2 == 1)
                cout << '-';
        }
        if(n % 2 == 0 && n != 18) {
            cout << n/2;
        }
        cout << endl;

    }
    cout << "  A    B    C    D     E    F    G    H";
    if(cin.get() == 0) {
        cin.clear();
        cin.ignore();
    }

}