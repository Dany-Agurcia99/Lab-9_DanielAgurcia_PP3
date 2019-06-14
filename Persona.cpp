#include "Persona.h"

Persona::Persona()
{
}
Persona::Persona(string nombre, string identidad, int edad)
{
    this->nombre = nombre;
    this->identidad = identidad;
    this->edad = edad;
}
string Persona::getnombre()
{
    return nombre;
}
void Persona::setnombre(string nombre)
{
    this->nombre = nombre;
}

string Persona::getidentidad()
{
    return identidad;
}
void Persona::setidentidad(string identidad)
{
    this->identidad = identidad;
}

int Persona::getedad()
{
    return edad;
}
void Persona::setedad(int edad)
{
    this->edad = edad;
}
