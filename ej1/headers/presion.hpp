#ifndef PRESION_HPP
#define PRESION_HPP

#include "medicionBase.hpp"

class Presion: public MedicionBase{
    public:
    float presionEstatica;  //p
    float presionDinamica;  //q

    Presion(float p, float q, float t);
    Presion(const Presion& otro);

    void imprimir() override;

    void serealizar(ostream& os) override;
    void deserealizar(istream& is) override;
};

#endif // PRESION_HPP