#pragma once

class Cell {
private:
	bool isMine;
	bool isRevealed;

public:
	Cell();
	bool getIsMine() const;
	void setMine();
	bool getIsRevealed() const;
	void reveal();
};