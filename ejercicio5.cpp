#include <iostream>
using namespace std;

int funcion ( int );
int suma ( int n ) {

    int suma = 0;

    for ( int i = 1; i <= n; i++ ) {

         if ( n % i == 0 ) {
            suma += i;
         }

    }
return suma;
}

int main () {
    int n1, n2;

    cout << " Ingrese el primer numero: ";
    cin >> n1;
    cout << " Ingrese el segundo numero: ";
    cin >> n2; 
    
    if ( suma ( n1 ) == suma ( n2 ) ) {
        cout << n1 << " y " << n2 << " son dos numero amigos " << endl;
    } else {
        cout << n1 << " y " << n2 << " no son numeros amigos " << endl;

    }
return 0;
}