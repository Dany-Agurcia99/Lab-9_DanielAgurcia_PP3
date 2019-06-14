#include "Cliente.h"

Cliente::Cliente()
{
}
Cliente::Cliente(string direccion, int telefono, int tarjeta, int pedidos, string nombre, string identidad, int edad): Persona(nombre, identidad, edad)
{

    this->direccion = direccion;
    this->telefono = telefono;
    this->tarjeta = tarjeta;
    this->pedidos = pedidos;
}
string Cliente::getdireccion()
{
    return direccion;
}
void Cliente::setdireccion(string direccion)
{
    this->direccion = direccion;
}

int Cliente::gettelefono()
{
    return telefono;
}
void Cliente::settelefono(int telefono)
{
    this->telefono = telefono;
}

int Cliente::gettarjeta()
{
    return tarjeta;
}
void Cliente::settarjeta(int tarjeta)
{
    this->tarjeta = tarjeta;
}

int Cliente::getpedidos()
{
    return pedidos;
}
void Cliente::setpedidos(int pedidos)
{
    this->pedidos = pedidos;
}
string Cliente::toString()
{
    string ClienteStr;
    string telefono2 = to_string(telefono);
    string tarjeta2 = to_string(tarjeta);
    string pedidos2 = to_string(pedidos);
    string edad2 = to_string(edad);

    ClienteStr ="["+nombre+"]["+identidad+"]["+edad2+"]["+direccion+"]["+telefono2+"]["+tarjeta2+"]["+pedidos2+"]";
    return ClienteStr;
}

int Cliente::ganancia(){
    int ganancias = pedidos*(-100);
    return ganancias;
}