#include <iostream>
#include "headers/ProcesadorFigura.hpp"
using namespace std;

int main() {
    Circulo c(0, 0 , 7);
    Elipse e(0,0, 5, 4);
    Rectangulo r(0,0, 5, 6);

    cout << "Área del círculo: " << ProcesadorFigura<Circulo>::calcularArea(c) << endl;
    cout << "Área de la elipse: " << ProcesadorFigura<Elipse>::calcularArea(e) << endl;
    cout << "Área del rectángulo: " << ProcesadorFigura<Rectangulo>::calcularArea(r) << endl;

    return 0;
}
