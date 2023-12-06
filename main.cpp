// main.cpp
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include <iostream>

int main() {
    Rectangle rectangle(30, 30, 15, 15);
    Cercle cercle(10, 10, 30, 30);

    std::cout << rectangle.toString() << std::endl;
    std::cout << cercle.toString() << std::endl;

    return 0;
}
