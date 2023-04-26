#ifndef ARTICULO_HPP
#define ARTICULO_HPP

#include <iostream>

using namespace std;

class Articulo
{ 
    private:
        string nombre;
        float precio;

    public:
        void setNombre(string _nombre);
        string getNombre();
       void setPrecio(float _precio);
        float getPrecio();

        Articulo();
        ~Articulo();

};
#endif