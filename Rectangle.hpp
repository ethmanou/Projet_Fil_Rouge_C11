// Rectangle.hpp
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.hpp"
#include <string>

class Rectangle {

    int x, y, w, h;
public:
    Rectangle(int x, int y, int w, int h);

    Rectangle(Point topLeft, int w, int h);

    std::string toString() const;
    int getX();
    int getY();
    int getW();
    int getH();
};

#endif // RECTANGLE_H
