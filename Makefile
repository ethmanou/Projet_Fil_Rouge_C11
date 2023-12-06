CC = g++
CFLAGS = -std=c++11

all: main

main: main.o Rectangle.o Cercle.o Point.o 
	$(CC) $(CFLAGS) -o main main.o Rectangle.o Cercle.o Point.o

main.o: main.cpp Rectangle.hpp Cercle.hpp  
	$(CC) $(CFLAGS) -c main.cpp


Rectangle.o: Rectangle.cpp Rectangle.hpp Point.hpp  
	$(CC) $(CFLAGS) -c Rectangle.cpp

Cercle.o: Cercle.cpp Cercle.hpp Point.hpp 
	$(CC) $(CFLAGS) -c Cercle.cpp


Point.o: Point.cpp Point.hpp 
	$(CC) $(CFLAGS) -c Point.cpp

clean: 
	rm -f main main.o Rectangle.o Cercle.o Point.o

    
