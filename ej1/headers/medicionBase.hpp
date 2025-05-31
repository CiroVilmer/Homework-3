#ifndef MEDICIONBASE_HPP
#define MEDICIONBASE_HPP

#include <iostream>
#include <string>
#include <memory>
using namespace std;

class IMediciones{
    public: 
    virtual void serealizar(ostream& os) = 0;
    virtual void deserealizar(istream& is) = 0;
    virtual ~IMediciones() = default;
};

class MedicionBase: public IMediciones{
    protected:
    unique_ptr<float> tiempoMedicion;

    public:
    MedicionBase(float tiempoMedicion);
    MedicionBase(const MedicionBase& otro);

    float getTiempo();
    virtual void imprimir();
    void serealizar(ostream& os) override;
    void deserealizar(istream& is) override;
    
    virtual ~MedicionBase() = default;
};

#endif // MEDICIONBASE_HPP