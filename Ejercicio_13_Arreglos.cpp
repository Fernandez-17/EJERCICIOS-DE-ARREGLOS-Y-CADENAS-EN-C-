/*13. Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h */
#include<iostream>
#include<conio.h>

using namespace std;

//Generamos la funcion mistrcpy(str1 , str2)
void mystrcpy(char  str1[] , char str2[]){
	int i = 0;
	while (str2[i] != '\0') {
        str1[i] = str2[i];
		i = i + 1;
	}
	str1[i] = '\0';
}
	
int main( ) {
	cout<<"    BIENVENIDO AL SISTEMA    "<<endl;
	cout<<"-----------------------------"<<endl;
	char inicio [] = "Los patitos nadaban por las lagunas del bosque";
	char final [30];
	mystrcpy ( final , inicio),
	
	cout <<"   La cadena copiada es:    "<<endl;
	cout <<"____________________________"<<endl;
	cout <<  final  <<endl;
	
	getch();
	return 0;
}