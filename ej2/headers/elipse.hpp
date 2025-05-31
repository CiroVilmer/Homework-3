#ifndef ELIPSE_HPP
#define ELIPSE_HPP

#include "punto.hpp"

class Elipse {
private:
    Punto centro;
    float semiejeMayor;
    float semiejeMenor;
public:
    Elipse(float x, float y, float semiejeMayor, float semiejeMenor);

    void setSemiejeMayor(float semiejeMayor);
    void setSemiejeMenor(float semiejeMenor);

    float getSemiejeMayor() const;
    float getSemiejeMenor() const;

    void imprimirElipse() const;
};

#endif // ELIPSE_HPP