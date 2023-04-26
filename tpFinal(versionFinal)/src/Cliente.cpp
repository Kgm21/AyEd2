#include "../include/Cliente.hpp"

Cliente::Cliente(){}

void Cliente::setNombreCliente(string _nombreCliente){
    nombreCliente = _nombreCliente;
}

string Cliente::getNombreCliente(){
    return nombreCliente;
}

void Cliente::setApellidoCliente(string _apellido){
    apellidoCliente = _apellido;
}

string Cliente::getApellidoCliente(){
    return apellidoCliente;
}

void Cliente::setDniCliente(int _dniCliente){
    dniCliente = _dniCliente;  
}

int Cliente::getDniCliente(){
    return dniCliente;
}

Cliente::~Cliente()
{
    cout<< "Se destruyo el usuario cliente." << endl;
}