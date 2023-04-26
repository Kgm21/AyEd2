#include "../include/Transporte.hpp"

Transporte::Transporte(Chofer* _chofer, Camion* _camion, Remolque* _remolque): chofer(_chofer),camion(_camion),remolque(_remolque){}


//Datos del chofer
int Transporte::getIdChofer(){
    return chofer->getIdChofer();
}

string Transporte::getNombreChofer(){
    return chofer->getNombreChofer();
}

string Transporte::getApellidoChofer(){
    return chofer->getApellidoChofer();
}

int Transporte::getTelefonoChofer(){
    return chofer->getTelefonoChofer();
}

//Datos del camion
int Transporte::getMatriculaCamion(){
    return camion->getMatriculaCamion();
}

//Datos del remolque
int Transporte::getMatriculaRemolque(){
    return remolque->getMatriculaRemolque();
}

int Transporte::getTaraRemolque(){
    return remolque->getTara();
}

Transporte::~Transporte()
{
    cout << "Se destruyo transporte." << endl;
}

//Chofer
Chofer::Chofer(){}

void Chofer::setIdChofer(int _id){
    idChofer = _id;
}

int Chofer::getIdChofer(){
    return idChofer;
}

void Chofer::setNombreChofer(string _nombreChofer){
    nombreChofer = _nombreChofer;
}

string Chofer::getNombreChofer(){
    return nombreChofer;
}

void Chofer::setApellidoChofer(string _apellidoChofer){
    apellidoChofer = _apellidoChofer;
}

string Chofer::getApellidoChofer(){
    return apellidoChofer;
}

void Chofer::setTelefonoChofer(int _telefono){
    telefono = _telefono;
}

int Chofer::getTelefonoChofer(){
    return telefono;
}

Chofer::~Chofer()
{
    cout << "Se destruyo chofer." << endl;
}

//Camion
Camion::Camion(){}

void Camion::setMatriculaCamion(int _matriculaCamion){
    matriculaCamion = _matriculaCamion;
}

int Camion::getMatriculaCamion(){
    return matriculaCamion;
}

Camion::~Camion()
{
    cout << "Se destruyo el camion." << endl;
}

// void CamionParticular::setTarifa(int _tarifaChofer){
//     tarifaChofer = _tarifaChofer;
// }

// int CamionParticular::getTarifa(){
//     return tarifaChofer;
// }

//Remolque
Remolque::Remolque(){}

void Remolque::setMatriculaRemolque(int _matriculaRemolque){
    matriculaRemolque = _matriculaRemolque;
}

int Remolque::getMatriculaRemolque(){
    return matriculaRemolque;
}

void Remolque::setTara(int _tara){
    tara = _tara;
}

int Remolque::getTara(){
    return tara;
}

Remolque::~Remolque()
{
    cout << "Se destruyo el remolque." << endl;
}