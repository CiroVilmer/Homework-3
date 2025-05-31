#include "presion.hpp"
#include <fstream>

// Constructor de Presion
// Inicializa los atributos presionEstatica y presionDinamica con los valores proporcionados
// Se utiliza el constructor de MedicionBase para inicializar el tiempo de medición.
Presion::Presion(float p, float q, float t): MedicionBase(t), presionEstatica(p), presionDinamica(q) {};

// Constructor de copia
// Utilizamos el constructor de copia de MedicionBase para copiar el tiempo de medición
// y luego copiamos los atributos específicos de la clase Presion.
Presion::Presion(const Presion& otro): MedicionBase(otro), presionEstatica(otro.presionEstatica), presionDinamica(otro.presionDinamica) {};

// Método para imprimir la presión
void Presion::imprimir(){
    MedicionBase::imprimir();
    cout << "Presión Estática: " << presionEstatica << endl;
    cout << "Presión Dinámica: " << presionDinamica << endl;
}

// Método para serializar la presión
void Presion::serealizar(ostream& os){
    MedicionBase::serealizar(os);
    os.write(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    os.write(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}

// Método para deserializar la presión
void Presion::deserealizar(istream& is){
    MedicionBase::deserealizar(is);
    is.read(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    is.read(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}