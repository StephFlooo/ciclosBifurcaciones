#include <iostream>

using namespace std;

int main() {
    int num;
    bool esPrimo = true;

    cout << "Ingresa un numero: ";
    cin >> num;

    if (num <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << num << " es un número primo" << endl;
    } else {
        cout << num << " no es un número primo" << endl;
    }

    return 0;
}