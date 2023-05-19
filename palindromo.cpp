#include <iostream>

using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena: ";
    cin >> cadena;

    bool esPalindromo = true;

    int inicio = 0;
    int fin = cadena.length() - 1;

    while (inicio < fin) {
        if (cadena[inicio] != cadena[fin]) {
            esPalindromo = false;
            break;
        }

        inicio++;
        fin--;
    }

    if (esPalindromo) {
        cout << "La cadena es un palindromo." << endl;
    } else {
        cout << "La cadena no es un palindromo." << endl;
    }

    return 0;
}