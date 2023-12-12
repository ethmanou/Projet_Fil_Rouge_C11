// main.cpp
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "List.hpp"
#include <iostream>

int main() {
    Rectangle rectangle(30, 30, 15, 15);
    Cercle cercle(10, 10, 30, 30);
    Cercle cercle1(30, 25 , 22 , 24);
    Cercle cercle2(25 , 23 , 23 , 54);
    Liste L1;
    L1.ajouterCercle(&cercle);
    L1.ajouterCercle(&cercle1);
    L1.ajouterCercle(&cercle2);
    L1.ajouterRectangle(&rectangle);

    std::cout << rectangle.toString() << std::endl;
    std::cout << cercle.toString() << std::endl;

    std::cout << L1.toString() << std::endl;

    return 0;
}
