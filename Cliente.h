#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using std::string;
#include "Persona.h"
class Cliente: public Persona
{
private:
    string direccion;
    int telefono;
    int tarjeta;
    int pedidos;

public:
    Cliente();
    Cliente(string, int, int, int,string,string,int);

    string getdireccion();
    void setdireccion(string);

    int gettelefono();
    void settelefono(int);

    int gettarjeta();
    void settarjeta(int);

    int getpedidos();
    void setpedidos(int);

    string toString();
    virtual int ganancia();
};
#endif