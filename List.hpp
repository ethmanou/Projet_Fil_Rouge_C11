// Liste.hpp
#ifndef LISTE_HPP
#define LISTE_HPP

#include <vector>
#include <string>
#include "Forme.hpp"

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
    
};



class Groupe : public Forme {
public:
    void ajouterForme(Forme* forme);
    void supprimerForme(Forme * forme);
    void afficher() const override;

private:
    std::vector<Forme*> formes;

    
    void calculerBoiteEnglobante();
    void mettreAJourBoiteEnglobante(Forme* forme);
    
    
    Point point ;
    int  w, h;
    int compteur;
};





#endif // LISTE_HPP
