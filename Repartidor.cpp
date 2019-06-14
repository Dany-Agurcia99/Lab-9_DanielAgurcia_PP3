#include "Repartidor.h"

Repartidor::Repartidor()
{
}
Repartidor::Repartidor(string placa, string zona, int ordenes, string nombre, string identidad, int edad): Persona(nombre, identidad, edad)
{

    this->placa = placa;
    this->zona = zona;
    this->ordenes = ordenes;
}
string Repartidor::getplaca()
{
    return placa;
}
void Repartidor::setplaca(string placa)
{
    this->placa = placa;
}

string Repartidor::getzona()
{
    return zona;
}
void Repartidor::setzona(string zona)
{
    this->zona = zona;
}

int Repartidor::getordenes()
{
    return ordenes;
}
void Repartidor::setordenes(int ordenes)
{
    this->ordenes = ordenes;
}
string Repartidor::toString()
{
    string RepartidorStr;
    string edad2 = to_string(edad);
    string ordenes2 = to_string(ordenes);
    RepartidorStr = "["+nombre+"]["+identidad+"]["+edad2+"]["+placa+"]["+zona+"]["+ordenes2+"]";
    return RepartidorStr;
}
int Repartidor::ganancia(){
    int ganancias = 40*ordenes;
    return ganancias;
}