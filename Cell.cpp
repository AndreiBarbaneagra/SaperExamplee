#include "Cell.h"

Cell::Cell() {
    isMine = false;
    isRevealed = false;
}

bool Cell::getIsMine() {
    return isMine;
}

void Cell::setMine() {
    isMine = true;
}

bool Cell::getIsRevealed() {
    return isRevealed;
}

void Cell::reveal() {
    isRevealed = true;
}