#include <iostream>

using namespace std;

int main() {
    int numero;
    int numeroOriginal;
    int digitos = 0;
    int suma = 0;

    cout << "Ingrese un número: ";
    cin >> numero;

    numeroOriginal = numero;

    while (numero != 0) {
        numero /= 10;
        digitos++;
    }

    numero = numeroOriginal;

    while (numero != 0) {
        int digito = numero % 10;
        int potencia = 1;

        for (int i = 0; i < digitos; i++) {
            potencia *= digito;
        }

        suma += potencia;
        numero /= 10;
    }

    if (suma == numeroOriginal) {
        cout << "Es un número Armstrong." << endl;
    } else {
        cout << "No es un número Armstrong." << endl;
    }

    return 0;
}