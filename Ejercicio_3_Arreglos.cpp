/*3.Contar la ocurrencia de una letra específica en una cadena de entrada*/
#include<iostream>
#include<string>
using namespace std;

 int contador_de_letras( const string& cadena, char letra) {
 	int contador = 0;
 	for(char c : cadena) {
 		if(c==letra) {
 			contador=contador+1;
		 }
	 }
	 return contador;
 }
 int main(){
 	string entrada;
 	char letra;
 	cout<<"Ingrese la cadena de texto: ";
 	getline(cin,entrada);
 	cout<<"Ingrese la letra a contar: ";
 	cin>>letra;
 	int cantidad = contador_de_letras(entrada,letra);
 	cout<<" La letra " << letra << " aparece " <<  cantidad  <<  " veces en la cadena " <<endl;
 	
 	return 0;
 }