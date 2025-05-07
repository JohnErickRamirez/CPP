// 7. Contador de letras mayúsculas y minúsculas
#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    int may = 0, min = 0;
    cout << "Escriba una frase: ";
    getline(cin, frase);
    for (char c : frase) {
        if (c >= 'A' && c <= 'Z') ++may;
        else if (c >= 'a' && c <= 'z') ++min;
    }
    cout << "Mayúsculas: " << may << "\n"
         << "Minúsculas: " << min << endl;
    return 0;
}
