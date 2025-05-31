#ifndef PUNTO_HPP
#define PUNTO_HPP

#include <iostream>
#include <string>
using namespace std;

class Punto{
private:
    float x;
    float y;

public:
    Punto(float x, float y);

    void setX(float x);
    void setY(float y);

    float getX() const;
    float getY() const;

    void imprimirPunto() const;
};

#endif // PUNTO_HPP