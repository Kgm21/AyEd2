#include "../include/empleado.hpp"
Empleado::Empleado()
{
}

void Empleado::setNombre(string _nombre )
{
    nombreEmpleado = _nombre;
} 



string Empleado::getNombre()
{
    return nombreEmpleado;
} 



Empleado::~Empleado()
{
    cout <<"Se destruyo el usuario empleado" << endl;
}
    
