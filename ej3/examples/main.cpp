#include "generador.hpp"
#include "constructorJson.hpp"

int main(){
    Generador gen;

    gen.agregarDato(1.3);
    gen.agregarDato(2.1);
    gen.agregarDato(3.2);
    gen.agregarDato(string("Hola"));
    gen.agregarDato(string("Mundo"));
    gen.agregarDato(vector<int>{1 , 2});
    gen.agregarDato(vector<int>{3, 4});

    ConstructorJson c;
    c.agregar("vec_doubles", gen.obtenerDoubles());
    c.agregar("palabras", gen.obtenerStrings());
    c.agregar("listas", gen.obtenerMatrices());

    c.printJson();
}
