#include <fstream>
#include <iostream>

#include "catch.hpp"
#include "Point.hpp"
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Forme.hpp"

// NOTE : ce test utilise des enum "class"
// il faut donc utiliser un compilateur g++ >= 6.1
// ou activer l'option c++11 du compilateur
// -std=c++11 ou -std=c++0x sur les tres vieux compilateurs

// Les tests ne sont pas exhaustifs, loin de là

TEST_CASE("Instanciation", "[Point]") {

	Point p1;
	REQUIRE(p1.getX() == 0);
	REQUIRE(p1.getY() == 0);
	
    p1.setX(11);
    p1.setY(21);

    REQUIRE(p1.getX() == 11);
	REQUIRE(p1.getY() == 21);

	Point p2(12, 22);

	REQUIRE(p2.getX() == 12);
	REQUIRE(p2.getY() ==  22);  // :-)

}


TEST_CASE("Origine", "[Point]") {
	REQUIRE(ORIGINE.getX() == 0);
	REQUIRE(ORIGINE.getY() == 0);
}




TEST_CASE("Compteur", "[Forme]") {
   // Pour être correct, ce test doit etre le premier sur Forme
   REQUIRE(0 == Forme::prochainId());
   Forme f1;
   Forme * f2 = f1.Clone();
   REQUIRE(1 == f2->getId());
   REQUIRE(0 == f1.getId());
   REQUIRE(2 ==  Forme::prochainId());	
   // Verification que la valeur n'est pas decrementee accidentellement.
   Forme *p = new Forme;
   REQUIRE(2 == p->getId());
   delete p;
   delete f2;
   REQUIRE(3 == Forme::prochainId());	
}



TEST_CASE("Instanciation1", "[Forme]") {
	Forme f1;
	REQUIRE(f1.getPoint().getX() == 0);
	REQUIRE(f1.getPoint().getY() == 0);
	REQUIRE(f1.getCouleur() ==  COULEURS::BLEU);
}



TEST_CASE("Instanciation2", "[Forme]") {
	Forme f2;
	
	f2.setX(15);
	f2.setY(25);
	f2.setCouleur(COULEURS::VERT);
	REQUIRE (f2.getPoint().getX() == 15);
	REQUIRE (f2.getPoint().getY() == 25);
	REQUIRE (f2.getCouleur() == COULEURS::VERT);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::JAUNE);
}



TEST_CASE("Instanciation3", "[Forme]") {
    // IL N'Y A PAS D'ERREUR DANS LE TEST, CELA DOIT MARCHER	
	Forme f2(Point(10,20), COULEURS::ROUGE);
	REQUIRE (f2.getPoint().getX() == 10);
	REQUIRE (f2.getPoint().getY() == 20);
	REQUIRE (f2.getCouleur() == COULEURS::ROUGE);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);

	f2.getPoint().setX(15);
	f2.getPoint().setY(25);
	f2.setCouleur(COULEURS::JAUNE);
	REQUIRE (f2.getPoint().getX() == 15);
	REQUIRE (f2.getPoint().getY() == 25);
	REQUIRE (f2.getCouleur() == COULEURS::JAUNE);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
}



TEST_CASE("BoiteEnglobante", "[Forme]") {
	Forme f;
	REQUIRE (f.getLargeur() == 0);
	REQUIRE (f.getHauteur() == 0);
}


TEST_CASE("Cercle", "[Cercle]") {
   int compteur = Forme::prochainId();
   Cercle c1;
   Cercle * c3 = new Cercle();
   Forme * c1_c = c3->Clone();
   Cercle c2(20,40,40, 20); 
   //REQUIRE(c1_c->toString() == "CERCLE 0 0 0 0");
   REQUIRE(c1.toString() == "CERCLE 0 0 0 0");
   REQUIRE(c2.toString() == "CERCLE 20 40 40 20");

   c2.setRayon(3);
   REQUIRE(c2.getRayon()   == 3  );
   REQUIRE(c2.toString()   == "CERCLE 20 40 40 20");
   REQUIRE(c2.getLargeur() == 40);
   REQUIRE(c2.getHauteur() == 20);  

   REQUIRE(Forme::prochainId() == (compteur+3) ); 
   delete c1_c;
   delete c3;
}

TEST_CASE("Clone_Cercle", "[Forme avec Cercle]"){
	Forme * m = new Cercle(20, 40 , 40 , 25);
	Forme * m_c = m->Clone();

	REQUIRE(m->toString() == "CERCLE 20 40 40 25");
	REQUIRE(m_c->toString() == "CERCLE 20 40 40 25");

	delete m;
	delete m_c;

} 


TEST_CASE("Clone_Rectangle", "[Forme avec Rectangle]"){
	Forme * m = new Rectangle(20, 40 , 40 , 25);
	Forme * m_c = m->Clone();
	REQUIRE(m_c->toString() == "RECTANGLE 20 40 40 25");
	REQUIRE(m_c->toString() == "RECTANGLE 20 40 40 25");

	delete m;
	delete m_c;

} 