#include <iostream>
using namespace std;
#include <iomanip>//imput output manipulaion para el setprecision de los float
int main(int argc, char *argv[]) {
	int entero = 10;
	cout << "entero: " << entero << endl;
	
	float flotante = 9.5;
	cout << fixed << setprecision(2);
	cout << "flotante: " << flotante << endl;
	
	double doble = 8.9999;
	cout << "doble: " << doble << endl;
	
	char caracter = 'A';
	char caracterDecilmal = 65; //ascci = A
	cout << "caracter: " << caracter << endl;
	cout << "caracterDecilmal ASCII: " << caracterDecilmal << endl;
	
	bool boleano = true; //true = 1 false = 0
	cout << "booleano: " << boleano << endl; 
	
	char cadena1[] = "Hola";
	cout <<"cadena1: " << cadena1 << endl;
	//se puede usar la clase string para trabajar con cadenas. 
	string cadena2 = "dato";
	cout << "cadena2: " << cadena2 <<endl;
	
	return 0;
}

