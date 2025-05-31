#ifndef POSICION_HPP
#define POSICION_HPP

#include "medicionBase.hpp"

class Posicion: public MedicionBase{
    public:
    float latitud;  //x
    float longitud;  //y
    float altitud;  //z

    Posicion(float lat, float lon, float alt, float t);
    Posicion(const Posicion& otro);
    void imprimir() override;

    void serealizar(ostream& os) override;
    void deserealizar(istream& is) override;
};

#endif // POSICION_HPP