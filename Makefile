CC = gcc
CXXFLAGS = -O2 -std=c++14
LDFLAGS = -lstdc++
OUT = game



all: game

game: main.o libBoard.a libCell.a
	$(CC) main.o libBoard.a libCell.a -o $(OUT) $(LDFLAGS)

main.o: Main.cpp
	$(CC) -c Main.cpp $(CXXFLAGS)

cell.o: Cell.cpp
	$(CC) -c Cell.cpp $(CXXFLAGS)

libCell.a: cell.o
	ar rcs libCell.a cell.o

board.o: Board.cpp Cell.h
	$(CC) -c Board.cpp -I. $(CXXFLAGS)

libBoard.a: board.o
	ar rcs libBoard.a board.o

clean:
	rm -f *.o *.a $(OUT)