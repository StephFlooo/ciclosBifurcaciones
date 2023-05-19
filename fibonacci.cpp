#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1;
    int suma = 0;

    cout << "Numeros Fibonacci hasta el 1000:" << endl;

    cout << num1 << " ";
    cout << num2 << " ";

    while (suma <= 1000) {
        suma = num1 + num2;
        cout << suma << " ";
        num1 = num2;
        num2 = suma;
    }

    cout << endl;

    return 0;
}