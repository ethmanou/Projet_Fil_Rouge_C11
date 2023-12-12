// Cercle.cpp
#include "Cercle.hpp"

Cercle::Cercle(){
    x=0; y=0 ; w=0 ; h = 0 , r=0;
}

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Cercle::Cercle(Point center, int radius) : x(center.getX() - radius), y(center.getY() - radius), w(2 * radius), h(2 * radius) {}

std::string Cercle::toString() const {
    return "CERCLE " + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(w) + " " + std::to_string(h);
}


int Cercle::getX(){
    return x;
} 

int Cercle::getY(){
    return y;
} 


int Cercle::getLargeur(){
    return w;
} 

int Cercle::getHauteur(){
    return h;
} 

void Cercle::setOrdre(int d0){
    ordre = d0;
}

int Cercle::getRayon(){
    return r;
}

void Cercle::setRayon(int dr){
    r=dr;
}
