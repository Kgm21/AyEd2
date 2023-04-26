#include "../include/HojaDeRuta.hpp"

HojaDeRuta::HojaDeRuta(Ruta* _ruta, Ciudad* _ciudad, Tramo* _tramo): ruta(_ruta),ciudad(_ciudad),tramo(_tramo){}


void HojaDeRuta::crearHoja(string _nombreHoja){
    nombreHoja = _nombreHoja;
}

string HojaDeRuta::getHoja(){
    return nombreHoja;
}

//Datos de la ruta
string HojaDeRuta::getNombreRuta(){
    return ruta->getNombreRuta();
}

//Datos del tramo de la ruta
int HojaDeRuta::getDistancia(){
    return tramo->getDistancia();
}

//Datos de la ciudad
string HojaDeRuta::getCiudadOrigen(){
    return ciudad->getCiudadOrigen();
}

string HojaDeRuta::getCiudadDestino(){
    return ciudad->getCiudadDestino();
}

HojaDeRuta::~HojaDeRuta()
{
    cout << "Se destruyo la hoja de ruta." << endl;
}

//Ruta
void Ruta::setNombreRuta(string _nombreRuta){
    nombreRuta = _nombreRuta;
}

string Ruta::getNombreRuta(){
    return nombreRuta;
}

//Tramo
void Tramo::setDistancia(int _distancia){
    distancia = _distancia;
}

int Tramo::getDistancia(){
    return distancia;
}

//Ciudad
void Ciudad::setCiudadOrigen(string _ciudadOrigen){
    ciudadOrigen = _ciudadOrigen;
}

string Ciudad::getCiudadOrigen(){
    return ciudadOrigen;
}

void Ciudad::setCiudadDestino(string _ciudadDestino){
    ciudadDestino = _ciudadDestino;
}

string Ciudad::getCiudadDestino(){
    return ciudadDestino;
}