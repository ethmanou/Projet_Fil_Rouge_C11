// Point.hpp
#ifndef POINT_H
#define POINT_H

#include <string>

class Point {

    int x, y;
public:
    Point(int x, int y);

    std::string toString() const;
    int getX();
    int getY();
};

#endif // POINT_H
