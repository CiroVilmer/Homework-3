#include "ProcesadorFigura.hpp"

#define PI 3.14159f

// Definición base de la plantilla ProcesadorFigura
template<typename T>
float ProcesadorFigura<T>::calcularArea(const T& figura) {
    return 0.0f;
}

// Especialización para Circulo de ProcesadorFigura
float ProcesadorFigura<Circulo>::calcularArea(const Circulo& c) {
    return PI * c.getRadio() * c.getRadio();
}

// Especialización para Elipse de ProcesadorFigura
float ProcesadorFigura<Elipse>::calcularArea(const Elipse& e) {
    return PI * e.getSemiejeMayor() * e.getSemiejeMenor();
}

// Especialización para Rectangulo de ProcesadorFigura
float ProcesadorFigura<Rectangulo>::calcularArea(const Rectangulo& r) {
    return r.getAncho() * r.getAlto();
}
