#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>

using namespace std;

class Cliente 
{
    private:
        string nombre1;
        string apellido;

    public:
        void setNombre(string _nombre);
        string getNombre();
        void setApellido(string _apellido);
        string getApellido();

        Cliente();
        
        ~Cliente();

};
#endif
