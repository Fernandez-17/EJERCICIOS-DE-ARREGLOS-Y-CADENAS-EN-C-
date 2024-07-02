/*10. Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de
tendencia central media, mediana y moda.*/
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include <map>
#include <algorithm>

using namespace std;
	// Función para generar números aleatorios entre 100 y 1000
int generador_de_numeros(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}
	
int main ( ){
	cout<<"BIENVENIDO AL SISTEMA DE CALCULOS "<<endl;
	cout<<" DE MEDIDAS DE TENTENCIA CENTRAL  "<<endl;
	cout<<"----------------------------------"<<endl;
	//datos para generar el arreglo
	const int cantidad_de_numeros = 30;
	const int maximo = 1000;
	const int minimo = 100;
	//generamos los numeros aleaotorios y guardamos 
	srand(static_cast<unsigned int>(time(0)));
	 int numeros[cantidad_de_numeros];
	 for (int i =0 ; i<cantidad_de_numeros ; i++){
	 	numeros[i] = generador_de_numeros(minimo,maximo);
	 }
	//mostramos los numeros aleatorios
	cout<<"___________________________________________________"<<endl;
	cout<< "Generando 30 números aleatorios entre 100  y 1000 "<< endl;
	cout<<endl;  
    for (int i = 0; i < cantidad_de_numeros; ++i) {
        numeros[i] = generador_de_numeros(minimo, maximo);
        cout << numeros[i] << " ";
    }
    cout << endl;
	//calculamos las medidas de tendencia central
	// MEDIA
	double suma = 0;
    for (int i = 0; i < cantidad_de_numeros; ++i) {
        suma = suma + numeros[i];
    }
    double media = suma / cantidad_de_numeros;
    
    // MEDIANA 
    sort(numeros, numeros + cantidad_de_numeros);
    double mediana;
    if (cantidad_de_numeros % 2 == 0) {
        mediana = (numeros[cantidad_de_numeros / 2 - 1] + numeros[cantidad_de_numeros / 2]) / 2.0;
    } else {
        mediana = numeros[cantidad_de_numeros / 2];
    }
    
    // MODA
    map<int, int> se_repite;
    for (int i = 0; i < cantidad_de_numeros; ++i) {
        se_repite[numeros[i]]++;
    }
    int max_se_repite = 0;
    int moda;
    for (auto it = se_repite.begin(); it != se_repite.end(); ++it) {
        if (it->second > max_se_repite) {
            max_se_repite = it->second;
            moda = it->first;
        }
    }
    //mostramos en pantalla resultados
    cout<<"__________________________________"<<endl;
    cout<<"            RESULTADOS            "<<endl,
    cout<<"__________________________________"<<endl;
    cout<<"   Media   : "<<media   << endl;
    cout<<endl;
    cout<<"   Mediana : "<<mediana <<endl;
    cout<<endl;
    cout<<"   Moda    : "<<moda    <<endl;
    
	getch();
	return 0;
	}