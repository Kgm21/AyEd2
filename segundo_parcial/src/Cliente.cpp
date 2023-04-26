#include "../include/Cliente.hpp"

Cliente::Cliente()
{
}

void Cliente::setNombre(string _nombre )
{
    nombre1 = _nombre;
} 

void Cliente::setApellido(string _apellido)
{
    apellido = _apellido;
}

string Cliente::getNombre()
{
    return nombre1;
} 

string Cliente::getApellido()
{
    return apellido;
} 

Cliente::~Cliente()
{
    cout <<"Se destruyo el cliente" << endl;
}
    
