#pragma once

/**
 * @file Board.h
 *
 * @brief Project: Minesweeper
 * @author Barbaneagra Andrei
 * @date 2023
 *
 * @class Board
 *
 * @brief Represents the game board for Minesweeper.
 */

#include <vector>
#include "cell.h"

class Board {
private:
    int width; /**< Width of the game board. */
    int height; /**< Height of the game board. */
    std::vector<std::vector<Cell>> cells; /**< 2D vector representing the cells on the board. */

public:

    /**
     * @brief Constructor for the Board class.
     * @param w Width of the board.
     * @param h Height of the board.
     */

    Board(int w, int h);

    /**
     * @brief Destructor for the Board class.
     */
    ~Board();

    /**
     * @brief Generates mines on the board.
     * @param numMines Number of mines to generate.
     */
    void generateMines(int numMines);

    /**
     * @brief Prints the current state of the board.
     */
    void printBoard();

    /**
     * @brief Reveals a cell on the board.
     * @param x X-coordinate of the cell.
     * @param y Y-coordinate of the cell.
     */
    void revealCell(int x, int y);

    /**
     * @brief Reveals a cell on the board and checks if the player has lost.
     * @param x X-coordinate of the cell.
     * @param y Y-coordinate of the cell.
     */
    void revealCellByUser(int x, int y);

    /**
     * @brief Checks if the player has lost the game.
     * @return True if the player has lost, false otherwise.
     */
    bool hasPlayerLost();

    /**
     * @brief Overloaded equality operator for Board class.
     * @param other Another Board object to compare.
     * @return True if the boards are equal, false otherwise.
     */
    bool operator==(const Board& other) const;

};
