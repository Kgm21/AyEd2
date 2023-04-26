#ifndef TRANSPORTE_HPP
#define TRANSPORTE_HPP
#include <iostream>
#include <string>
using namespace std;

class Transporte;
    
class Chofer
{
    private:
        int idChofer;
        string nombreChofer;
        string apellidoChofer;
        int telefono;
        
    public:
        Chofer();
        ~Chofer();

        void setIdChofer(int _id);
        int getIdChofer();
        void setNombreChofer(string _nombreChofer);
        string getNombreChofer();
        void setApellidoChofer(string _apellidoChofer);
        string getApellidoChofer();
        void setTelefonoChofer(int _telefono);
        int getTelefonoChofer();
};

class Camion
{
    private:
        int matriculaCamion;
        // CamionParticular* particular;
    
    public:
        Camion();
        ~Camion();
        
        void setMatriculaCamion(int _matriculaCamion);
        int getMatriculaCamion();
};

// class CamionParticular
// {
//     private:
//         // int tarifaChofer;
//     public: 
//         // void setTarifa(int _tarifaChofer);
//         // int getTarifa();
// };

class Remolque
{
    private:
        int matriculaRemolque;
        int tara;    
    
    public:
        Remolque();
        ~Remolque();
        
        void setTara(int _tara);
        int getTara();
        void setMatriculaRemolque(int _matriculaRemolque);
        int getMatriculaRemolque();
};

class Transporte{
private:
        Chofer* chofer;
        Camion* camion;
        Remolque* remolque;
        string asignarTransporte;

    public:
        Transporte(Chofer* _chofer, Camion* _camion, Remolque* _remolque);
       
        ~Transporte();
        
        int getIdChofer();
        string getNombreChofer();
        string getApellidoChofer();
        int getTelefonoChofer();

        int getMatriculaCamion();
        int getMatriculaRemolque();
        int getTaraRemolque();
};

#endif