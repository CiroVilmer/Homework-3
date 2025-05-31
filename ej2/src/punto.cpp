#include "punto.hpp"

// Constructor de Punto
Punto::Punto(float x, float y) : x(x), y(y) {}

// Setter para la coordenada x del punto
void Punto::setX(float x) {
    this->x = x;
}

// Setter para la coordenada y del punto
void Punto::setY(float y) {
    this->y = y;
}

// Getter para la coordenada x del punto
float Punto::getX() const {
    return x;
}

// Getter para la coordenada y del punto
float Punto::getY() const {
    return y;
}

// Método para imprimir las coordenadas del punto
void Punto::imprimirPunto() const {
    cout << "Punto(" << x << ", " << y << ")" << endl;
}