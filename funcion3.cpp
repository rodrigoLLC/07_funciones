#include <iostream>
using namespace std;

// Función principal
int main() {
    int cantidad;
	int generarFibonacci(int n);
	
    cout << "Ingrese la cantidad de terminos: ";
    cin >> cantidad;

    int sumaTotal = generarFibonacci(cantidad);

    cout << "Suma total: " << sumaTotal << endl;

    return 0;
}

// Función que genera y muestra la serie de Fibonacci
int generarFibonacci(int n) {
    int a = 0, b = 1, suma = 0;

    cout << "Serie de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        suma += a;
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;

    return suma;
}