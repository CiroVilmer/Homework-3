#include "medicionBase.hpp"
#include <fstream>

// Constructor de MedicionBase
// Se inicializa el atributo tiempoMedicion con un unique_ptr del float proporcionado.
MedicionBase::MedicionBase(float tiempoMedicion) : tiempoMedicion(make_unique<float>(tiempoMedicion)) {}

// Constructor de copia
// Cómo al utilizar unique_ptr no se puede copiar, creamos un nuevo unique_ptr con el valor del original
// y lo asignamos al nuevo objeto. Esto es una forma de "copiar" el valor sin copiar el puntero y evitar cambios de propiedad.
MedicionBase::MedicionBase(const MedicionBase& otro) : tiempoMedicion(make_unique<float>(*otro.tiempoMedicion)) {}

// Método para obtener el tiempo de medición
float MedicionBase::getTiempo() {
    return *tiempoMedicion;
}

// Método para imprimir el tiempo de medición
void MedicionBase::imprimir() {
    cout << "Tiempo de medicion: " << *tiempoMedicion << endl;
}

// Método para serializar el tiempo de medición
void MedicionBase::serealizar(ostream& os) {
    os.write(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}

// Método para deserializar el tiempo de medición
void MedicionBase::deserealizar(istream& is){
    is.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}