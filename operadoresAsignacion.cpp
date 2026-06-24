#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//operadores de asignacion
	int miNumero = 10;
	cout << "Valor miNumero: " << miNumero << endl; 
	//podemos sobreescribir el valor de la variable
	miNumero = 20;
	cout << "nuevo valor miNumero: " << miNumero << endl; 
	miNumero += 5; //operador +=
	cout << "nuevo valor miNumero: " << miNumero << endl;
	miNumero -= 3; //operador -=
	cout << "nuevo valor miNumero: " << miNumero << endl;
	miNumero *= 2; //operador *=
	cout << "nuevo valor miNumero: " << miNumero << endl;
	miNumero /= 7; 
	cout << "nuevo valor miNumero: " << miNumero << endl;
	miNumero %= 2;
	cout << "nuevo valor miNumero: " << miNumero << endl;
	
	
	return 0;
}

