#include <iostream>
using namespace std;

int main() {
    int numero;
    int sumaPares = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        int digito = numero % 10; 
        if (digito % 2 == 0) {
            sumaPares += digito; 
        }
        numero /= 10; 
    }

    cout << "La suma de los digitos pares es: " << sumaPares << endl;

    return 0;
}