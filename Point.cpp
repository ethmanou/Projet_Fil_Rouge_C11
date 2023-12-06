// Point.cpp
#include "Point.hpp"

Point::Point(int x, int y) : x(x), y(y) {}

std::string Point::toString() const {
    return std::to_string(x) + " " + std::to_string(y);
}

int Point::getX(){
    return x;
} 

int Point::getY(){
    return y;
} 
