#include "Negocio.h"

Negocio::Negocio()
{
}
Negocio::Negocio(string nombre, string ubicacion, int locales, vector<Producto *> lista_productos)
{
    this->nombre = nombre;
    this->ubicacion = ubicacion;
    this->locales = locales;
    this->lista_productos = lista_productos;
}
string Negocio::getnombre()
{
    return nombre;
}
void Negocio::setnombre(string nombre)
{
    this->nombre = nombre;
}

string Negocio::getubicacion()
{
    return ubicacion;
}
void Negocio::setubicacion(string ubicacion)
{
    this->ubicacion = ubicacion;
}

int Negocio::getlocales()
{
    return locales;
}
void Negocio::setlocales(int locales)
{
    this->locales = locales;
}

vector<Producto *> Negocio::getlista_productos()
{
    return lista_productos;
}
void Negocio::setlista_productos(vector<Producto *> lista_productos)
{
    this->lista_productos = lista_productos;
}
string Negocio::toString()
{
    string NegocioStr,lista;
    stringstream stream;
    for (int i = 0; i < lista_productos.size(); i++)
    {
        string i2 = to_string(i); 
        stream<<"("+i2+")["+lista_productos[i]->toString()+"]\n";
    }
    lista = stream.str();
    string locales2 = to_string(locales);
    NegocioStr = "["+nombre+"]["+ubicacion+"]["+locales2+"]\n"+lista;
    return NegocioStr;
}