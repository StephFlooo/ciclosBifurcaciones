#include <iostream>
using namespace std;

int main()
{
    int x; 
    cout << "Ingresa un numero positivo o negativo: ";
    cin >> x;

    if (x < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es positivo" << endl;
    }

    return 0;
}