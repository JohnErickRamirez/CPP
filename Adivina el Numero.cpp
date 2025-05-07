// 4. Adivina el número
#include <iostream>
#include <cstdlib>   // srand, rand
#include <ctime>     // time
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int secreto = rand() % 100 + 1;
    int intento;
    cout << "Adivina el número (entre 1 y 100):\n";
    while (true) {
        cin >> intento;
        if (intento == secreto) {
            cout << "¡Correcto! El número era " << secreto << ".\n";
            break;
        } else if (intento < secreto) {
            cout << "Muy bajo, intenta de nuevo: ";
        } else {
            cout << "Muy alto, intenta de nuevo: ";
        }
    }
    return 0;
}
