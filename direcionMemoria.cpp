#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int entero = 10;
	cout << "entero: " << entero << endl;
	//buscar la referencia de memoria del entero
	cout << "dirección de memoria variable entero: " << &entero << endl;
	
	return 0;
}

