#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int m, n, combinatoria;
    char respuesta;

    cout << " ¿Desea calcular la combinatoria?(s/n):";
    cin >> respuesta;

    if (respuesta == 's' || respuesta == 'S') {
        
    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    if (m < n) {
        cout << "Error: m debe ser mayor o igual a n." << endl;
        return 1;
    }

    combinatoria = factorial(m) / (factorial(n) * factorial(m - n));

    cout << "El resultado de la combinatoria C( " << m << " , " << n << " ) es: " << combinatoria << endl;

    } else {
        cout << " Cancelaste la operacion. " << endl;
        cout << " Que tengas un buen dia. " << endl;

    }

    return 0;
}