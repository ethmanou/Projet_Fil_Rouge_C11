// Cercle.hpp
#ifndef CERCLE_H
#define CERCLE_H

#include "Point.hpp"
#include <string>

class Cercle {

    int x, y, w, h , ordre;
public:
    Cercle(int x, int y, int w, int h);

    Cercle(Point center, int radius);
    Cercle();

    std::string toString() const;
    int getX();
    int getY();
    int getW();
    int getH();
    void setOrdre(int );
};

#endif // CERCLE_H
