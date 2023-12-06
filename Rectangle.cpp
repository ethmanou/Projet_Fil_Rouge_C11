// Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Rectangle::Rectangle(Point topLeft, int w, int h) : x(topLeft.x), y(topLeft.y), w(w), h(h) {}

std::string Rectangle::toString() const {
    return "RECTANGLE " + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(w) + " " + std::to_string(h);
}
