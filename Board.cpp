#include "Board.h"

Board::Board(int width, int height, int mineCount) {
	width_ = width;
	height_ = height;
	mineCount_ = mineCount;

};

bool Board::GameOver() const {

	std::cout << "Вы попали на бомбу! Игра окончена" << std::endl;
	return true;
}
