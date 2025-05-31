#include "flightData.hpp"
#include <fstream>

int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData datosVuelo(posicion, presion);
    ofstream out("datosVuelo.dat", ios::binary);
    datosVuelo.serealizar(out);
    out.close();

    cout << "Datos de vuelo serializados." << endl;

    SaveFlightData datosVueloDeserealizados(posicion, presion);
    ifstream in("datosVuelo.dat", ios::binary);
    datosVueloDeserealizados.deserealizar(in);
    in.close();

    cout << "Datos de vuelo deserializados." << endl;

    datosVueloDeserealizados.imprimir();
    cout << "Datos de vuelo impresos." << endl;
    return 0;
}