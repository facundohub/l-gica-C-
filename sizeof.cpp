#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//sizeof
		//tamaño bytes de tipo de datos
		int entero = 10;
		float flotante = 2.8;
		double doble = 6.999;
		char caracter = 'A';
		bool boleano = false;
		string cadena = "hola gilatrum";
		
		//ahora si usamos sizeof
		
		cout << "int tamaño bytes: "<< sizeof(entero) << endl;
		cout << "float tamanio bytes: "<< sizeof(flotante)<< endl;
		cout << "doble tamanio bytes: "<< sizeof(doble)<< endl;
		cout << "caracter tamanio bytes : "<< sizeof(char)<< endl;
		cout << "booleano tamanio en bytes: "<< sizeof(boleano)<< endl;
		cout << "string tamanio bytes: " << sizeof(cadena)<< endl;
		cout << "cadena tamanio de largo: "<<cadena.size()<< endl; 
		
	return 0;
}

