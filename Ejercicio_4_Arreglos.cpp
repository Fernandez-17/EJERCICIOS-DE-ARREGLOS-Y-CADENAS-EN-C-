/*4. Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos*/
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

 int main( ){
 	//Pedimos al usuario que ingrese los datos del arreglo y lo almacenamos
 	cout<<"BIENVENIDO AL PROGRAMA DE ORDENAMIENTO DE NOMBRES ALFABETICAMENTE"<<endl;
 	cout<<"-------------------------------------------------------------------"<<endl;
 	int numero_de_nombres;
 	cout<<"Ingrese la cantidad de nombres a ordenar: "<<endl;
 	cin >>numero_de_nombres;
 	cin.ignore();
 	//Declaramos del arreglo de nombres como un arreglo de strings
 	string nombre[numero_de_nombres];
 	string aux;
	cout << "Ingrese los nombres que desee:"<<endl;
	cout<<  "-------------------------------"<<endl;
    for (int i = 0; i <numero_de_nombres ; i++) {
        cout << "Nombre " << i+1 << ": ";
        getline(cin, nombre[i]); 
	 }
	//Procedemos a ordenar los nombres  alfabeticamente
	for(int i= 0 ; i < numero_de_nombres-1 ; i++){
		for(int j = 0 ; j< (numero_de_nombres-1)-i ; j++){
			//Comparamos e intercambiamos si el nombre actual es mayor que el siguiente nombre
			if (nombre[j] >nombre[j+1]) {
				aux=nombre[j];
				nombre[j] = nombre[j+1];
				nombre[j+1]=aux;	
			}
		}
	}
	//Mostramos en pantalla los nombre ordenadados
	cout<<"\nNombres ordenados en orden alfabetico:\n"<<endl;
	cout<<"--------------------------------------"<<endl;
	for( int i=0; i < numero_de_nombres ; i++){
		cout<< nombre[i] << endl;
	}
	getch();
	return 0;
 }