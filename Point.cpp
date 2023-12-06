// Point.cpp
#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

std::string Point::toString() const {
    return std::to_string(x) + " " + std::to_string(y);
}
