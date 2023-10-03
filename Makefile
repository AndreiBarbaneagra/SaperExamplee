CC = gcc
CXXFLAGS = -O2 -std=c++14
LDFLAGS = -lstdc++
OUT = game



all: game

game: main.o cell.o board.o
	$(CC) main.o cell.o board.o -o $(OUT) $(LDFLAGS)

main.o: Main.cpp
	$(CC) -c Main.cpp $(CXXFLAGS)

cell.o: Cell.cpp
	$(CC) -c Cell.cpp $(CXXFLAGS)

board.o: Board.cpp
	$(CC) -c Board.cpp $(CXXFLAGS)