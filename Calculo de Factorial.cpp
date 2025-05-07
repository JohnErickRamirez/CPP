// 8. Cálculo de factorial
#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fact = 1;
    cout << "Ingrese un número entero no negativo: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Factorial de " << n << " = " << fact << endl;
    return 0;
}
