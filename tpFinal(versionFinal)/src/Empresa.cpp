#include "../include/Empresa.hpp"

Empresa::Empresa(){}

void Empresa::mostrarHoja(HojaDeRuta* hoja, Transporte* transporte)
{
    cout << "\n\nDatos de la hoja de ruta." << endl;
    cout << "\nId del chofer: " << transporte->getIdChofer() << endl;
    cout << "Nombre del chofer: " << transporte->getNombreChofer() << endl;
    cout << "Apellido del chofer: " << transporte->getApellidoChofer() << endl;
    cout << "Telefono del chofer: " << transporte->getTelefonoChofer() << endl;
    cout << endl;
    cout << "Matricula del camion: " << transporte->getMatriculaCamion() << endl;
    cout << "Matricula del remolque: " << transporte->getMatriculaRemolque() << endl;
    cout << "Tara del remolque: " << transporte->getTaraRemolque() << endl;
    cout << endl;
    cout << "Nombre de la ruta a recorrer: " << hoja->getNombreRuta() << endl;
    cout << "Distancia en km a recorrer: " << hoja->getDistancia() << endl;
    cout << "Ciudad de partida: " << hoja->getCiudadOrigen() << endl;
    cout << "Ciudad de destino: " << hoja->getCiudadDestino() << endl;
}

Empresa::~Empresa()
{
    cout << "Se destruyo la empresa." << endl;
}