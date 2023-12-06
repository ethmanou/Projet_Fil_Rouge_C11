// Point.hpp
#ifndef POINT_H
#define POINT_H

#include <string>

class Point {
public:
    int x, y;

    Point(int x, int y);

    std::string toString() const;
};

#endif // POINT_H
