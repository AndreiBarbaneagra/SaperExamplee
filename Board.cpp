#include "Board.h"

Board::Board(int width, int height, int mineCount) {
	width_ = width;
	height_ = height;
	mineCount_ = mineCount;

};

bool Board::GameOver() const {

	std::cout << "�� ������ �� �����! ���� ��������" << std::endl;
	return true;
}
