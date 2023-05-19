#include <iostream>

using namespace std;

int main() {
    int num;
    int factorial = 1;

    cout << "Ingresa un numero: ";
    cin >> num;

    // Calcula el factorial
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}