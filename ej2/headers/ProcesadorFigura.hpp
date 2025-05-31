#ifndef PROCESADORFIGURA_HPP
#define PROCESADORFIGURA_HPP

#include "includes.hpp"

template <typename T>
class ProcesadorFigura{
    public:
        static float calcularArea(const T& figura);
};

template <>
class ProcesadorFigura<Circulo> {
public:
    static float calcularArea(const Circulo& c);
};

template <>
class ProcesadorFigura<Elipse> {
public:
    static float calcularArea(const Elipse& e);
};

template <>
class ProcesadorFigura<Rectangulo> {
public:
    static float calcularArea(const Rectangulo& r);
};

#endif // PROCESADORFIGURA_HPP