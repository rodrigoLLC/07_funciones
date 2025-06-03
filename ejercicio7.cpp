#include <iostream>
using namespace std;

long long funcion ( int numero ) {

    long long resultado = 1;

    for ( int i = 1; i <= numero ; i++ ) {

        resultado *= i;

    }

    return resultado;
}

double suma ( int n ) {
    double suma = 0;

    for ( int i = 1; i <= n; i++ ) {
        suma += (double)funcion ( i ) / ( 2 * i );
    
    }
    return suma;

}

int main () {
    int n;
    double respuesta;

    do{

        cout << " Ingrese el valor de n: ";
        cin >> n;

        if ( n <= 0 ) {
            cout << " Ingrese un valor mayor que 0. Intentelo de nuevo: " << endl;
        }
        
    } while ( n <= 0 ) ;

    respuesta = suma ( n );

    cout << " El resultado de la suma de los numeros es: " << respuesta << endl;

    return 0;

}