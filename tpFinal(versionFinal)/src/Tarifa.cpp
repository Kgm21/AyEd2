#include "../include/Tarifa.hpp"

Tarifa::Tarifa(){}

void Tarifa::setTarifaPeso(float _peso){
    this -> peso =_peso;
}

float Tarifa::getTarifaPeso(){
    return peso;
}

void Tarifa ::setTarifaVolumen(float _volumen){
    this -> volumen = _volumen;
}

float Tarifa ::getTarifaVolumen(){
    return volumen;
}

void Tarifa :: setTarifaDistancia(float _distancia){
    this -> distancia = _distancia;
}

float Tarifa::getTarifaDistancia(){
    return distancia;
}

void Tarifa::setTarifaChofer(float _tarifaChofer){
    tarifaChofer = _tarifaChofer;
}

float Tarifa::getTarifaChofer(){
    return tarifaChofer;
}

void Tarifa::setTarifaTotal(float _tarifaTotal){
    _tarifaTotal = peso + volumen + distancia + tarifaChofer;
    tarifaTotal = _tarifaTotal;
}

float Tarifa::getTarifaTotal(){
    return tarifaTotal;
}

Tarifa::~Tarifa()
{
    cout << "Se destruyo la Tarifa" << endl;
}