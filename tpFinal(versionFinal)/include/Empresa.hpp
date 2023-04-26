#ifndef EMPRESA_HPP
#define EMPRESA_HPP
#include <iostream>
#include "./Caja.hpp"
#include "./HojaDeRuta.hpp"
#include "./Transporte.hpp"
using namespace std;

class Empresa
{
    private:
        Caja* caja;
        HojaDeRuta* hoja;
        Transporte* transporte;

    public:
        Empresa();
        ~Empresa();
        void mostrarHoja(HojaDeRuta* _hoja, Transporte* _transporte);
};

#endif