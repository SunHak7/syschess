// Project: SysChess
// Author: SunHak
// Date: 06.03.2025
// Version: 1.0

#include <iostream>

#include "pieces.h"


using namespace std;

int main() {
    Game game = Game();
    game.start();
    displayBoard(game);


    cout << endl << endl;
    cout << "Welcome to my game !!!";
}