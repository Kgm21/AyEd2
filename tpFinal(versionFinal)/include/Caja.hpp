#ifndef CAJA_HPP
#define CAJA_HPP
#include <iostream>
#include "./Pedido.hpp"
#include "./HojaDeRuta.hpp"
using namespace std;

class Caja
{
    private:
        Pedido* pedido;
        // Tarifa* tarifa;
        // Bulto* bulto;
    public:
        Caja();
        ~Caja();
        void mostrarPedido(Pedido* pedido);
};

#endif