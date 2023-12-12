// Point.cpp
#include "Point.hpp"

Point ORIGINE;

Point::Point(){x=0; y=0;}

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

void Point::setX(int dx){
    x=dx;
}

void Point::setY(int dy){
    y=dy;
}
