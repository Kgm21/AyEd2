#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP

#include <iostream>
#include "../include/Pedido.hpp"


using namespace std;

class Controlador 
{

    public: 
        
        void MostrarPedido(Pedido* pedido);
        
        Controlador();
        ~Controlador(); 
           
};
#endif