/*19. Escribir un programa que dada una frase, determine si es un palíndromo o no. Un palíndromo es una
frase que, atendiendo sólo a sus letras e ignorando los espacios, acentos, signos de puntuación y tipo
de letra (mayúscula o minúscula) expresa lo mismo leída de izquierda a derecha que de derecha a
izquierda. “dábale arroz a la zorra el abad”*/
/*Comprobar si un número de 10 cifras es capicúa usando un vector*/
#include <iostream>
#include <string>
#include <cctype>
#include <conio.h>
using namespace std;

// Creamos una función para determinar si el número es capicúa
bool es_polindromo(string& frase) {
	
    int inicio = 0;
    int fin = frase.length() - 1;

    while (inicio < fin) {
        // ignoramos espacios, acentos, signos de puntuación y diferencias de mayúsculas y minúsculas
        while (inicio < fin && !isalnum(frase[inicio])) {
            inicio++;
        }
        while (inicio < fin && !isalnum(frase[fin])) {
            fin--;
        }
        
        // convertimos ambos caracteres a minúsculas y comparamos
        if (tolower(frase[inicio]) != tolower(frase[fin])) {
            return false; 
        }
        
        
        inicio = inicio + 1;
        fin = fin - 1;
    }

    return true;
}

int main() {
    cout << "  BIENVENIDO AL SISTEMA DE POLINDROMOS  " << endl;
    cout << "----------------------------------------" << endl;

    string frase;
    cout << "     Ingrese  una  frase por favor:      " << endl;
    cout << "_________________________________________" << endl;
    getline(cin,frase);
    cout <<"__________________________________________" <<endl;
    // Llamamos a la función es_polindromo
    if (es_polindromo(frase)) {
        cout << "        RESULTADO          " << endl;
        cout << "La frase '"<< frase << "' es polindromo." << endl;
    } else {
        cout << "        RESULTADO          " << endl;
        cout << "La frase '" << frase << "' no es polindromo." << endl;
    }

    getch(); 
    return 0;
}