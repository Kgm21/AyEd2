#include <iostream>
using namespace std;

class calculadora{
    private:
        double n1;
        double n2;
        void ingresar();
    public:
      void division();
};

int main(){
    calculadora calc;
    calc.division();
    return 0;
}

void calculadora :: ingresar(){
    cout << "Ingrese el valor de n1: ";
    cin >> n1;
    cout << "Ingrese el valor de n2: ";
    cin >> n2;
}

void calculadora :: division(){
    //int resultado;
    double resultado;
    ingresar();
    resultado = n1 / n2;
    cout << " el resultado de la division es: " << resultado << endl;
}