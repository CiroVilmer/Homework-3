#ifndef FLIGHTDATA_HPP
#define FLIGHTDATA_HPP

#include "posicion.hpp"
#include "presion.hpp"

class SaveFlightData{
    public:
    Posicion posicion;
    Presion presion;
    
    SaveFlightData(const Posicion& p, const Presion& q);
    void serealizar(ostream& os);
    void deserealizar(istream& is);
    void imprimir();
};

#endif // FLIGHTDATA_HPP
