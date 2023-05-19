#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingrese un número: ";
    cin >> numero;

    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }

    cout << "La suma de los dígitos es: " << suma << endl;

    return 0;
}