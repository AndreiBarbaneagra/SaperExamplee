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

        // �������� ������� ��� ��������, ��������� �� ���� (��������, ���� ����� ������ ����)
        // ��������:
        // if (gameBoard.isGameOver()) {
        //     gameover = true;
        // }
    }

	std::cout << "Enter to close window";
    //std::cout << "Game Over" << std::endl;
	std::cin.get(); // ����, ���� ������������ ������ Enter

	return 0;
}