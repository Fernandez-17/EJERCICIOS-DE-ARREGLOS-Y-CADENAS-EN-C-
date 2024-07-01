/*Calcular la suma de componentes de índice par e impar en un vector*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int total_de_numeros;
	cout<<"     BIENBENIDO AL PROGRAMA SE SUMA DE VECTORES     "<<endl;
	cout<<"----------------------------------------------------"<<endl;
	//Solicitamos el tamaño del vector
	cout<<"            Ingrese en total de numeros             "<<endl;
	cout<<"____________________________________________________"<<endl;
	cin >> total_de_numeros;
	cout<<"____________________________________________________"<<endl;
	//definimos el vector
	vector<int> numero;
	cout <<"          Ingrese los valores del vector           "<<endl;
	cout <<"___________________________________________________"<<endl;
	cout <<"            Elementos del vector:                  "<<endl;
    for (int i = 0; i < total_de_numeros; i++) {
        int valor;
        cout << "Elemento [" << i + 1 << "]: ";
        cin >> valor;
        numero.push_back(valor); 
    }

    int suma_pares = 0 ,suma_impares = 0;

    // Calculamos el valor de la suma de los elemntos del indice par e impar del vector
    for (int i = 0; i < numero.size(); i++) {
        if (i % 2 == 0) {
            suma_pares = suma_pares + numero[i];
        } else {
            suma_impares =suma_impares + numero[i];
        }
    }
    cout<<"                 RESULTADOS                          "<<endl;
    cout<<"_____________________________________________________"<<endl;
    cout << "Suma de elementos en indices pares: " << suma_pares << endl;
    cout << "Suma de elementos en indices impares: " << suma_impares << endl;

    return 0;
}

 