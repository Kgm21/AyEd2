#ifndef TARIFA_HPP
#define TARIFA_HPP
#include <iostream>

using namespace std;

class Tarifa{
    private: 
        float peso;
        float volumen;
        float distancia;
        float tarifaChofer;
        float tarifaTotal;

    public:
        Tarifa();
        ~Tarifa();

        void setTarifaPeso(float _peso);
        float getTarifaPeso();
        void setTarifaVolumen(float _volumen);
        float getTarifaVolumen();
        void setTarifaDistancia(float _distancia);
        float getTarifaDistancia();
        void setTarifaChofer(float _tarifaChofer);
        float getTarifaChofer();
        void setTarifaTotal(float _tarifaTotal);
        float getTarifaTotal();
};

#endif