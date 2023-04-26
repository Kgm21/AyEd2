#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <iostream>
// #include "Pedido.hpp"
using namespace std;

class Cliente
{
    private:
        string nombreCliente;
        string apellidoCliente;
        int dniCliente;

    public:
        Cliente();
        ~Cliente();
        
        void setNombreCliente(string _nombreCliente);
        string getNombreCliente();
        void setApellidoCliente(string _apellidoCliente);
        string getApellidoCliente();
        void setDniCliente(int _dniCliente);
        int getDniCliente();
};

#endif