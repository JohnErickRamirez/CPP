// 6. Convertidor de divisas
#include <iostream>
using namespace std;

int main() {
    float dolares, resultado;
    int opcion;
    const float tasaPesos = 54.75;  // Ejemplo
    const float tasaEuros = 0.92;   // Ejemplo
    const float tasaYenes = 150.35; // Ejemplo

    do {
        cout << "\nConvertidor de dólares:\n"
             << "1) Pesos\n"
             << "2) Euros\n"
             << "3) Yenes\n"
             << "0) Salir\n"
             << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 0) break;

        cout << "Ingrese la cantidad en dólares: ";
        cin >> dolares;

        switch (opcion) {
            case 1:
                resultado = dolares * tasaPesos;
                cout << dolares << " USD = " << resultado << " pesos\n";
                break;
            case 2:
                resultado = dolares * tasaEuros;
                cout << dolares << " USD = " << resultado << " euros\n";
                break;
            case 3:
                resultado = dolares * tasaYenes;
                cout << dolares << " USD = " << resultado << " yenes\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while (opcion != 0);

    cout << "Fin del convertidor.\n";
    return 0;
}
