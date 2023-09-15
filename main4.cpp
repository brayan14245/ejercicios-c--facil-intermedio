#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese la operación que desea realizar (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Operación inválida. Por favor, ingrese una operación válida.";
            return 0;
    }

    cout << "El resultado de la operación es: " << result;

    return 0;
}
