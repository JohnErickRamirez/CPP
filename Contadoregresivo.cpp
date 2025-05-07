// 1. Contador regresivo
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero: ";
    cin >> n;
    cout << "Cuenta regresiva:\n";
    for (int i = n; i >= 0; --i) {
        cout << i << (i == 0 ? "\n" : " ");
    }
    return 0;
}
