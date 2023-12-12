// Liste.hpp
#ifndef LISTE_HPP
#define LISTE_HPP

#include <vector>
#include <string>
#include "Rectangle.hpp"
#include "Cercle.hpp"

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



class Groupe : public Forme {
public:
    void ajouterForme(Forme* forme);
    void supprimerForme(int id);
    void afficher() const override;

private:
    std::vector<Forme*> formes;

    // Fonctions pour calculer et mettre à jour le point, la largeur et la hauteur
    void calculerBoiteEnglobante();
    void mettreAJourBoiteEnglobante(Forme* forme);
    
    // Attributs de la boîte englobante
    double pointX, pointY;
    double largeur, hauteur;
};

#endif // LISTE_HPP
