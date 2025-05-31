#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "punto.hpp"

class Circulo {
private:
    Punto centro;
    float radio;
public:
    Circulo(float x, float y, float radio);

    void setRadio(float radio);
    float getRadio() const;

    void imprimirCirculo() const;
};

#endif // CIRCULO_HPP
