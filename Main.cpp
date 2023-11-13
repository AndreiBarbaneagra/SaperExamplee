#include "board.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {

    const int width = 5;
    const int height = 5;
    const int numMines = 4;

    Board gameBoard(width, height);
    gameBoard.generateMines(numMines);
    bool gameover = false;

    while (!gameover) {
        gameBoard.printBoard();

        int x, y;
        std::cout << "Write (x y) for open cell: ";
        std::cin >> x >> y;

        gameBoard.revealCellByUser(x, y);

        if (gameBoard.hasPlayerLost()) {
            gameover = true;
            std::cout << "You lost!" << std::endl;
            std::cin.get();
        }
    }
	std::cout << "Enter to close window";

	return 0;
}