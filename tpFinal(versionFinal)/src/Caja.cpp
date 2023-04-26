#include "../include/Caja.hpp"

Caja::Caja(){}

void Caja::mostrarPedido(Pedido* pedido)
{
    cout << "\n\nDatos del Cliente: " << endl;
    cout << "\nNombre del cliente: " << pedido->getNombreCliente() << endl;
    cout << "Apellido del cliente: " << pedido->getApellidoCliente() << endl;
    cout << "DNI del cliente: " << pedido->getDniCliente() << endl;
    cout << endl;
    cout << "Cantidad de bultos a comprar: " << pedido->getCantidadBultos() << endl;
    cout << "Fecha de fabricacion de los bultos: " << pedido->getFechaFabricacionBulto() << endl;
    cout << "Fecha de envio de los bultos: " << pedido->getFechaEmisionBulto() << endl;
    // cout << "Ciudad de destino del envio: " << pedido->getCiudadDestinoBulto() << endl;
    cout << "Tarifa por peso: " << pedido->getTarifaPeso() << endl;
    cout << "Tarifa por volumen: " << pedido->getTarifaVolumen() << endl;
    cout << "Tarifa por distancia en km: " << pedido->getTarifaDistancia() << endl;
    cout << "Tarifa cobrara por chofer particular: " << pedido->getTarifaChofer() << endl;
    cout << "Suma total de las tarifas: " << pedido->getTotalTarifas() << endl;
}

Caja::~Caja()
{
    cout << "Se destruyo el controlador." << endl;
}