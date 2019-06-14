#include "Producto.h"

Producto::Producto()
{
}
Producto::Producto(string nombre, string tipo)
{

    this->nombre = nombre;
    this->tipo = tipo;
}
string Producto::getnombre()
{
    return nombre;
}
void Producto::setnombre(string nombre)
{
    this->nombre = nombre;
}

string Producto::gettipo()
{
    return tipo;
}
void Producto::settipo(string tipo)
{
    this->tipo = tipo;
}
string Producto::toString()
{
    string ProductoStr;
    ProductoStr = "["+nombre+"]["+tipo+"]";
    return ProductoStr;
}