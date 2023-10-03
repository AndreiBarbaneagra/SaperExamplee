#ifndef BOARD_H
#define BOARD_H

#include "cell.h"

class Board {
private:
    int width;
    int height;
    Cell** cells;

public:
    Board(int w, int h);
    ~Board();
    void generateMines(int numMines);
    void printBoard();
    void revealCell(int x, int y);
    void revealCellByUser(int x, int y);

};
#endif