// Rectangle.hpp
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include <string>

class Rectangle {
public:
    int x, y, w, h;

    Rectangle(int x, int y, int w, int h);

    Rectangle(Point topLeft, int w, int h);

    std::string toString() const;
};

#endif // RECTANGLE_H
