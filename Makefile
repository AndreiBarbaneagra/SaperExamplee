CC = gcc
CXXFLAGS = -O2 -std=c++14
LDFLAGS = -lstdc++
OUT = file



all: file

file: main.o
	$(CC) main.o -o $(OUT) $(LDFLAGS)

main.o: main.cpp
	$(CC) -c main.cpp $(CXXFLAGS)

