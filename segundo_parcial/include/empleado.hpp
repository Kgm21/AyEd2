#ifndef EMPLEADO_CPP
#define EMPLEADO_CPP
#include <iostream>
using namespace std;

class Empleado{
    private: 
            string nombreEmpleado, apellidoEmpleado;
    public:
        Empleado();
        ~Empleado();
        void setNombre(string _nombreEmpleado);
        string getNombre();
        

};
#endif
