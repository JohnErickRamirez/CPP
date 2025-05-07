// 10. Calculadora básica
#include <iostream>
using namespace std;

int main() {
    float a, b, res;
    char op;
    cout << "Calculadora básica\n";
    cout << "Ingrese dos números separados por espacio: ";
    cin >> a >> b;
    cout << "Operación (+ - * /): ";
    cin >> op;
    switch (op) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/':
            if (b != 0) res = a / b;
            else {
                cout << "Error: División por cero.\n";
                return 1;
            }
            break;
        default:
            cout << "Operador no válido.\n";
            return 1;
    }
    cout << "Resultado: " << res << endl;
    return 0;
}
