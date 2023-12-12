#ifndef FORME_HPP
#define FORME_HPP


#include "Point.hpp"

enum class COULEURS {
    NOIR, BLANC , JAUNE , BLEU , ROUGE , VERT
};

class Forme{
private:
    static int prochainId_ ;

protected:
    int id_;
    COULEURS couleur;
    Point point;
    int w;
    int h;

public:
    Forme();
    Forme(Point , COULEURS );
    virtual ~Forme() = default;

    //virtual void afficher() const = 0;

    static int prochainId();
    int getId();
    Point& getPoint();
    COULEURS getCouleur();
    void setX(int );
    void setY(int );
    void setCouleur(COULEURS );
    int getLargeur();
    int getHauteur();
};

#endif
