#ifndef ORDEN_H
#define ORDEN_H
#include <string>
using std::string;

#include "Cliente.h"
#include "Negocio.h"
#include "Repartidor.h"
#include "Producto.h"
class Orden
{
private:
    Cliente *cliente;
    Negocio *negocio;
    Repartidor *repartidor;
    Producto *producto;
    string tipo;
    string estado;

public:
    Orden();
    Orden(Cliente *, Negocio *, Repartidor *, string, string, Producto *);

    Cliente *getcliente();
    void setcliente(Cliente *);

    Negocio *getnegocio();
    void setnegocio(Negocio *);

    Repartidor *getrepartidor();
    void setrepartidor(Repartidor *);

    string gettipo();
    void settipo(string);

    string getestado();
    void setestado(string);

    Producto *getproducto();
    void setproducto(Producto *);

    string toString();
};
#endif