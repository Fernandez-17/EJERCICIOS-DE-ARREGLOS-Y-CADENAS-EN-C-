/*7. Invertir un vector e imprimirlo.*/
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

int main ( ){
	cout<<"        BIENVENIDO AL SISTEMA        "<<endl;
	cout<<"-------------------------------------"<<endl;
	//solicitamos el tamaño del vector
	int tamanio_vector;
	cout<<"    Ingrese el tamaño del vector     "<<endl;
	cout<<"_____________________________________"<<endl;
	cin >> tamanio_vector;
	//definimso el vector
	vector<int>numero;
	cout <<"   Ingrese los valores del vector  "<<endl;
	cout <<"___________________________________"<<endl;
	cout <<"      Elementos del vector :       "<<endl;
	for( int i=0 ; i < tamanio_vector ; i++ ) {
		int valor;
		cout << "Elemento [" << i + 1 << "]: ";
		cin  >> valor;
		numero.push_back(valor);
	}
	//Invertimos el vector
	for( int i=0 ; i<tamanio_vector/2 ; i++){
		int  aux  = numero [i];
		numero[i] = numero[tamanio_vector -1 -i];
		numero[tamanio_vector-1-i]= aux;		
	}
	//Mostramos el vector invertido
	cout<<"___________________________________"<<endl;
	cout<<"            RESULTADO              "<<endl;
	cout<<"        Vector invertido           "<<endl;
	cout<<"___________________________________"<<endl;
	for ( int i = 0 ; i< tamanio_vector ; i++){
		cout<<numero[i] << endl;
	}
	cout<<"___________________________________"<<endl;
	cout<<"!! GRACIAS,HASTA PRONTO, CUIDESE ¡¡"<<endl,
	cout<<"___________________________________"<<endl;	
	getch();
	return 0;
}