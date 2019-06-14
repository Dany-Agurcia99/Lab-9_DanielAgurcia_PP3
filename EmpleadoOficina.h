#ifndef EMPLEADOOFICINA_H
#define EMPLEADOOFICINA_H
#include "Persona.h"
#include <string>
using std::string;
class EmpleadoOficina:public Persona
{
private:
    int horas;
    string local;
    int total_ordenes;

public:
    EmpleadoOficina();
    EmpleadoOficina(int, string, int,string,string,int);

    int gethoras();
    void sethoras(int);

    string getlocal();
    void setlocal(string);

    int gettotal_ordenes();
    void settotal_ordenes(int);

    string toString();
    virtual int ganancia();
};
#endif