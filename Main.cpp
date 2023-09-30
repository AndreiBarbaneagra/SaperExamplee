#include <iostream>

#include "Cell.h"
#include "Board.h"
#include "Cell.cpp"
#include "Board.cpp"

int main() {
	Cell Cell(2);

	if (Cell.isMine()) {
		std::cout << "Ёта €чейка - мина" << std::endl;
	}
	else {
		std::cout << "Ёта €чейка не €вл€етс€ миной" << std::endl;
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