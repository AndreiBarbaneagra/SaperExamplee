#pragma once

/**
 * @file Cell.h
 *
 * @brief Project: Minesweeper
 * @author Barbaneagra Andrei
 * @date 2023
 *
 * @class Cell
 *
 * @brief Represents an individual cell on the Minesweeper board.
 */

class Cell {
private:
	bool isMine; /**< Indicates whether the cell contains a mine. */
	bool isRevealed; /**< Indicates whether the cell has been revealed. */

public:

	/**
	 * @brief Constructor for the Cell class.
	 */
	Cell();

	/**
	 * @brief Gets the mine status of the cell.
	 * @return True if the cell contains a mine, false otherwise.
	 */
	bool getIsMine() const;

	/**
	 * @brief Sets the mine status of the cell.
	 */
	void setMine();

	/**
	 * @brief Gets the reveal status of the cell.
	 * @return True if the cell has been revealed, false otherwise.
	 */
	bool getIsRevealed() const;

	/**
	 * @brief Reveals the cell.
	 */
	void reveal();
};