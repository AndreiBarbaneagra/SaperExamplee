#include <iostream>

#include "Cell.h"
#include "Board.h"

int main() {
	Cell Cell(3);

	if (Cell.isMine()) {
		std::cout << "��� ������ - ����" << std::endl;
	}
	else {
		std::cout << "��� ������ �� �������� �����" << std::endl;
	}

	Board Board(10, 10, 15);

	bool playerHitBomb = true;

	if (playerHitBomb) {
		if (Board.GameOver()) {
			//
			//
			//
		}
	}

	return 0;
}