/*Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020. Luego,
el contador desea obtener los siguientes resultados:

•Valor de la venta mensual promedio.
• Obtenga el porcentaje de los meses del año que cumplieron los siguientes niveles de ventas:
     Nivel ventas:                Descripción:
       Mínimo                  Menos del 40% del promedio anual de ventas
       Regular                 Entre el 40% a 75% del promedio de ventas
       Excelente               Más del 75% del promedio mensual
• Indique los nombres de los meses (enero, febrero, etc.) en los cuales la venta fue Excelente.*/
#include<iostream>
#include<conio.h>

using namespace std;
int main () {
	cout <<"       BIENVENIDOS AL PROGRAMA DE CONTABILIDAD          "<<endl;
	cout <<"--------------------------------------------------------"<<endl;
	//solicitamos los datos al usuario
	int meses;
	cout<<"     Ingrese el total de meses a analizar :              "<<endl;
	cout<<"_________________________________________________________"<<endl;
	cin >> meses;
	cout<<"_________________________________________________________"<<endl;
	cout<<"Ingrese el monto de ventas de cada mes en todo  el año   "<<endl;
	cout<<"_________________________________________________________"<<endl;
	int array[meses];
	for ( int i=0 ; i<meses; i++){
		cout<<"Mes [ "<<i +1 <<"] : ";
		cin >> array[i];
	}
	//sumamos las ventas de cada mes 
	int total_ventas=0;
	for (int i = 0 ; i< meses ; i++){
		total_ventas=total_ventas+array[i];
	}
	//mostramos el total de vental anual
	cout<<"_________________________________________________________"<<endl;
	cout<<" Suma total de las ventas durante todos los meses :      "<<endl;
	cout<<"               "<<total_ventas<<endl;
	cout<<"_________________________________________________________"<<endl;
	// hallamos el valor de la venta mensual promedio
	// MEDIA
	double promedio;
	promedio= total_ventas/meses;
	cout << "       Promedio mensual de ventas                     "<<endl;
	cout <<endl,
	cout <<"              "<<promedio << endl;
	
	double nivel_minimo = 0.4 * promedio;
    double nivel_regular = 0.4 * promedio;
    double nivel_exelente = 0.75 * promedio;
    
    int cont_minimo = 0, cont_regular = 0, cont_excelente = 0;
    
	string meses_excelentes[meses];
    string nombres_meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                              "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
                              
    for (int i = 0; i < meses; i++) {
        if (array[i] < nivel_minimo) {
            cont_minimo++;
        } else if (array[i] >= nivel_regular && array[i] <= nivel_exelente) {
            cont_regular++;
        } else if (array[i] > nivel_exelente) {
            cont_excelente++;
            meses_excelentes[cont_excelente - 1] = nombres_meses[i];
        }
    }
    
    double porcentaje_minimo = (static_cast<double>(cont_minimo) / meses) * 100;
    double porcentaje_regular = (static_cast<double>(cont_regular) / meses) * 100;
    double porcentaje_excelente = (static_cast<double>(cont_excelente) / meses) * 100;
    
    
    cout << "________________________________________________________" <<endl;
    cout << "PORCENTAJE DE VENTAS Y SU NIVEL ALCANZADO DE LOS MESES  "<<endl;
    cout << endl;
    cout << "Porcentaje de meses con ventas mínimas: " << porcentaje_minimo << "%" << endl;
    cout << "Porcentaje de meses con ventas regulares: " << porcentaje_regular << "%" << endl;
    cout << "Porcentaje de meses con ventas excelentes: " << porcentaje_excelente << "%" << endl;
    cout <<endl;
    cout<<"__________________________________________________________" <<endl;
    cout<<"                 MESES CON VENTAS EXELENTES               " <<endl;
    cout<<endl;
    if (cont_excelente > 0) {
        for (int i = 0; i < cont_excelente; i++) {
            cout << meses_excelentes[i];
            if (i < cont_excelente - 1) {
                cout << endl;
            }
        }
        cout << endl;
    }
	getch();
	return 0;
}