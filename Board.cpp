#include <iostream>
#include <cstdlib>
#include <ctime>
#include "board.h"

Board::Board(int w, int h) {
    width = w;
    height = h;
    cells = new Cell * [height];
    for (int i = 0; i < height; ++i) {
        cells[i] = new Cell[width];
    }
}

Board::~Board() {
    for (int i = 0; i < height; ++i) {
        delete[] cells[i];
    }
    delete[] cells;
}

void Board::generateMines(int numMines) {
    srand(time(NULL));

    for (int i = 0; i < numMines; ++i) {
        int x = rand() % width;
        int y = rand() % height;

        if (!cells[y][x].getIsMine()) {
            cells[y][x].setMine();
        }
        else {
            --i;
        }
    }
}

void Board::printBoard() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (cells[i][j].getIsRevealed()) {
                if (cells[i][j].getIsMine()) {
                    std::cout << " * ";
                }
                else {
                    std::cout << " " << 0 << " ";
                }
            }
            else {
                std::cout << " - ";
            }
        }
        std::cout << std::endl;
    }
}

void Board::revealCell(int x, int y) {
    cells[y][x].reveal();
}

void Board::revealCellByUser(int x, int y) {
    cells[y][x].reveal();

    if (hasPlayerLost()) {
        printBoard();

        std::cin.get();
    }

}

bool Board::hasPlayerLost() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (cells[i][j].getIsMine() && cells[i][j].getIsRevealed()) {
                return true;
            }
        }
    }
    return false;
}

bool Board::operator==(const Board& other) const {
    return (width == other.width) && (height == other.height);
}

std::istream& operator>>(std::istream& in, Board& board) {
    return in;
}

std::ostream& operator<<(std::ostream& out, const Board& board) {
    return out;
}