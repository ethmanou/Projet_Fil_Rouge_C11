// Cercle.hpp
#ifndef CERCLE_H
#define CERCLE_H

#include "Point.h"
#include <string>

class Cercle {
public:
    int x, y, w, h;

    Cercle(int x, int y, int w, int h);

    Cercle(Point center, int radius);

    std::string toString() const;
};

#endif // CERCLE_H
