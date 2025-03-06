#include <iostream>
#include <vector>
#include "board.h"

using namespace std;

void displayBoard() {
    Board board;

    for(int n = 1; n <= 18; ++n) {

        for(int i = 0; i <= 32; ++i) {
            if(i % 4 == 0 && n != 18)
                cout << '|';

            if(n % 2 == 0)
                cout << " ";
            if(i != 32 && n % 2 == 1)
                cout << '-';
        }
        if(n % 2 == 0) {
            cout << n/2;
        }
        cout << endl;
    }
    cout << "  A    B    C    D     E    F    G    H";

}