/*Generar la función mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de
String.h */
#include<iostream>
#include<conio.h>
using namespace std;
// función para agregar str2 al final de  str1
void mistrcat(char str1[],char str2[]) {
    int tamanio_inicio = 0;
    int tamanio_final = 0;
    // calculamos la longitud de str1 y str2
    while (str1[tamanio_inicio] != '\0') {
        tamanio_inicio= tamanio_inicio + 1 ;
    }
    while (str2[tamanio_final] != '\0') {
        tamanio_final= tamanio_final + 1 ;
    }
    // agregamos str2 al final de str1
    for (int i = 0; i < tamanio_final; i++) {
        str1[tamanio_inicio + i] = str2[i];
    }
    str1[tamanio_inicio + tamanio_final] = '\0';
}

int main() {
    cout << "    BIENVENIDO AL SISTEMA    " << endl;
    cout << "-----------------------------" << endl;
    
    char inicio[100] = "Buenasss ";
    char final[] = "criaturitas del señor ";
    // llamamos a la función mistrcat 
    mistrcat(inicio, final);
    //mostramos los resultados
    cout << "  La cadena concatenada es:    " << endl;
    cout <<"________________________________" << endl;
    cout <<endl;
    cout <<  inicio  << endl;
    getch();
    return 0;
}
