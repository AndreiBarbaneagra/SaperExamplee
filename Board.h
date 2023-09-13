#ifndef BOARD_H
#define BOARD_H

struct Board {
	int width;
	int height;
	int mineCount;


	bool GameOver() const;
};

#endif