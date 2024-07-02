/*11.Calcular la suma de elementos positivos y negativos en un arreglo.*/
#include<iostream>
#include<conio.h>

using namespace std;
int main( ){
	cout<<"    BIENVENIDO AL SISTEMA SE SUMA   "<<endl;
	cout<<"------------------------------------"<<endl;
	//solicitamos datos para crear el arreglo al usuario
	int tamanio_arreglo;
	cout<<"   Ingrese el total de numeros      "<<endl;
	cout<<"____________________________________"<<endl;
	cin >> tamanio_arreglo;
	cout<<"____________________________________"<<endl;
	//definimos y creamos el arreglo
	int array[tamanio_arreglo];
	 for ( int i=0 ; i < tamanio_arreglo ; i++){
	 	cout<<"Elemento ["<<i+1<<"] : ";
	 	cin >> array[i];
	 }
	 //PROCEDEMOS A REALIZAR LOS CALCULOS DE SUMA DE NEGATIVOS Y POSITIVOS
	 int suma_positivo = 0;
	 int suma_negativo = 0;
	 for( int i= 0 ; i< tamanio_arreglo ; i++){
	 	if (array[i] > 0) {
	 		suma_positivo=suma_positivo +array[i];
		 } else if(array[i] < 0)  {
		 	suma_negativo=suma_negativo + array[i];	
		 }	
	 }
	cout<<"______________________________________"<<endl;
	cout<<"            RESULTADOS                "<<endl;
	cout<<"______________________________________"<<endl;
	cout<<"La suma de los numeros positivos es:  "<< suma_positivo << endl;
	cout<<endl;
	cout<<"La suma de los numeros negativos es:  "<< suma_negativo << endl;	
	getch();
	return 0;
}