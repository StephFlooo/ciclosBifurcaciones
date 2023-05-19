#include <iostream>

using namespace std;

int main() {
    string cadena;
    int contadorVocales = 0;

    cout << "Ingresa una cadena: ";
    getline(cin, cadena);

    // Contar las vocales
    for (char c : cadena) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contadorVocales++;
        }
    }

    cout << "La cadena contiene " << contadorVocales << " vocales." << endl;

    return 0;
}