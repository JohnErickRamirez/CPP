// 9. Verificar si una palabra es palíndromo
#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    bool esPal = true;
    int len = palabra.length();
    for (int i = 0; i < len / 2; ++i) {
        if (palabra[i] != palabra[len - 1 - i]) {
            esPal = false;
            break;
        }
    }
    if (esPal)
        cout << palabra << " es palíndromo.\n";
    else
        cout << palabra << " no es palíndromo.\n";
    return 0;
}
