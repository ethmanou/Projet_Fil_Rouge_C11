#include <iostream>

#include "List.hpp"


Liste::Liste() : nb_c(0), nb_r(0), compteur(0) {
        
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




Groupe::Groupe(): point(0, 0) , w(0) , h(0) , compteur(0){} 


void Groupe::ajouterForme(Forme * forme){
    formes.push_back(forme);
    calculerBoiteEnglobante();
    mettreAJourBoiteEnglobante(forme);
}

void Groupe::supprimerForme(Frome * frome){
    auto = std::find(formes.begin() , formes.end() , frome);

    if(auto != formes.end()){
        formes.erase(auto);
    }
    else{
        std::cout << "l'element n'existe pas! " << std::endl;
    }  
}

void Groupe::calculerBoiteEnglobante(){
    compteur++;
} 

void Groupe::mettreAJourBoiteEnglobante(Forme * forme){
    if(frome.getLargeur() > w){
        w= frome.getLargeur();
    } 
    if(frome.getHauteur() > h){
        h = frome.getHauteur();
    } 
} 