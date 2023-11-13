#pragma once

#include <vector>
#include "cell.h"

class Board {
private:
    int width;
    int height;
    std::vector<std::vector<Cell>> cells;

public:
    Board(int w, int h);
    ~Board();
    void generateMines(int numMines);
    void printBoard();
    void revealCell(int x, int y);
    void revealCellByUser(int x, int y);
    bool hasPlayerLost();
    bool operator==(const Board& other) const;

};
