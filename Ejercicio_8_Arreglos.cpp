/*Comprobar si un número de 10 cifras es capicúa usando un vector*/
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;

// Creamos una función para determinar si el número es capicúa
bool es_capicua(long long int numero) {
    vector<int> digitos;
    while (numero > 0) {
        digitos.push_back(numero % 10);
        numero /= 10;
    }
    // Comparamos los digitos de inicio a fin y a lo contrario
    int inicio = 0;
    int fin = digitos.size() - 1;
    while (inicio < fin) {
        if (digitos[inicio] != digitos[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}

int main() {
    cout << "  BIENVENIDO AL SISTEMA CAPICUA  " << endl;
    cout << "---------------------------------" << endl;

    long long int numero;
    cout << "Ingrese un numero de 10 cifras por favor: " << endl;
    cout << "_________________________________________" << endl;
    cin >> numero;

    // Validamos si el número ingresado tiene 10 cifras
    if (numero < 1000000000LL || numero > 9999999999LL) {
        cout << "El numero ingresado no tiene 10 cifras." << endl;
        return 1; 
    }

    // Llamamos a la función es_capicua
    if (es_capicua(numero)) {
        cout << "        RESULTADO          " << endl;
        cout << "El numero " << numero << " es capicua." << endl;
    } else {
        cout << "        RESULTADO          " << endl;
        cout << "El numero " << numero << " no es capicua." << endl;
    }

    getch(); 
    return 0;
}