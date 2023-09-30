#ifndef CELL_H
#define CELL_H

struct Cell {
	
	int Value_;//kol-vo min vokrug kletki
	

	Cell(int Value);

	bool isMine() const;
	
};

#endif