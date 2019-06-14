#include "EmpleadoOficina.h"

EmpleadoOficina::EmpleadoOficina()
{
}
EmpleadoOficina::EmpleadoOficina(int horas, string local, int total_ordenes, string nombre, string identidad, int edad): Persona(nombre, identidad, edad)
{
    this->horas = horas;
    this->local = local;
    this->total_ordenes = total_ordenes;
}
int EmpleadoOficina::gethoras()
{
    return horas;
}
void EmpleadoOficina::sethoras(int horas)
{
    this->horas = horas;
}

string EmpleadoOficina::getlocal()
{
    return local;
}
void EmpleadoOficina::setlocal(string local)
{
    this->local = local;
}

int EmpleadoOficina::gettotal_ordenes()
{
    return total_ordenes;
}
void EmpleadoOficina::settotal_ordenes(int total_ordenes)
{
    this->total_ordenes = total_ordenes;
}
string EmpleadoOficina::toString()
{
    string EmpleadoOficinaStr;
    string edad2 = to_string(edad);
    string horas2 = to_string(horas);
    string total2 = to_string(total_ordenes);
    EmpleadoOficinaStr = "["+nombre+"]["+identidad+"]["+edad2+"]["+horas2+"]["+local+"]["+total2+"]";
    return EmpleadoOficinaStr;
}
int EmpleadoOficina::ganancia()
{
    int ganancias = 30 * total_ordenes + total_ordenes;
    return ganancias;
}