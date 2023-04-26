#include <iostream>
#include "./include/Controlador.hpp"

#include <vector>

using namespace std;

int main()

{
    Controlador* controlador= new Controlador();
    Articulo* articulo = new Articulo();
    Cliente* cliente = new Cliente();
    Empleado* empleado = new Empleado();
    Pedido* pedido = new Pedido(cliente,articulo,empleado);

    for(int i=0; i <2;i++){
    
        string nombreArticulo;
        string empleado_name; 
        string nombre, apellido;
        int precio1;

        cout << "\n             Bienvenido: "<< endl;
        cout << "\n Ingrese Nombre del cliente: " << endl;
        cin >> nombre; 
        cout << " Ingrese apellido de cliente: " << endl;
        cin >> apellido;
        cout << "Ingrese el nombre de Articulo: "<< endl;
        cin >> nombreArticulo;
        cout << "Ingrese el precio del articulo: " << endl;
        cin >> precio1;
        cout << "Ingrese el nombre del empleado: " << endl;
        cin >> empleado_name;
        cout << "\n";

        cliente-> setNombre(nombre);
        cliente ->setApellido(apellido);
        articulo->setNombre(nombreArticulo);
        articulo->setPrecio(precio1);
        empleado->setNombre(empleado_name);

        controlador-> MostrarPedido(pedido);}

    cout << "\n" << endl; 
    delete pedido;
    delete articulo;
    delete empleado;
    delete cliente;
    delete controlador;
    

    return 0;
}
