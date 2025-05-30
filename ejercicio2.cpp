#include <iostream>
using namespace std;

//Funcion para calcular el MCD 
int MCD( int a, int b) {
	while ( b != 0 ) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

// Funcion para calcular el MCM
int MCM( int a, int b){
	return ( a * b) / MCD (a, b);
	
}
int main () {
	int x, y;
	char respuesta;
	
	cout << "========================================" << endl;
	cout << "    CALCULADORA DE MCD Y MCM            " << endl;
	cout << "========================================" << endl;
	cout << "Deseas calcular el MCM y MCD?(s/n): ";
	cin >> respuesta;
	
	if (respuesta == 's' || respuesta == 'S') {
		
	cout << " Ingresa el primer numero: ";
	cin >> x;
	cout << " Ingresa el segundo numero: ";
	cin >> y;
	
	cout << "----------------------------------------" << endl;
	cout << " Resultados:" << endl;
	cout << "El MCD es: " << MCD( x, y ) << endl;
	cout << "El MCM es: " << MCM( x, y ) << endl;
	cout << "----------------------------------------" << endl;
	cout << " ¡Gracias por usar la calculadora! " << endl;
	cout << "========================================" << endl;
	
	} else {
		cout << " Cancelaste la operacion. " << endl;
		cout << " Hasta la próxima." << endl;
	}

	return 0;
}