#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include "board.h"

Board::Board(int w, int h) : width(w), height(h), cells(h, std::vector<Cell>(w)) {}

Board::~Board() {
    for (int i = 0; i < height; ++i) {
        cells[i].clear();
    }
    cells.clear();
}

void Board::generateMines(int numMines) {
    srand(static_cast<unsigned>(time(NULL)));
    std::vector<std::pair<int, int>> positions;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            positions.emplace_back(i, j);
        }
    }

    std::random_shuffle(positions.begin(), positions.end());

    for (int i = 0; i < numMines; ++i) {
        int x = positions[i].second;
        int y = positions[i].first;

        cells[y][x].setMine();
    }
}

void Board::printBoard() {
    for (const auto& row : cells) {
        for (const auto& cell : row) {
            if (cell.getIsRevealed()) {
                std::cout << (cell.getIsMine() ? " * " : " 0 ");
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
    return std::any_of(cells.begin(), cells.end(), [](const auto& row) {
        return std::any_of(row.begin(), row.end(), [](const auto& cell) {
            return cell.getIsMine() && cell.getIsRevealed();
            });
        });
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