// Point.hpp
#ifndef POINT_H
#define POINT_H

#include <string>

class Point {

    int x, y;
public:
    Point();
    Point(int x, int y);

    std::string toString() const;
    int getX();
    int getY();
    void setX(int );
    void setY(int );
};

extern Point ORIGINE;

#endif // POINT_H
