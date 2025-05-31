#include "flightData.hpp"
#include <fstream>

//Constructor de SaveFlightData
// Inicializa los atributos posicion y presion con los objetos proporcionados
SaveFlightData::SaveFlightData(const Posicion& p, const Presion& q): posicion(p), presion(q) {}

// Imprime los datos de vuelo, llamando a los printers de la posición y la presión.
void SaveFlightData::imprimir() {
    cout << "Datos de vuelo:" << endl;
    cout << "----------------" << endl;
    cout << "Posicion:" << endl;
    posicion.imprimir();
    cout << "----------------" << endl;
    cout << "Presion:" << endl;
    presion.imprimir();
}

// Serializa los datos de vuelo, guardando la posición y la presión.
void SaveFlightData::serealizar(ostream& os) {
    posicion.serealizar(os);
    presion.serealizar(os);
}

// Deserializa los datos de vuelo, leyendo la posición y la presión.
void SaveFlightData::deserealizar(istream& is) {
    posicion.deserealizar(is);
    presion.deserealizar(is);
}