#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    cout << "La suma de todos los numeros pares del 1 al 100 es: " << suma << endl;

    return 0;
}