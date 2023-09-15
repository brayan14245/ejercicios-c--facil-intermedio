#include <iostream>
using namespace std;

int main() {
    int ta, tb, sa, sb, s, m, h = 0;
    cout << "Ingrese el tiempo del atleta A en minutos: ";
    cin >> ta;
    cout << "Ingrese el tiempo del atleta B en minutos: ";
    cin >> tb;
    cout << "Ingrese el tiempo del atleta A en segundos: ";
    cin >> sa;
    cout << "Ingrese el tiempo del atleta B en segundos: ";
    cin >> sb;
    s = sa + sb;
    m = ta + tb + s / 60;
    h = m / 60;
    m %= 60;
    s %= 60;
    cout << "El tiempo total utilizado por ambos atletas es de " << h << " horas, " << m << " minutos y " << s << " segundos." << endl;
    return 0;
}
