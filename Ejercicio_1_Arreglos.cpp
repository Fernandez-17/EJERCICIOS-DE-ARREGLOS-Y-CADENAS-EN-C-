/*1. Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" → "Cáceres
Patrimonio De La Humanidad"*/

#include<iostream>

using namespace std;

	void PonerMayusculaInicialesVoid( char frase[]) {
		bool nuevo= true;
		
		for (int i=0;frase[i]!='\0';++i){
			if(nuevo && isalpha(frase[i])) {
				frase[i]= toupper (frase[i]);
				nuevo=false;
			} else {
				frase[i]=tolower(frase[i]);
			} 
			if (frase[i] == ' ' || frase[i] == '-') {
            nuevo = true;
            }
		}
	}
	
int main( ){
	char frase [] ="cáceres patrimonio de la humanidad";
	cout<<"Frase a convertir:cáceres patrimonio de la humanidad"<<endl;
    PonerMayusculaInicialesVoid(frase);
	cout<<"La frase convertida: "<<frase <<endl;

	return 0;
}