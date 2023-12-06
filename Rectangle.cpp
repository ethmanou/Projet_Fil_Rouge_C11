// Rectangle.cpp
#include "Rectangle.hpp"

Rectangle::Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Rectangle::Rectangle(Point topLeft, int w, int h) : x(topLeft.getX()), y(topLeft.getY()), w(w), h(h) {}

std::string Rectangle::toString() const {
    return "RECTANGLE " + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(w) + " " + std::to_string(h);
}


int Rectangle::getX(){
    return x;
} 

int Rectangle::getY(){
    return y;
} 


int Rectangle::getW(){
    return w;
} 

int Rectangle::getH(){
    return h;
} 