#include "Forme.hpp"
#include <iostream>

int Forme::prochainId_ = 0;

Forme::Forme(){
    id_ = prochainId_;
    prochainId_++;
    couleur = COULEURS::BLEU;
    w=0;
    h=0;
}

Forme::Forme(Point point, COULEURS couleur) : id_(prochainId_), couleur(couleur) , point(point) , w(0) , h(0){
    prochainId_++;
}

int Forme::prochainId() {
    return prochainId_;
}


int Forme::getId(){
    return id_;
}

Point& Forme::getPoint(){
    return point;
}

COULEURS Forme::getCouleur(){
    return couleur ;
}


void Forme::setX(int dx){
    point.setX(dx);
}

void Forme::setY(int dy){
    point.setY(dy);
}

void Forme::setCouleur(COULEURS dcouleur){
    couleur = dcouleur;
}

int Forme::getHauteur(){
    return h;

}


int Forme::getLargeur(){
    return w;
}