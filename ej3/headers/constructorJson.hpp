#ifndef CONSTRUCTOR_JSON
#define CONSTRUCTOR_JSON

#include <string>
#include <vector>
#include <type_traits>
#include <iostream>
#include <sstream>
using namespace std;

class ConstructorJson {
    private:
    vector<pair<string, string>> jsonData;

    string vectorToJson(const vector<double>& v);
    string vectorToJson(const vector<string>& v);
    string matrixToJson(const vector<vector<int>>& m);

    public:
    ConstructorJson();

    void agregar(const string& label, const vector<double>& v);
    void agregar(const string& label, const vector<string>& v);
    void agregar(const string& label, const vector<vector<int>>& m);

    void printJson() const;


};

#endif // CONSTRUCTOR_JSON