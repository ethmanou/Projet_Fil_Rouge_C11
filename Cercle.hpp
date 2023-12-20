// Cercle.hpp
#ifndef CERCLE_H
#define CERCLE_H

#include "Point.hpp"
#include "Forme.hpp"
#include <string>

class Cercle : public Forme{

    int x, y, w, h , ordre , r;
public:
    Cercle(int x, int y, int w, int h );

    Cercle(Point center, int radius);
    Cercle();

    std::string toString() const override;
    int getX();
    int getY();
    int getLargeur();
    int getHauteur();
    void setOrdre(int );
    void setRayon(int );
    int getRayon();
    virtual Forme * Clone() const override;
};

#endif // CERCLE_H
