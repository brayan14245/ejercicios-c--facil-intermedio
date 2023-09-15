#include <iostream>
using namespace std;

int main() {
    float pies, metros, suma;
    float pulgadas, yardas, metros_conv, millas;

    cout << "Ingresa la cantidad de pies: ";
    cin >> pies;

    cout << "Ingresa la cantidad de metros: ";
    cin >> metros;

    suma = pies + (metros / 0.3048); // Convertir metros a pies

    pulgadas = suma * 12; // Convertir pies a pulgadas
    yardas = suma / 3; // Convertir pies a yardas
    metros_conv = suma * 0.3048; // Convertir pies a metros
    millas = metros_conv / 1609; // Convertir metros a millas

    cout << "La suma en pulgadas es: " << pulgadas << endl;
    cout << "La suma en yardas es: " << yardas << endl;
    cout << "La suma en metros es: " << metros_conv << endl;
    cout << "La suma en millas es: " << millas << endl;

    return 0;
}
