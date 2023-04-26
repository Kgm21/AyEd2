#include "../include/Controlador.hpp"

Controlador::Controlador()
{
}

Controlador::~Controlador()
{
    cout <<"Se destruyo el controlador" << endl;
}

void Controlador::MostrarPedido(Pedido* pedido)
{
    int cont = cont + 1; 
        cout << "\n Pedido: " << cont <<  endl;
        cout << "Nombre cliente: " << pedido->getNombreCliente()<< endl ;
        cout << "Apellido cliente: " << pedido->getApellidoCliente()<< endl;
        cout << "Articulo:" << pedido->getNombreArticulo() << endl;
        cout << " Precio: " << pedido->getPrecioArticulo() << endl;
        cout << "Empleado: " << pedido -> getNombreEmpleado() << endl;
        

}

