#include "generador.hpp"
#include <iostream>

// Constructor de Generador
// Inicializa los vectores de doubles, strings y matrices como vectores vacíos
Generador::Generador() : doubles(vector<double>()), strings(vector<string>()), matrices(vector<vector<int>>()) {}

// Método para agregar un dato al generador
vector<double> Generador::obtenerDoubles() const {
    return doubles;
}

// Método para agregar un dato al generador
vector<string> Generador::obtenerStrings() const {
    return strings;
}

// Método para agregar un dato al generador
vector<vector<int>> Generador::obtenerMatrices() const {
    return matrices;
}

