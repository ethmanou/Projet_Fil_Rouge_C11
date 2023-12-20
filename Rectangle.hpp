// Rectangle.hpp
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.hpp"
#include "Forme.hpp"
#include <string>

class Rectangle : public Forme {

    int x, y, w, h , ordre;
public:
    Rectangle();
    Rectangle(int x, int y, int w, int h);

    Rectangle(Point topLeft, int w, int h);

    std::string toString() const override;
    int getX();
    int getY();
    int getW();
    int getH();
    void setOrdre(int );
    virtual Forme * Clone() const override;
};

#endif // RECTANGLE_H
