CC = g++
CFLAGS = -std=c++11

all: main

main: main.o Rectangle.o Cercle.o Point.o
    $(CC) $(CFLAGS) -o main main.o Rectangle.o Cercle.o Point.o

main.o: main.cpp Rectangle.h Cercle.h 
    $(CC) $(CFLAGS) -c main.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Point.h
    $(CC) $(CFLAGS) -c Rectangle.cpp

Cercle.o: Cercle.cpp Cercle.h Point.h
    $(CC) $(CFLAGS) -c Cercle.cpp

Point.o: Point.cpp Point.h
    $(CC) $(CFLAGS) -c Point.cpp

clean:
    rm -f main main.o Rectangle.o Cercle.o Point.o
