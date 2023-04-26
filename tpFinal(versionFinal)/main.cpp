#include "./include/Empresa.hpp"
#include "./include/Caja.hpp"
#include <iostream>
#include <string>
using namespace std;

Caja* caja = new Caja();
Empresa* empresa = new Empresa();
Cliente* cliente = new Cliente();
Bulto* bulto = new Bulto();
Tarifa* tarifa = new Tarifa();
Pedido* pedido = new Pedido(cliente,bulto,tarifa);
Chofer* chofer = new Chofer();
Camion* camion = new Camion();
Remolque* remolque = new Remolque();
Transporte* transporte = new Transporte(chofer,camion,remolque);
Ruta* ruta = new Ruta();
Tramo* tramo = new Tramo();
Ciudad* ciudad = new Ciudad();
HojaDeRuta* hoja = new HojaDeRuta(ruta,ciudad,tramo);

int main()
{
    int opcion1;
    
    //Variables menu caja
    int opcion2;
    int dni;
    string nombreCliente, apellidoCliente;
    int cant_bultos=0;
    string fechaFabricacion, fechaEmision;
    float tarifaPeso=0, tarifaVolumen=0, tarifaDistancia=0, tarifaChofer=0, sumaTarifas=0;
    string nombrePedido;
    
    //Variables menu Hoja de Ruta
    int opcion3;
    string nombreRuta;
    string ciudadOrigen, ciudadDestino;
    int distancia;
    int idChofer, telefonoChofer;
    string nombreChofer, apellidoChofer;
    int matriculaCamion, matriculaRemolque, taraRemolque;


    cout << endl;
    cout << "Bienvenido a la empresa de transporte de paquetes." << endl;
    do{
    //------Menu principal------//
        cout << "\nMenu principal "<< endl;
        cout << endl;
     cout << "Digite el numero segun que accion desee ejecutar: " << endl;
        cout << "1. Administrar Caja " << endl;
        cout << "2. Administrar Hoja de Ruta " << endl;
     cout << "3. Mostrar pedido "<< endl;
     cout << "0. para finalizar " << endl;
        cin >> opcion1;

        switch(opcion1){
        case 1: //-----Menu de caja------//
            // int opcion2; 
            cout << endl;
            cout << "Menu de Caja" << endl;
            cout << endl;
            cout << "1. Agregar Cliente: "<< endl;
            cout << "2. Agregar Bulto: " << endl;
            cout << "3. Agregar tarifa: " << endl;
            cout << "4. Agregar pedido: " << endl;
            cout << "0. salir menu caja: " << endl;
            cin >> opcion2; 
            cout << endl;
            
            switch (opcion2)
            {
                case 1:
                    // int dni;
                    // string nombreCliente, apellidoCliente;
                    cout << endl;
                    cout << "Ingrese el nombre del cliente: " <<endl;
                    cin >> nombreCliente;
                    cliente->setNombreCliente(nombreCliente);
                    cout << "Ingrese el apellido del cliente: " << endl;
                    cin >> apellidoCliente;
                    cliente->setApellidoCliente(apellidoCliente);
                    cout << "Ingrese el dni del cliente: " << endl;
                    cin >> dni;
                    cliente ->setDniCliente(dni);
                    break;
                case 2: 
                    // int cant_bultos;
                    // string fechaFabricacion, fechaEmision;
                    cout << endl;
                    cout << "Ingrese cantidad de bultos: " << endl;
                    cin >> cant_bultos;
                    bulto->setCantBultos(cant_bultos);
                    bulto->getCantBultos();

                    cout << "Ingrese fecha de fabricacion: 00/00 " << endl;
                    cin>>fechaFabricacion;
                    bulto->setFechaFabricacion(fechaFabricacion);
                    bulto->getFechaFabricacion();
                    cout << "Ingrese fecha de emision: 00/00 " << endl;
                    cin >> fechaEmision;
                    bulto->setFechaEmision(fechaEmision);
                    bulto->getFechaEmision();
                    break;
                case 3: 
                    cout << endl;
                    cout << "Ingrese la tarifa del envio: " << endl;
                    cout << "Tarifa por peso: " << endl;
                    cin >> tarifaPeso;
                    tarifa->setTarifaPeso(tarifaPeso);
                    cout << "Tarifa por volumen: " << endl;
                    cin >> tarifaVolumen;
                    tarifa->setTarifaVolumen(tarifaVolumen);
                    cout << "Tarifa por distancia: " << endl;
                    cin >> tarifaDistancia;
                    tarifa->setTarifaDistancia(tarifaDistancia);
                    cout << "Tarifa del chofer: " << endl;
                    cin >> tarifaChofer;
                    tarifa->setTarifaChofer(tarifaChofer);
                    
                    sumaTarifas = tarifaPeso + tarifaVolumen + tarifaDistancia + tarifaChofer;
                    tarifa->setTarifaTotal(sumaTarifas);
                    break;
                case 4:
                    cout << endl;
                    cout << "Ingrese el pedido: " << endl;
                    cin >> nombrePedido;
                    pedido->setPedido(nombrePedido);
                    break;
                case 0: 
                    cout << "\nEl programa se ha cerrado correctamente." << endl;
                    break;
            } 
            //Fin menu caja
            break;

        case 2: //------Menu de Hoja de Ruta------//
            cout << endl;
            cout << "Menu hoja de ruta" << endl;
            cout << endl;
            cout << "1. Agregar ruta: " << endl;
            cout << "2. Agregar ciudad: " << endl;
            cout << "3. Agregar tramo: " << endl;
            cout << "4. Agregar chofer: " << endl;
            cout << "5. Agregar camion: " << endl;
            cout << "6. Agregar remolque: " << endl;
            cout << "0. Salir menu hoja de ruta" << endl;
            cin >> opcion3;
            cout << endl;
            
            switch(opcion3)
            {
                case 1:
                    cout << endl;
                    cout << "Ingrese el nombre de la ruta: " << endl;
                    cin>> nombreRuta;
                    ruta->setNombreRuta(nombreRuta);
                    break;
                case 2:
                    cout << endl;
                    cout << "Ingrese la ciudad de origen: " << endl;
                    cin>>ciudadOrigen;
                    ciudad->setCiudadOrigen(ciudadOrigen);
                    cout << "Ingrese la ciudad de destino: " << endl;
                    cin>> ciudadDestino;
                    ciudad->setCiudadDestino(ciudadDestino);
                    break;
                case 3:
                    cout << endl;
                    cout << "Ingrese la distancia en km: " << endl;
                    cin >> distancia;
                    tramo->setDistancia(distancia);
                    break;
                case 4:
                    cout << endl;
                    cout << "Ingrese el id del chofer: " << endl;
                    cin >> idChofer;
                    chofer->setIdChofer(idChofer);
                    cout << "Ingrese el nombre del chofer: " << endl;
                    cin >> nombreChofer;
                    chofer->setNombreChofer(nombreChofer);
                    cout << "Ingrese el apellido del chofer: " << endl;
                    cin >> apellidoChofer;
                    chofer->setApellidoChofer(apellidoChofer);
                    cout << "Ingrese el telefono del chofer: " << endl;
                    cin >> telefonoChofer;
                    chofer->setTelefonoChofer(telefonoChofer);
                    break;
                case 5:
                    cout << endl;
                    cout << "Ingrese la matricula del camion: " << endl;
                    cin >> matriculaCamion;
                    camion->setMatriculaCamion(matriculaCamion);
                    break;
                case 6:
                    cout << "Ingrese la matricula del remlque: " << endl;
                    cin >> matriculaRemolque;
                    remolque->setMatriculaRemolque(matriculaRemolque);
                    cout << "Ingrese la tara (carga maxima) del remolque: " << endl;
                    cin >> taraRemolque;
                    remolque->setTara(taraRemolque);
                    break;
                case 0: 
                    cout << "\nEl programa se ha cerrado correctamente." << endl;
                    break;
            } //Fin menu hoja de ruta
            break;

         case 3: //Mostrar pedido
            cout << "Muestro el pedido: " << endl;
            caja->mostrarPedido(pedido);
            empresa->mostrarHoja(hoja,transporte);
            
            break;
        
         case 0: 
            cout << "\nEl programa se ha cerrado correctamente." << endl;
            break;
        }
    }while(opcion1 != 0);

    delete caja;
    delete empresa;
    delete cliente;
    delete bulto;
    delete tarifa;
    delete pedido;
    delete chofer;
    delete camion;
    delete remolque;
    delete transporte;
    delete ruta;
    delete tramo;
    delete ciudad;
    delete hoja;
    
    return 0;
}