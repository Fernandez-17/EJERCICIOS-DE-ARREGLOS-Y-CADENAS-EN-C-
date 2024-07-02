/*15.Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las
cadenas son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de
String.h */
#include <iostream>
#include <conio.h>

using namespace std;
// función para comparar str1 y str2
int mistrcmp(const char str1[], const char str2[]) {
    int tamanio1 = 0, tamanio2 = 0;

    // calculamos el tamaño  de str1
    while (str1[tamanio1] != '\0') {
        tamanio1=tamanio1 + 1;
    }

    // calculamos el tamaño de str2
    while (str2[tamanio2] != '\0') {
        tamanio2 = tamanio2 + 1;
    }

    // comparamos los tamaños de str 1 y str2
    if (tamanio1 > tamanio2) {
        return 1; 
    } else if (tamanio1 < tamanio2) {
        return -1; 
    } else {
        return 0; 
    }
}

int main() {
    cout << "    BIENVENIDO AL SISTEMA    " << endl;
    cout << "-----------------------------" << endl;
    
    //definimos las cadenas para comparar
    char str1[] = "Buenos dias amigos";
    char str2[] = "Buenas noches hermanos queridos";
    cout<<"      ROCESANDO LOS DATOS ...  " <<endl;
    //mostramos los resultados
	cout<<"_______________________________" <<endl;
    cout<<"          RESULTADOS           " <<endl;
    cout<<endl;
    int resultado = mistrcmp(str1, str2);
    if (resultado == 0) {
        cout << "La cadena " << str1 <<" y "<<str2 <<" son iguales." << endl;
    } else if (resultado == 1) {
        cout << "La cadena " << str1 << " es mayor que " << str2 << endl;
    } else {
        cout << "La cadena " << str1 << " es menor que " << str2 << endl;
    }
    
    getch();
    return 0;
}
