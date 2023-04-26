#include "../include/Pedido.hpp"


Pedido::Pedido(Cliente *_cliente,Articulo *_articulo, Empleado *_empleado): cliente(_cliente),articulo(_articulo),empleado(_empleado)
{   
}

Pedido::~Pedido()
{
    cout <<"Se destruyo el pedido" << endl;
}

string Pedido::getNombreCliente()
{
    return cliente->getNombre();
}

string Pedido::getApellidoCliente()
{
    return cliente->getApellido();
}

string Pedido::getNombreArticulo()
{
    return articulo->getNombre();
}

float Pedido::getPrecioArticulo()
{
    return articulo->getPrecio();
}

string Pedido::getNombreEmpleado(){
    return empleado-> getNombre();
}



