#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <iostream>
#include <vector>
#include "../include/Cliente.hpp"
#include "../include/Articulo.hpp"
#include "../include/empleado.hpp"

using namespace std;

class Pedido
{
    private:
        Cliente* cliente;
        Articulo* articulo;
        Empleado* empleado;

    public:  

        Pedido(Cliente *_cliente,Articulo* _articulo,Empleado* _empleado);
        ~Pedido(); 

        string getNombreCliente();
        string getApellidoCliente();
        string getNombreArticulo();
        float getPrecioArticulo();
        string getNombreEmpleado();
};
#endif