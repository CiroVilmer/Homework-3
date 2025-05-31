#include "elipse.hpp"

// Constructor de Elipse
// Inicializa el centro y los semiejes mayor y menor con los valores proporcionados
Elipse::Elipse(float x, float y, float semiejeMayor, float semiejeMenor) : centro(x, y), semiejeMayor(semiejeMayor), semiejeMenor(semiejeMenor) {};

// Setter para el semieje mayor de la elipse
void Elipse::setSemiejeMayor(float semiejeMayor) {
    this->semiejeMayor = semiejeMayor;
}

// Setter para el semieje menor de la elipse
void Elipse::setSemiejeMenor(float semiejeMenor) {
    this->semiejeMenor = semiejeMenor;
}

// Getter para el semieje mayor de la elipse
float Elipse::getSemiejeMayor() const {
    return semiejeMayor;
}

// Getter para el semieje menor de la elipse
float Elipse::getSemiejeMenor() const {
    return semiejeMenor;
}

// Método para imprimir los atributos de la elipse
void Elipse::imprimirElipse() const {
    cout << "Elipse: " << endl;
    cout << "Centro: ";
    centro.imprimirPunto();
    cout << "Semieje Mayor: " << semiejeMayor << endl;
    cout << "Semieje Menor: " << semiejeMenor << endl;
}