#include <iostream>
using namespace std;

class calculadora{
    private:
        int n1;
        int n2;
        void ingresar();

    public: 
        void suma();
        void resta();
        void multiplicacion();
        void division();
};

int main(){
    calculadora calc;
    int opcion;
    cout << "Menu: " << endl;
    cout << " 1. suma" << endl;
    cout << " 2. Resta" << endl;
    cout << " 3. Multiplicacion " << endl;
    cout << " 4. Division" << endl;
    cout << "\n Ingrese la opcion" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        calc.suma();
        break;
    case 2: 
        calc.resta();
        break;
    case 3:
        calc.multiplicacion();
        break;
    case 4:
        calc.division();
        break;
    
    default:
        cout << "Error al ingresar la opcion" << endl;
        break;
    }
    return 0;
}


void calculadora :: ingresar(){
    cout << "Ingresa el primer valor: ";
    cin >> n1;
    cout << "Ingrese el segundo valor: ";
    cin >> n2;
}
void calculadora ::suma(){
     int resultado = 0;
    ingresar();
    resultado = n1 + n2;
    cout << " El resultado es de: " << resultado << endl;
}

void calculadora ::resta(){
    int resultado = 0;
    ingresar();
    resultado = n1 - n2;
    cout << " El resultado es de: " << resultado << endl;
}

void calculadora ::multiplicacion(){
    int resultado = 0;
    ingresar();
    resultado = n1 * n2;
    cout << " El resultado es de: " << resultado << endl;
}

void calculadora :: division(){
    int resultado = 0;
    ingresar();
    resultado = n1/n2;
    cout << " El resultado es de: " << resultado << endl;
}







