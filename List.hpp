// Liste.hpp
#ifndef LISTE_HPP
#define LISTE_HPP

#include <vector>
#include <string>
#include "Cercle.hpp"
#include "Rectangle.hpp"

class Liste {
public:
    Liste();
    ~Liste();

    void ajouterCercle(Cercle *);
    void ajouterRectangle(Rectangle *);
    int getCompteur() const;
    std::string toString() const;
    std::vector<Cercle*> cercles;
    std::vector<Rectangle*> rectangles;
    int nb_c;
    int nb_r;
    int compteur;
};

#endif // LISTE_HPP
