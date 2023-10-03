#ifndef CELL_H
#define CELL_H

	class Cell {
		private:
			bool isMine;
			bool isRevealed;

	public:
		Cell();
		bool getIsMine();
		void setMine();
		bool getIsRevealed();
		void reveal();
};
#endif