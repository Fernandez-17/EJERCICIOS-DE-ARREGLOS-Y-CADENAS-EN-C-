/*12. Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra
ordenado, false en caso contrario*/
#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

// Función para verificar si el vector está ordenado
bool vector_ordenado(vector<int> &vec, int longitud) {
    //orden ascendente
    bool ordenado_ascendente = true;
    for (int i = 1; i < longitud; i++) {
        if (vec[i] < vec[i - 1]) {
            ordenado_ascendente = false;
            break;
        }
    }

    // orden descendente 
    if (!ordenado_ascendente) {
        bool ordenado_descendente = true;
        for (int i = 1; i < longitud; i++) {
            if (vec[i] > vec[i - 1]) {
                ordenado_descendente = false;
                break;
            }
        }
        return ordenado_descendente;
    }

    return ordenado_ascendente;
}

int main () {
	cout<<"  BIENVENIDO AL SISTEMA DE VALIDACION DE VECTORES "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	//solictamos los datos para crear el vector al usuario
	int tamanio_vector;
	cout<<"         Ingrese el tamaño del vector             "<<endl;
	cout<<"__________________________________________________"<<endl;
	cin >> tamanio_vector;
	cout<<"__________________________________________________"<<endl;
	//definimos el vector
	vector<int> numeros;
	cout<<"         Ingrese los valores del vector          "<<endl;
	cout<<"__________________________________________________"<<endl;
	cout<<"   Elementos del vector:   " <<endl;
	for ( int i = 0 ; i < tamanio_vector ; i++){
		int valor;
		cout<<"Elemento ["<<i+1<<"] : ";
		cin >> valor;
		numeros.push_back(valor);
	}
	//verificamos si esta ordenado o no 
	bool ordenado = vector_ordenado(numeros, tamanio_vector);

	
	cout<<"_________________________________________________"<<endl;
	cout<<"                 RESULTADOS                      "<<endl;
	cout<<"_________________________________________________"<<endl;
	if (ordenado) {
        cout << "El vector está ordenado. "    << endl;
    } else {
        cout << "El vector  no está ordenado." << endl;
    }
    
	getch();
	return 0;
}