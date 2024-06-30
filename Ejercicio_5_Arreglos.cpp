#include <iostream>
using namespace std;

int main() {
    cout << "           BIENVENIDO AL PROGRAMA                " << endl;
    cout << "-------------------------------------------------" << endl;

    // Variables
    int total_de_numeros;
    cout << "Ingrese la cantidad total de numeros por favor:  "<<endl;
    cout<<"___________________________________________________"<<endl;
    cin >> total_de_numeros;
    cout<<"___________________________________________________"<<endl;
    cout<<"Elementos del arreglo:"<<endl;
    int array[total_de_numeros];
    int mayor_numero, menor_numero;
    int contador_menor = 0, contador_mayor = 0;

    //Solicitamos los valores del arreglo al usuario
    for (int i = 0; i < total_de_numeros; i++) {
        cout << "Elemento [" << i + 1 << "]: ";
        cin >> array[i];
    }
    cout<<"____________________________________________________"<<endl;
    cout<<"            LOS DATOS SE ESTAN PROCESANDO...        "<<endl;
    cout<<"____________________________________________________"<<endl;

    //Ordenamos los numeros ingresados en forma ascendente
    for (int i = 0; i < total_de_numeros - 1; i++) {
        for (int j = i + 1; j < total_de_numeros; j++) {
            if (array[i] > array[j]) {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }

    // Identificamos el menor y mayor numero
    menor_numero = array[0];
    mayor_numero = array[total_de_numeros - 1];

    // Contamos las veces que se repite el menor y mayor numero
    for (int i = 0; i < total_de_numeros; i++) {
        if (array[i] == menor_numero) {
            contador_menor++;
        }
        if (array[i] == mayor_numero) {
            contador_mayor++;
        }
    }

   //Mostramos los resultados en pantalla
    cout<<"____________________________________________________"<<endl;
    cout<<"                   RESULTADOS                       "<<endl;
    cout<<"____________________________________________________"<<endl;
    cout << "El menor numero es: " << menor_numero << " y se repite " << contador_menor << " veces." << endl;
    cout << "El mayor numero es: " << mayor_numero << " y se repite " << contador_mayor << " veces." << endl;

    return 0;
}


 	
