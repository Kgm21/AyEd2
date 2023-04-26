#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#include <iostream>
#include <string>
#include "./Cliente.hpp"
#include "./Bulto.hpp"
#include "./Tarifa.hpp"
using namespace std;

class Pedido
{
    private:
        Cliente* cliente;
        Bulto* bulto;
        Tarifa* tarifa;
        string nombrePedido;

    public:
        Pedido(Cliente* _cliente, Bulto* _bulto, Tarifa* _tarifa);
        Pedido();
        ~Pedido();
        
        void setPedido(string _nombrePedido);
        string getPedido();

        string getNombreCliente();
        string getApellidoCliente();
        int getDniCliente();
        
        int getCantidadBultos();
        string getFechaFabricacionBulto();
        string getFechaEmisionBulto();
        string getCiudadDestinoBulto();

        float getTarifaPeso();
        float getTarifaVolumen();
        float getTarifaDistancia();
        float getTarifaChofer();
        float getTotalTarifas();
};

#endif