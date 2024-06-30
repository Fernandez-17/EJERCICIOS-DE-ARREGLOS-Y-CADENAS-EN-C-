/*Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada*/
#include<iostream>
#include <sstream>
using namespace std;
int main ( ){
	cout<<" BIENVENIDO AL PROGRAMA DE ECO "<<endl;
	cout<<" -------------------------------"<<endl;
	string input;
	
	cout<<" Ingrese una frase o el texto que guste: "<<endl;
	cout<<"_______________________________________"<<endl;
	getline(cin, input);
	stringstream ss (input);
	string  palabra;
	cout<<" El eco de texto ingresado anteriormete es: "<<endl;
	cout<<" ------------------------------------------"<<endl;
	while(ss >> palabra){
		cout<< palabra <<endl;
	}
	return 0;
}