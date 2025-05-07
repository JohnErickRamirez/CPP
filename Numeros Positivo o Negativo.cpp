// 3. Número positivo o negativo (con repetición hasta que ingrese 0)
#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Ingrese un número (0 para salir): ";
        cin >> num;
        if (num > 0) {
            cout << "Positivo\n";
        } else if (num < 0) {
            cout << "Negativo\n";
        }
    } while (num != 0);
    cout << "Fin del programa.\n";
    return 0;
}
