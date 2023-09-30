#include "Cell.h"

Cell::Cell(int Value) {
	Value_ = Value;

};

bool Cell::isMine() const {

	return Value_ == -1;
	
}