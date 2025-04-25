#include <iostream>
#include <vector>
#include "board.h"

using namespace std;

void displayBoard(const Board& board) {

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