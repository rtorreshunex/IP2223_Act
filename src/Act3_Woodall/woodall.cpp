//============================================================================
// Name        : woodall.cpp
// Author      : Rubén Torres Gutiérrez <rtorresh@alumnos.unex.es>
// Version     : v1.0
// Description : Números de Woodall generalizados
//============================================================================

#include<iostream>
using namespace std;

// PRE = {b>=0 && inicio>=0 && inicio<fin}
// POST = {Se escribirán los números de Woodall generalizados con base b desde el inicial hasta el final}

long int potencia(int b, int n){
	long int result = b;
	if(n == 0)
		result = 1;
	else{
		for(int i=2; i<=n; i++){
			result *= b;
		}
	}
	return result;
}

long int wg(int b, int n){
	return (n * potencia(b, n) - 1);
}

void woodall(){
	int b;
	int inicio;
	int fin;
	cin >> b;
	cin >> inicio;
	cin >> fin;
	for(int n = inicio; n <= fin; n++)
		cout << wg(b, n) << endl;
}

// Pruebas

// Pruebas potencia
//	b	n	valor devuelto
//	2	12	49151
//	3	3	80
//	13	10	1378584918489
//	2	15	491519
//	3	1	2
void pruebaWG(){
	cout << "Inicio - pruebaWG" << endl;
	if(wg(2, 12) != 49151)
		cout << "Error prueba 2, 12" << endl;
	if(wg(3, 3) != 80)
		cout << "Error prueba 3, 3" << endl;
	if(wg(13, 10) != 1378584918489)
		cout << "Error prueba 13, 10" << endl;
	if(wg(2, 15) != 491519)
		cout << "Error prueba 2, 15" << endl;
	if(wg(3, 1) != 2)
		cout << "Error prueba 3, 1" << endl;
	cout << "Fin    - pruebaWG" << endl;
}

// Pruebas potencia
//	b	n	valor devuelto
//	2	4	16
//	7	0	1
//	9	1	9
//	6	10	60466176
//	0	3	0
//	0	0	1
void pruebaPotencia(){
	cout << "Inicio - pruebaPotencia" << endl;
	if(potencia(2, 4) != 16)
		cout << "Error prueba 2, 4" << endl;
	if(potencia(7, 0) != 1)
		cout << "Error prueba 7, 0" << endl;
	if(potencia(9, 1) != 9)
		cout << "Error prueba 9, 1" << endl;
	if(potencia(6, 10) != 60466176)
		cout << "Error prueba 6, 10" << endl;
	if(potencia(0, 3) != 0)
		cout << "Error prueba 0, 3" << endl;
	if(potencia(0, 0) != 1)
		cout << "Error prueba 0, 0" << endl;
	cout << "Fin    - pruebaPotencia" << endl;
}

void pruebas(){
	cout << "Inicio de todas las pruebas" << endl;
	pruebaPotencia();
	pruebaWG();
	cout << "Fin de todas las pruebas" << endl;
}

int main(){
//	pruebas();
	woodall();
	return 0;
}
