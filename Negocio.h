#ifndef NEGOCIO_H
#define NEGOCIO_H
#include <string>
using std::string;
using std::to_string;
#include <sstream>
using std::stringstream;
#include <vector>
using std::vector;
#include "Producto.h"

class Negocio
{
private:
    string nombre;
    string ubicacion;
    int locales;
    vector<Producto *> lista_productos;

public:
    Negocio();
    Negocio(string, string, int, vector<Producto *>);

    string getnombre();
    void setnombre(string);

    string getubicacion();
    void setubicacion(string);

    int getlocales();
    void setlocales(int);

    vector<Producto *> getlista_productos();
    void setlista_productos(vector<Producto *>);

    string toString();
};
#endif