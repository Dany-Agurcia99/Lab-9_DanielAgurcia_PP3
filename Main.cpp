#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
#include <vector>
using std::vector;

#include "Persona.h"
#include "Cliente.h"
#include "Repartidor.h"
#include "EmpleadoOficina.h"
#include "Negocio.h"
#include "Producto.h"
#include "Orden.h"

vector<Cliente *> lista_clientes;
vector<Repartidor *> lista_repartidores;
vector<EmpleadoOficina *> lista_empleados;

vector<Negocio *> lista_negocios;

vector<Orden *> lista_ordenes;

void Personas(), Negocios(), Ordenes();
void CrearPersona(), ListarPersona(), EliminarPersona();
void CrearNegocio(), ListarNegocio(), EliminarNegocio();
void CrearOrden(), ListarOrden(), CCOrden();

int main()
{
    int opcion = 0;
    while (opcion != 4)
    {
        cout << "Menu" << endl
             << "1-Personas" << endl
             << "2-Negocios" << endl
             << "3-Ordenes" << endl
             << "4-Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "eligio opcion 1" << endl;
            Personas();
        }
        else if (opcion == 2)
        {
            cout << "eligio opcion 2" << endl;
            Negocios();
        }
        else if (opcion == 3)
        {
            cout << "eligio opcion 3" << endl;
            Ordenes();
        }
        else if (opcion == 4)
        {
            cout << "Adios" << endl;
        }
    }
    return 0;
}
void Personas()
{
    int opcion = 0;
    while (opcion != 4)
    {
        cout << "Menu" << endl
             << "1-Crear Persona" << endl
             << "2-Listar Persona" << endl
             << "3-Eliminar Persona" << endl
             << "4-Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "eligio opcion 1" << endl;
            CrearPersona();
        }
        else if (opcion == 2)
        {
            cout << "eligio opcion 2" << endl;
            ListarPersona();
        }
        else if (opcion == 3)
        {
            cout << "eligio opcion 3" << endl;
            EliminarPersona();
        }
        else if (opcion == 4)
        {
            cout << "Adios" << endl;
        }
    }
}
void Negocios()
{

    int opcion = 0;
    while (opcion != 4)
    {
        cout << "Menu" << endl
             << "1-Crear Negocio" << endl
             << "2-Listar Negocio" << endl
             << "3-Eliminar Negocio" << endl
             << "4-Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "eligio opcion 1" << endl;
            CrearNegocio();
        }
        else if (opcion == 2)
        {
            cout << "eligio opcion 2" << endl;
            ListarNegocio();
        }
        else if (opcion == 3)
        {
            cout << "eligio opcion 3" << endl;
            EliminarNegocio();
        }
        else if (opcion == 4)
        {
            cout << "Adios" << endl;
        }
    }
}
void Ordenes()
{
    int opcion = 0;
    while (opcion != 3)
    {
        cout << "Menu" << endl
             << "1-CrearOrden" << endl
             << "2-ListarOrden" << endl
             << "3-Confirmar o Cancelar ordenes en proceso" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "eligio opcion 1" << endl;
            CrearOrden();
        }
        else if (opcion == 2)
        {
            cout << "eligio opcion 2" << endl;
            ListarOrden();
        }
        else if (opcion == 3)
        {
            cout << "eligio opcion 3" << endl;
            CCOrden();
        }
        else if (opcion == 4)
        {
            cout << "Adios" << endl;
        }
    }
}

