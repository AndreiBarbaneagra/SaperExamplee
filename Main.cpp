#include "board.h"
#include "iostream"

int main() {
	Board gameBoard(5, 5);
	gameBoard.generateMines(4);
	gameBoard.revealCell(2, 2);
	gameBoard.printBoard();

	std::cout << "Enter to close window";
	std::cin.get(); // ∆дем, пока пользователь нажмет Enter

	return 0;
}