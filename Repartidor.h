#ifndef REPARTIDOR_H
#define REPARTIDOR_H
#include "Persona.h"
#include <string>
using std::string;
class Repartidor:public Persona
{
private:
    string placa;
    string zona;
    int ordenes;

public:
    Repartidor();
    Repartidor(string, string, int,string,string,int);

    string getplaca();
    void setplaca(string);

    string getzona();
    void setzona(string);

    int getordenes();
    void setordenes(int);

    string toString();
    virtual int ganancia();
};
#endif