void CrearPersona()
{
    string nombre, identidad;
    int edad, opcion;
    cout << "Ingrese el nombre de la persona";
    cin >> nombre;
    cout << "Ingrese el numro de identidad de la persona";
    cin >> identidad;
    cout << "Ingrese la edad de la persona";
    cin >> edad;
    cout << "Menu" << endl
         << "1-Cliente" << endl
         << "2-Repartidor" << endl
         << "3-Empleado" << endl;
    cout << "Ingrese la opcion:";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    {
        string direccion;
        int telefono, tarjeta, pedidos;
        cout << "Ingrese la direccion del cliente";
        cin >> direccion;
        cout << "Ingrese el telefono del cliente";
        cin >> telefono;
        cout << "Ingrese la tarjeta del cliente";
        cin >> tarjeta;
        cout << "Ingrese los pedidos del cliente";
        cin >> pedidos;
        Cliente *cliente = new Cliente(direccion, telefono, tarjeta, pedidos, nombre, identidad, edad);
        lista_clientes.push_back(cliente);
    }
    break;
    case 2:
    {
        string placa, zona;
        int ordenes;
        cout << "Ingrese la placa del repartidor";
        cin >> placa;
        cout << "Ingrese la zona del repartidor";
        cin >> zona;
        cout << "Ingrese las ordenes del repartidor";
        cin >> ordenes;
        Repartidor *repartidor = new Repartidor(placa, zona, ordenes, nombre, identidad, edad);
        lista_repartidores.push_back(repartidor);
    }
    break;
    case 3:
    {
        string local;
        int horas, total_ordenes;
        cout << "Ingrese el local del empleado de oficina";
        cin >> local;
        cout << "Ingrese las horas del empleado de oficina";
        cin >> horas;
        cout << "Ingrese el total de ordenes del empleado de oficina";
        cin >> total_ordenes;
        EmpleadoOficina *empleado = new EmpleadoOficina(horas, local, total_ordenes, nombre, identidad, edad);
        lista_empleados.push_back(empleado);
    }
    break;
    }
}

void ListarPersona()
{
    cout << "CLIENTES" << endl;
    for (int i = 0; i < lista_clientes.size(); i++)
    {
        cout << lista_clientes[i]->toString() << "(" << lista_clientes[i]->ganancia() << ")" << endl;
    }
    cout << "REPARTIDORES" << endl;
    for (int j = 0; j < lista_repartidores.size(); j++)
    {
        cout << lista_repartidores[j]->toString() << "(" << lista_repartidores[j]->ganancia() << ")" << endl;
    }
    cout << "EMPLEADOS DE OFICINA" << endl;
    for (int k = 0; k < lista_empleados.size(); k++)
    {
        cout << lista_empleados[k]->toString() << "(" << lista_empleados[k]->ganancia() << ")" << endl;
    }
}

void EliminarPersona()
{
    int opcion = 0;
    cout << "1-Eliminar Cliente" << endl
         << "2-Eliminar Repartidor" << endl
         << "3-Eliminar Empleado de Oficina" << endl
         << "6-Salir" << endl;
    cout << "Ingrese una opcion: " << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    {
        for (int i = 0; i < lista_clientes.size(); i++)
        {
            cout << lista_clientes[i]->toString() << endl;
        }
        int posicion;
        cout << "Ingrese la posicion que quiere eliminar: ";
        cin >> posicion;
        lista_clientes.erase(lista_clientes.begin() + posicion);
        cout << "Borrado con exito";
    }
    break;
    case 2:
    {
        for (int j = 0; j < lista_repartidores.size(); j++)
        {
            cout << lista_repartidores[j]->toString() << endl;
        }
        int posicion;
        cout << "Ingrese la posicion que quiere eliminar: ";
        cin >> posicion;
        lista_repartidores.erase(lista_repartidores.begin() + posicion);
        cout << "Borrado con exito";
    }
    break;
    case 3:
    {
        for (int k = 0; k < lista_empleados.size(); k++)
        {
            cout << lista_empleados[k]->toString() << endl;
        }
        int posicion;
        cout << "Ingrese la posicion que quiere eliminar: ";
        cin >> posicion;
        lista_empleados.erase(lista_empleados.begin() + posicion);
        cout << "Borrado con exito";
        break;
    }
    }
}

void CrearNegocio()
{
    string nombre, ubicacion;
    int locales;
    vector<Producto *> lista_productos;
    cout << "Ingrese el nombre del negocio: ";
    cin >> nombre;
    cout << "Ingrese la ubicacion del negocio: ";
    cin >> ubicacion;
    cout << "Cuantos productos tiene le negocio?: ";
    int cantidad;
    cin >> cantidad;
    string nombreP, tipo;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese nombre del producto " << i << ":";
        cin >> nombre;
        cout << "Ingrese el tipo del producto " << i << ":";
        cin >> tipo;
        Producto *producto = new Producto(nombreP, tipo);
        lista_productos.push_back(producto);
    }
    Negocio *negocio = new Negocio(nombre, ubicacion, locales, lista_productos);
}

