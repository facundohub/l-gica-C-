#include <iostream>
using namespace std;
//valor dentro de rango 
int main(int argc, char *argv[]) {
	int minimo = 0, maximo = 5;
	//solicitamos dato 
	int dato; 
	cout << "ingressa un dato entre  0 y 5: "<< endl;
	cin >> dato;
	
	//verificamos si el dato esta dentro del rango
	
	bool datoRango = dato >= minimo && dato <= maximo;
	cout << "valor dentro de rango? "<< datoRango << endl;
		
		
	return 0;
}

