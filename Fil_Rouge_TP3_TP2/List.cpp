#include <iostream>

#include "List.hpp"


Liste::Liste() : nb_c(0), nb_r(0), compteur(0) {
        // Initialisation de la liste...
    }

Liste::~Liste(){};

int Liste::getCompteur() const {
        return compteur;
    }

void Liste::ajouterCercle(Cercle * nouveauCercle) {
        //Cercle* nouveauCercle = new Cercle();
        cercles.push_back(nouveauCercle);
        nb_c++;
        compteur++;
        nouveauCercle->setOrdre(0);
    }


void Liste:: ajouterRectangle(Rectangle *  nouveauRectangle) {
        //Rectangle* nouveauRectangle = new Rectangle();
        rectangles.push_back(nouveauRectangle);
        nb_r++;
        compteur++;
        nouveauRectangle->setOrdre(0);
    }

std::string Liste::toString() const {
        

        std::string ss = "Liste des cercles : \n";
        for (const auto& cercle : cercles) {
            ss += cercle->toString() + "\n";
        }
        ss += "Liste des rectangles : \n";
        for (const auto& rectangle : rectangles) {
            ss += rectangle->toString() + "\n";
        }

        return ss;

        
    }