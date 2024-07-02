/*16. Leer una línea de entrada. Descartar todos los símbolos excepto los dígitos. Convertir la cadena de
dígitos en un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones
atoi y isdigit te pueden ayudar para este propósito) Ejemplo: “En aproximadamente 120 días
llegaremos al año 2022 y festejaremos” 1202022 -> 1202024*/
#include<iostream>
#include<conio.h>
#include <string>
#include <cctype>

using namespace std;

int procesar_cadena(string cadena) {
    string numeros;
    
    for (char caracter : cadena) {
        if (isdigit(caracter)) { 
            numeros = numeros + caracter;
        }
    }
    
    // convertimos la cadena de dígitos a un entero
    int n = stoi(numeros);
    
    n = n + 2;
    
    return n;
}

int main() {
    string entrada;
    cout<<"        BIENVENIDOS AL SISTEMA   "<<endl;
    cout<<"---------------------------------"<<endl;
    //solicitamos una frase al usuario acompañada de numeros
    cout << "Ingresa una frase con numeros: "<<endl;
    cout << "_______________________________"<<endl;
    getline(cin, entrada); 
    cout <<"________________________________"<<endl;
    cout <<"      PROCESANDO LOS DATOS ...  "<<endl;
    cout <<"________________________________"<<endl;
    //mostramos los resultados
    int resultado = procesar_cadena(entrada);
    cout << "           RESULTADOS          "<<endl;
    cout << "El resultado es: " << endl;
	cout << resultado <<endl;
    getch();
    return 0;
}
