#include "Cell.h"

Cell::Cell() {
    isMine = false;
    isRevealed = false;
}

bool Cell::getIsMine() const {
    return isMine;
}

void Cell::setMine() {
    isMine = true;
}

bool Cell::getIsRevealed() const {
    return isRevealed;
}

void Cell::reveal() {
    isRevealed = true;
}