#ifndef CELL_H
#define CELL_H

struct Cell {
	
	int Value; //kol-vo min vokrug kletki
	

	bool isMine() const;
	bool GameOver() const;
};

#endif