#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa un numero: ";
    cin >> num1;

    cout << "Ingresa otro numero: ";
    cin >> num2;

    int mcd = 1;
    int menor = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= menor; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }

    cout << "El maximo comun divisor (MCD) de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}