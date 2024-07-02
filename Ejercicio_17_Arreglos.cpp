/*17. Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido
pertenece a esa persona*/
#include<iostream>
#include<conio.h>
#include <string>
using namespace std;

// función para verificar si el apellido está en el nombre completo
bool verifica_apellido(string& nombre_completo,string& apellido) {
    size_t found = nombre_completo.find(apellido);
    if (found != string::npos) {
        return true;
    }
    return false;
}

int main() {
	cout<<"     BIENVENIDO AL SISTEMA   "<<endl;
	cout<<"-----------------------------"<<endl;
	
    string nombre_completo = "Cristian Fernandez";
    string apellido = "Rene";
    
    cout<<"           RESULTADOS        "<<endl;
    cout<<"_____________________________"<<endl;
    
    if (verifica_apellido(nombre_completo, apellido)) {
        cout << "El apellido  " << apellido << "  pertenece al nombre completo  " << nombre_completo << " ." << endl;
    } else {
        cout << "El apellido  " << apellido << "  no pertenece al nombre completo  " << nombre_completo << " ." << endl;
    }
    getch();
    return 0;
}
