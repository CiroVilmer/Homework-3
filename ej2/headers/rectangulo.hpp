#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

#include "punto.hpp"

class Rectangulo {
private:
    Punto esquinaInferiorIzquierda;
    float ancho;
    float alto;

public:
    Rectangulo(float x, float y, float ancho, float alto);

    void setAncho(float ancho);
    void setAlto(float alto);

    float getAncho() const;
    float getAlto() const;

    void imprimirRectangulo() const;
};

#endif // RECTANGULO_HPP
