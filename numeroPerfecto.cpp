#include <iostream>

using namespace std;

int main() {
    int numero;
    int sumaDivisores = 0;

    cout << "Ingresa un número: ";
    cin >> numero;

    // Calcular la suma de los divisores del número
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }

    // Determinar si es un número perfecto
    if (sumaDivisores == numero) {
        cout << numero << " es un numero perfecto." << endl;
    } else {
        cout << numero << " no es un numero perfecto." << endl;
    }

    return 0;
}