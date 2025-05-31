#include <iostream>
using namespace std;

int esPrimo(int numero) {
    if (numero <= 1)
        return 0;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    do {
        cout << "Ingresa un numero positivo: ";
        cin >> n;

        if ( n <= 0 ) {

            cout << " El numero debe de ser positivo. Ingrese un nuevo numero." << endl;
        }
    } while ( n <= 0 );

    if (esPrimo(n))
        cout << n << " es un numero primo." << endl;
    else
        cout << n << " no es un numero primo." << endl;

    return 0;
}