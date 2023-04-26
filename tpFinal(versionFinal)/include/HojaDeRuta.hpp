#ifndef HOJADERUTA_HPP
#define HOJADERUTA_HPP
#include <iostream>
#include <string>
// #include "./Transporte.hpp"
// #include "Pedido.hpp"
// #include "Tarifa.hpp"
using namespace std;

class HojaDeRuta;



class Ruta
{
    private:
        
        string nombreRuta;

    public:
        void setNombreRuta(string _nombreRuta);
        string getNombreRuta();    
};

class Tramo
{
    private:
        int distancia;
    
    public:
        void setDistancia(int _distancia);
        int getDistancia();
};

class Ciudad
{
    private:
        string ciudadOrigen;
        string ciudadDestino;
    
    public:
        void setCiudadOrigen(string _ciudadOrigen);
        string getCiudadOrigen();
        void setCiudadDestino(string _ciudadDestino);
        string getCiudadDestino();
};

class HojaDeRuta{
    private:
        // Transporte* transporte;
        // Pedido* pedido;
        Ruta* ruta;
        Ciudad* ciudad;
        // Tarifa* tarifa;
        Tramo* tramo;
        // Chofer* chofer;
        // Camion* camion;
        // Remolque* remolque;
        string nombreHoja;

    public:
        HojaDeRuta(Ruta* _ruta, Ciudad* _ciudad, Tramo* _tramo);
        HojaDeRuta();
        
        ~HojaDeRuta();
        void crearHoja(string _nombreHoja);
        string getHoja();

        string getNombreRuta();

        int getDistancia();

        string getCiudadOrigen();
        string getCiudadDestino();
};

#endif