#include <iostream>
using namespace std;

int main() {
    int hijos, edad, viuda;
    double monto = 0;
    cout << "Ingrese el número de hijos: ";
    cin >> hijos;
    cout << "Ingrese la edad del hijo mayor: ";
    cin >> edad;
    cout << "La madre de familia es viuda? (1 para sí, 0 para no): ";
    cin >> viuda;
    if (hijos <= 2) {
        monto += 70.00;
    } else if (hijos >= 3 && hijos <= 5) {
        monto += 90.00;
    } else {
        monto += 120.00;
    }
    if (edad >= 6 && edad <= 18) {
        monto += hijos * 10.00;
    }
    if (viuda == 1) {
        monto += 20.00;
    }
    cout << "El monto mensual que recibirá la familia es: S/." << monto << endl;
}
