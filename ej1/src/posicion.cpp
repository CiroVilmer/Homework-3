#include "posicion.hpp"
#include <fstream>

// Constructor de Posicion
// Inicializa los atributos latitud, longitud y altitud con los valores proporcionados
// Se utiliza el constructor de MedicionBase para inicializar el tiempo de medición.
Posicion::Posicion(float lat, float lon, float alt, float t): MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {};

// Constructor de copia
// Utilizamos el constructor de copia de MedicionBase para copiar el tiempo de medición
// y luego copiamos los atributos específicos de la clase Posicion.
Posicion::Posicion(const Posicion& otro): MedicionBase(otro), latitud(otro.latitud), longitud(otro.longitud), altitud(otro.altitud) {};

// Método para imprimir la posición
void Posicion::imprimir() {
    MedicionBase::imprimir();
    cout << "Latitud: " << latitud << endl;
    cout << "Longitud: " << longitud << endl;
    cout << "Altitud: " << altitud << endl;
}

// Método para serializar la posición
void Posicion::serealizar(ostream& os) {
    MedicionBase::serealizar(os);
    os.write(reinterpret_cast<char*>(&latitud), sizeof(float));
    os.write(reinterpret_cast<char*>(&longitud), sizeof(float));
    os.write(reinterpret_cast<char*>(&altitud), sizeof(float));
}

// Método para deserializar la posición
void Posicion::deserealizar(istream& is) {
    MedicionBase::deserealizar(is);
    is.read(reinterpret_cast<char*>(&latitud), sizeof(float));
    is.read(reinterpret_cast<char*>(&longitud), sizeof(float));
    is.read(reinterpret_cast<char*>(&altitud), sizeof(float));
}