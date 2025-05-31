#include <iostream>
using namespace std;

bool Perfecto ( int );

bool Perfecto ( int n ) {

    int suma = 0;

    for ( int i = 1 ; i < n ; i++ ) {

        if ( n % i == 0 ) {
            suma += i;
        }
    }
    return suma == n;
}

int main () {
    int numero;

    cout << "Ingrese el numero: ";
    cin >> numero;

    if ( Perfecto ( numero ) ) {
        cout << numero << " Es un numero perfecto " << endl;
    } else {
        cout << numero << " No es un numero perfecto " << endl;
    }

    return 0;
}