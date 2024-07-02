/*Rotar las componentes de un vector una posición hacia la derecha.*/
#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;
int main( ){
	cout<<"    BIENVENIDO AL PORGRAMA    "<<endl;
	cout<<"------------------------------"<<endl;
	//solicitamos el tamaño vel vector al usuario
	int tamanio_vector;
	cout<<"Ingrese el tamaño del vector  "<<endl;
	cout<<"______________________________"<<endl;
	cin >> tamanio_vector;
	cout<<"______________________________"<<endl;
	//definimos el vector
	cout<<"     Elementos del vector     "<<endl;
	cout<<"______________________________"<<endl;
	vector<int> numeros;
	for(int i=0 ; i< tamanio_vector ; i ++ ){
		int valor;
		cout<<"Elemento ["<< i + 1 <<"]:";
		cin >>valor;
		numeros.push_back(valor);
	}
	//rotamos los valores del vector una posicion a la derecha
	if(tamanio_vector> 1) {
		int aux= numeros[tamanio_vector-1];
			for( int i = tamanio_vector-1 ; i>0 ; i--){
				numeros[i] = numeros [i - 1];	
	}
	numeros[0] = aux;
}
	
	//resultado : vector invertido
	cout<<"_______________________________"<<endl;
	cout<<"         RESULTADO             "<<endl;
	cout<<"    Vector recorriod una       "<<endl;
	cout<<"   posicion a la  derecha      "<<endl;
	cout<<"_______________________________"<<endl;
	for ( int i =0 ;i< tamanio_vector ; i++){
		cout<<numeros[i] << " ";	
	}
	
	getch();
	return 0;
}