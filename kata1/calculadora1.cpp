#include <iostream>
using namespace std;
void suma(int n1, int n2);
void resta(int n1, int n2);
void multiplicacion(int n1, int n2);
void division(int n1, int n2);


int main(){
    int opcion;
    int n1, n2;
    cout << "Menu: " << endl;
    cout << " 1. suma" << endl;
    cout << " 2. Resta" << endl;
    cout << " 3. Multiplicacion " << endl;
    cout << " 4. Division" << endl;
    cout << "n Ingrese la opcion" << endl;
    cin >> opcion;
    cout << "/n Ingrese el valor de n1" << endl;
    cin >> n1;
    cout << "/n ingrese el valor de n2" << endl;
    cin >> n2;
    switch (opcion)
    {
    case 1:
        suma(n1,n2);
        break;
    case 2: 
        resta(n1,n2);
        break;
    case 3:
        multiplicacion(n1,n2);
        break;
    case 4:
        division(n1,n2);
        break;
    
    default:
        cout << "Error al ingresar la opcion" << endl;
        break;
    }
    return 0;
}

void suma(int n1, int n2){
    int suma;
    suma = n1 + n2;
    cout << " El resultado es de: " << suma << endl;
}

void resta( int n1,int n2){
    int resta;
    resta= n1 - n2;
    cout << " El resultado es de: " << resta << endl;
}

void multiplicacion( int n1,int n2){
    int m;
    m = n1 * n2;
    cout << " El resultado es de: " << m << endl;
}

void division( int n1,int n2){
    int d;
    d = n1 / n2;
    cout << " El resultado es de: " << d << endl;
}