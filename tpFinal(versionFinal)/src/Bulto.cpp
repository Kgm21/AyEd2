#include "../include/Bulto.hpp"

Bulto::Bulto(){}

void Bulto::setCantBultos(int _cantBultos){
    cantBultos = _cantBultos;
}

int Bulto::getCantBultos(){
    return cantBultos;
}

void Bulto::setFechaFabricacion(string _fechaFabricacion){
    fechaFabricacion = _fechaFabricacion;
}

string Bulto::getFechaFabricacion(){
    return fechaFabricacion;
}

void Bulto::setFechaEmision(string _fechaEmision){
    fechaEmision = _fechaEmision;
}

string Bulto::getFechaEmision(){
    return fechaEmision;
}

void Bulto::setCiudadDestino(string _ciudadDestino){
    ciudadDestino = _ciudadDestino;
}

string Bulto::getCiudadDestino(){
    return ciudadDestino;
}

// void Bulto::setPeso(float _peso){
//     peso =_peso;
// }

// void Bulto::setVolumen(string _volumen){
//     volumen = _volumen;
// }

Bulto::~Bulto()
{
    cout << "Se destruyo el bulto." << endl;
}