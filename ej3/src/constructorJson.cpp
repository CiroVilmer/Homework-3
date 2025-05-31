#include "constructorJson.hpp"

// Constructor de ConstructorJson
ConstructorJson::ConstructorJson() : jsonData(vector<pair<string,string>>()) {};

// Convierte un vector de doubles a una cadena con formato JSON
// Se recorre el vector y se construye una cadena JSON con los valores separados por comas y encerrados entre corchetes
string ConstructorJson::vectorToJson(const vector<double>& v){
    stringstream stream;
    stream << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        stream << v[i];
        if (i < v.size() - 1) {
            stream << ", ";
        }
    }
    stream << "]";
    return stream.str();
}

// Convierte un vector de strings a una cadena con formato JSON
// Se recorre el vector y se construye una cadena JSON con los valores entre comillas, separados por comas y encerrados entre corchetes
string ConstructorJson::vectorToJson(const vector<string>& v){
    stringstream stream;
    stream << "[";
    for (size_t i = 0; i < v.size(); ++i){
        stream << "\"" << v[i] << "\"";
        if(i < v.size() - 1){
            stream << ", ";
        }
    }
    stream << "]";
    return stream.str();
}

// Convierte una matriz de enteros a una cadena con formato JSON
// Se recorre la matriz y se construye una cadena JSON con los valores de cada fila encerrados entre corchetes, separados por comas
string ConstructorJson::matrixToJson(const vector<vector<int>>& m){
    stringstream stream;
    stream << "[" << "\n"; 
    for (size_t i = 0; i < m.size(); ++i){
        stream << "\t[";

        for (size_t j = 0; j < m[i].size(); ++j){
            stream << m[i][j];

            if(j < m[i].size() - 1){
                stream << ",";
            }
        }

        stream << "]";
        if(i < m[i].size() - 1){
            stream << "," << "\n";
        }
    }

    stream << "\n" << "\t]";
    return stream.str();
}

// Agrega un par clave-valor al objeto JSON (string y vectorToJson(vector<double>))
// Parametros:
// - label: la clave del par
// - v: el vector de doubles que se convertirá a formato JSON
void ConstructorJson::agregar(const string& label, const vector<double>& v){
    jsonData.push_back(make_pair(label, vectorToJson(v)));
}

// Agrega un par clave-valor al objeto JSON (string y vectorToJson(vector<string>))
// Parametros:
// - label: la clave del par
// - v: el vector de strings que se convertirá a formato JSON
void ConstructorJson::agregar(const string& label, const vector<string>& v){
    jsonData.push_back(make_pair(label, vectorToJson(v)));
}

// Agrega un par clave-valor al objeto JSON
// Parametros:
// - label: la clave del par
// - m: la matriz de enteros que se convertirá a formato JSON
void ConstructorJson::agregar(const string& label, const vector<vector<int>>& m){
    jsonData.push_back(make_pair(label, matrixToJson(m)));
}

// Imprime el objeto JSON en formato legible
// Se recorre el vector de pares y se imprime cada clave y valor en formato JSON
void ConstructorJson::printJson() const{
cout << "{" << "\n";
    for(size_t i = 0; i < jsonData.size(); ++i){
        cout << "\"" << jsonData[i].first << "\" : " << jsonData[i].second;

        if (i < jsonData.size() - 1){
            cout << "," << endl;
        }else{
            cout << endl;
        }
    }

    cout << "}" << "\n";
};