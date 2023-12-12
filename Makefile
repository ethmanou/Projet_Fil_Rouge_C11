SRC=Cercle.cpp Forme.cpp Point.cpp Rectangle.cpp tests_catch.cpp main_catch.cpp
#SRC=$(wildcard *.cpp)  
CXX=g++
EXE=cpp4

#decommentez le flag std avec clang++ sous mac m1
CXXFLAGS+=-Wall -Wextra -MMD -g -O2 #-std=c++11
LDFLAGS= #-lSDL

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: catch.hpp $(EXE)

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

catch.hpp:
	wget https://raw.githubusercontent.com/catchorg/Catch2/v2.x/single_include/catch2/catch.hpp

-include $(DEP)
