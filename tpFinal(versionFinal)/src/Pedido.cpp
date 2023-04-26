#include "../include/Pedido.hpp"

Pedido::Pedido(Cliente* _cliente, Bulto* _bulto, Tarifa* _tarifa): cliente(_cliente),bulto(_bulto),tarifa(_tarifa){}



void Pedido::setPedido(string _nombrePedido){
    nombrePedido = _nombrePedido;
}

string Pedido::getPedido(){
    return nombrePedido;
}

//Pido datos del cliente
string Pedido::getNombreCliente(){
    return cliente->getNombreCliente();
}

string Pedido::getApellidoCliente(){
    return cliente->getApellidoCliente();
}

int Pedido::getDniCliente(){
    return cliente->getDniCliente();
}

//Pido datos del bulto
int Pedido::getCantidadBultos(){
    return bulto->getCantBultos();
}

string Pedido::getFechaFabricacionBulto(){
    return bulto->getFechaFabricacion();
}

string Pedido::getFechaEmisionBulto(){
    return bulto->getFechaEmision();
}

string Pedido::getCiudadDestinoBulto(){
    return bulto->getCiudadDestino();
}

//Pido datos de la tarifa
float Pedido::getTarifaPeso(){
    return tarifa->getTarifaPeso();
}

float Pedido::getTarifaVolumen(){
    return tarifa->getTarifaVolumen();
}

float Pedido::getTarifaDistancia(){
    return tarifa->getTarifaDistancia();
}

float Pedido::getTarifaChofer(){
    return tarifa->getTarifaChofer();
}
float Pedido::getTotalTarifas(){
    return tarifa->getTarifaTotal();
}

Pedido::~Pedido()
{
    cout << "Se destruyo el pedido." << endl;
}