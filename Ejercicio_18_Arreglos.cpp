/*18. Dada una frase comprobar si el balanceo de los paréntesis es correcto. Es decir, “(ccc(ccc)cc((ccc(c))))”
es correcto, pero “)ccc(ccc)cc((ccc(c)))(“ no lo es, aunque tenga el mismo número de paréntesis abiertos
que cerrados.*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

//funcion de verificacion de parentesisi
bool balanceo_de_parentesis(string& frase) {
    int contador = 0;

    for (char x : frase) {
        if (x == '(') {
            contador = contador + 1;
        } else if (x == ')') {
            contador= contador - 1; 

            if (contador < 0) {
                return false;
            }
        }
    }

    return contador == 0;
}

int main(){
	cout<<"                     BIENVENIDOA ALA SISTEMA                   "<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	///solicitamos al usuario una frase con parentesiis para verificar
	string frase_a_comprobar;
    cout << "Ingrese una frase con paréntesis para verificar el balanceo: "<<endl,
    cout <<"______________________________________________________________"<<endl;
    getline(cin, frase_a_comprobar);

	//mostramos los resultados
	cout<<"_______________________________________________________________"<<endl;
	cout<<"                            RESULTADOS                         "<<endl;	
	cout<<"_______________________________________________________________"<<endl;

	if ( balanceo_de_parentesis(frase_a_comprobar)){
		cout<<"El balanceo de parentesis de la frase " <<frase_a_comprobar<< " es correcto"<<endl;
		cout<<endl;
	}else{
		cout<<"El balanceo de parentesis de la frase " <<frase_a_comprobar<< " es incorrecto"<<endl;
		cout<<endl;
	}
	
	getch ();
	return 0;
	
}
