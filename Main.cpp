#include "board.h"
#include "iostream"

int main() {
	Board gameBoard(5, 5);
	gameBoard.generateMines(4);
	
    bool gameover = false;

    while (!gameover) {
        gameBoard.printBoard();

        int x, y;
        std::cout << "Write (x y) for open cell: ";
        std::cin >> x >> y;

        gameBoard.revealCellByUser(x, y);

        // Check if the player has won.
        //if (gameBoard.hasPlayerWon()) {
        //    gameOver = true;
        //    std::cout << "Congratulations, you won!" << std::endl;
        //}

        // Check if the player has lost.
        if (gameBoard.hasPlayerLost()) {
            gameover = true;
            std::cout << "You lost!" << std::endl;
            std::cin.get();
        }
    }

	std::cout << "Enter to close window";

	return 0;
}