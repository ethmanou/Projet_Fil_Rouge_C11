// Cercle.cpp
#include "Cercle.h"

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Cercle::Cercle(Point center, int radius) : x(center.x - radius), y(center.y - radius), w(2 * radius), h(2 * radius) {}

std::string Cercle::toString() const {
    return "CERCLE " + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(w) + " " + std::to_string(h);
}