void ListarNegocio()
{
    for (int i = 0; i < lista_negocios.size(); i++)
    {
        cout << "***NEGOCIO " << i << " ***" << endl;
        cout << lista_negocios[i]->toString() << endl;
    }
}

void EliminarNegocio()
{
    for (int i = 0; i < lista_negocios.size(); i++)
    {
        cout << "***NEGOCIO " << i << " ***" << endl;
        cout << lista_negocios[i]->toString() << endl;
    }
    int posicion;
    cout << "Ingrese la posicion que quiere eliminar: ";
    cin >> posicion;
    lista_negocios.erase(lista_negocios.begin() + posicion);
    cout << "Borrado con exito";
}

void CrearOrden()
{
    Cliente *cliente;
    Negocio *negocio;
    Repartidor *repartidor;
    Producto *producto;
    string tipo, estado;
    int posicion;
    for (int i = 0; i < lista_clientes.size(); i++)
    {
        cout << lista_clientes[i]->toString() << endl;
    }
    cout << "seleccione la posicion del cliente: ";
    cin >> posicion;
    cliente = lista_clientes[posicion];
    for (int k = 0; k < lista_negocios.size(); k++)
    {
        cout << "***NEGOCIO " << k << " ***" << endl;
        cout << lista_negocios[k]->toString() << endl;
    }
    cout << "seleccione la posicion del negocio: ";
    cin >> posicion;
    negocio = lista_negocios[posicion];
    for (int j = 0; j < lista_repartidores.size(); j++)
    {
        cout << lista_repartidores[j]->toString() << endl;
    }
    cout << "seleccione la posicion del repartidor: ";
    cin >> posicion;
    repartidor = lista_repartidores[posicion];
    vector<Producto *> productos = negocio->getlista_productos;
    for (int i = 0; i < productos.size(); i++)
    {
        cout << productos[i]->toString() << endl;
    }
    cout << "seleccione la posicion del producto: ";
    cin >> posicion;
    producto = productos[posicion];
    cout << "Que tipo de producto es? comestible o no comestible?: ";
    cin >> tipo;
    estado = "Proceso";
    Orden *orden = new Orden(cliente, negocio, repartidor, tipo, estado, producto);
    lista_ordenes.push_back(orden);
}

void ListarOrden()
{
    for (int i = 0; i < lista_ordenes.size(); i++)
    {
        cout << lista_ordenes[i]->toString() << endl;
    }
}
void CCOrden()
{
    int opcion;
    cout << "Menu" << endl
         << "1-Cancelar" << endl
         << "2-Confirmar" << endl
         << "3-Salir" << endl;
    cout << "Ingrese la opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:

        for (int i = 0; i < lista_ordenes.size(); i++)
        {
            cout << lista_ordenes[i]->toString() << endl;
        }
        int posicion;
        cout << "Seleccione la posicion que desea Cancelar: ";
        cin >> posicion;
        Orden *orden = lista_ordenes[posicion];
        orden->setestado("Cancelado");
        
        break;
    case 2:

        for (int i = 0; i < lista_ordenes.size(); i++)
        {
            cout << lista_ordenes[i]->toString() << endl;
        }
        int posicion;
        cout << "Seleccione la posicion que desea Confirmar: ";
        cin >> posicion;
        Orden *orden = lista_ordenes[posicion];
        orden->setestado("Confirmado");
        orden->getcliente()->setpedidos(orden->getcliente()->getpedidos() + 1);
        orden->getrepartidor()->setordenes(orden->getrepartidor()->getordenes() + 1);
        for (int k = 0; k < lista_empleados.size(); k++)
        {
            lista_empleados[k]->settotal_ordenes(lista_empleados[k]->gettotal_ordenes()+1);
        }

        break;
    }
}