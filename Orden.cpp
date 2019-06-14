#include "Orden.h"

Orden::Orden()
{
}
Orden::Orden(Cliente *cliente, Negocio *negocio, Repartidor *repartidor, string tipo, string estado, Producto *producto)
{
    this->cliente = cliente;
    this->negocio = negocio;
    this->repartidor = repartidor;
    this->tipo = tipo;
    this->estado = estado;
    this->producto = producto;
}
Cliente *Orden::getcliente()
{
    return cliente;
}
void Orden::setcliente(Cliente *cliente)
{
    this->cliente = cliente;
}

Negocio *Orden::getnegocio()
{
    return negocio;
}
void Orden::setnegocio(Negocio *negocio)
{
    this->negocio = negocio;
}

Repartidor *Orden::getrepartidor()
{
    return repartidor;
}
void Orden::setrepartidor(Repartidor *repartidor)
{
    this->repartidor = repartidor;
}

string Orden::gettipo()
{
    return tipo;
}
void Orden::settipo(string tipo)
{
    this->tipo = tipo;
}

string Orden::getestado()
{
    return estado;
}
void Orden::setestado(string estado)
{
    this->estado = estado;
}

Producto *Orden::getproducto()
{
    return producto;
}
void Orden::setproducto(Producto *producto)
{
    this->producto = producto;
}

string Orden::toString()
{
    string OrdenStr;
    string edad = to_string(cliente->getedad());
    OrdenStr = cliente->getnombre() + edad + cliente->getdireccion() + negocio->getnombre() + producto->getnombre();
    return OrdenStr;
}