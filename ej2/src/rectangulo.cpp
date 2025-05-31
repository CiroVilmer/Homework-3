#include "rectangulo.hpp"

// Constructor de Rectangulo
Rectangulo::Rectangulo(float x, float y, float ancho, float alto) : esquinaInferiorIzquierda(x, y), ancho(ancho), alto(alto) {}

// Setters para el ancho rectángulo
void Rectangulo::setAncho(float ancho) {
    this->ancho = ancho;
}

// Setters para el alto rectángulo
void Rectangulo::setAlto(float alto) {
    this->alto = alto;
}

// Getters para el ancho rectángulo
float Rectangulo::getAncho() const {
    return ancho;
}

// Getters para el alto rectángulo
float Rectangulo::getAlto() const {
    return alto;
}

// Método para imprimir los atributos del rectángulo
void Rectangulo::imprimirRectangulo() const {
    cout << "Rectangulo: " << endl;
    cout << "Esquina Inferior Izquierda: ";
    esquinaInferiorIzquierda.imprimirPunto();
    cout << "Ancho: " << ancho << endl;
    cout << "Alto: " << alto << endl;
}