#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using std::string;
using std::to_string;
class Persona
{
public:
    string nombre;
    string identidad;
    int edad;

public:
    Persona();
    Persona(string, string, int);

    string getnombre();
    void setnombre(string);

    string getidentidad();
    void setidentidad(string);

    int getedad();
    void setedad(int);

    string toString();
    virtual int ganancia()=0;
};
#endif