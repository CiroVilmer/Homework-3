#include "circulo.hpp"

// Constructor de Circulo
// Inicializa el centro y el radio del círculo con los valores proporcionados
Circulo::Circulo(float x, float y, float radio) : centro(x, y), radio(radio) {}

// Setter para el radio del círculo
void Circulo::setRadio(float radio) {
    this->radio = radio;
}

// Getter para el radio del círculo
float Circulo::getRadio() const {
    return radio;
}

// Método para imprimir los atributos del círculo
void Circulo::imprimirCirculo() const {
    cout << "Circulo: " << endl;
    cout << "Centro: ";
    centro.imprimirPunto();
    cout << "Radio: " << radio << endl;
}