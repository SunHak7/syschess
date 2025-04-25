#include <iostream>
#include <vector>

#include "board.h"
#include "pieces.h"

using namespace std;

void play(const Game& game) {
    // isCheckMate ?
    if(game.checkMate == true) {
        std::cout << "Check mate" << std::endl;
    }
}

void intialGame(Board board) {
    // Start the game basic position
    vector<vector<int>> boardChess[board.widthBoard][board.heightBoard];
    for(unsigned i = 1; i <= board.widthBoard; i++) {
        //if(board.widthBoard[i] != 1) {
            //cout << "2";
        //}
        for(int j = 1; j <= board.heightBoard; j++) {
            cout << "";
        }
    }
}
