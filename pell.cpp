#include <iostream>
using namespace std;

int main() {
    int n = 20;

    int p0 = 0;
    int p1 = 1;

    cout << "Secuencia de numeros de Pell:" << endl;

    cout << p0 << " ";
    cout << p1 << " ";

    for (int i = 2; i < n; i++) {
        int p = 2 * p1 + p0;
        cout << p << " ";

        p0 = p1;
        p1 = p;
    }

    cout << endl;

    return 0;
}