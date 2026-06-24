#include <iostream>
using namespace std;
//introducir valores c++
int main(int argc, char *argv[]) {
//declaramos variable
	int entero; 
	// solicitamos la entrada
	cout <<"proporciona un numero: ";
	cin >> entero; 
	//desplegamos el valor
	cout << "valor porporcionado: "<< entero << endl;
	
	//1. declaramos la variable 
	string nombre;
	cout << "proporciona tu nombre: " << endl;
	//cin >> nombre; no sirve debido a que solo lee hasta un espacio en  blanco
	cin.ignore(); //se limpia el buffer para que no se mezclen las llamadas cin
	getline(cin, nombre);
	
	cout << "valor nombre: " << nombre << endl; 
	
	
	return 0;
}

