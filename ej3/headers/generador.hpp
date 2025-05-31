#ifndef GENERADOR_HPP
#define GENERADOR_HPP

#include <string>
#include <vector>
#include <type_traits>
#include <iostream>
using namespace std;

class Generador {
    private:
    vector<double> doubles;
    vector<string> strings;
    vector<vector<int>> matrices;

    public:
    Generador();

    template <typename T>
    void agregarDato(const T& dato){
        if constexpr(is_same_v<T, double>){
            doubles.push_back(dato);
        } else if constexpr(is_same_v<T, string>){
            strings.push_back(dato);
        } else if constexpr(is_same_v<T, vector<int>>){
            matrices.push_back(dato);
        } else {
            cout << "Tipo no soportado" << endl;
        }
    }

    vector<double> obtenerDoubles() const;
    vector<string> obtenerStrings() const;
    vector<vector<int>> obtenerMatrices() const;
};

#endif // GENERADOR_HPP