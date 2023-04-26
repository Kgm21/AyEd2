#ifndef BULTO_HPP
#define BULTO_HPP
// #include "HojaDeRuta.hpp"
#include <iostream>
using namespace std;

// class Item
// {
//     public:
//         Bulto* bulto;
// };

class Bulto
{
    private:
        int cantBultos;
        string fechaFabricacion;
        string fechaEmision;
        string ciudadDestino;
        
    public:
        Bulto();
        ~Bulto();
        
        void setCantBultos(int _cantBultos);
        int getCantBultos();
        void setFechaFabricacion(string _fechaFabricacion);
        string getFechaFabricacion();
        void setFechaEmision(string _fechaEmision);
        string getFechaEmision();
        void setCiudadDestino(string _ciudadDestino);
        string getCiudadDestino();
        // void setPeso(float _peso);
        // int getPeso();
        // void setVolumen(string _volumen);
        // string getVolumen();
        
        // Tarifa* tarifa;
        // Tramo* tramo;
};

#endif