#include <iostream>
using namespace std;
//operadores lógicos. 
int main(int argc, char *argv[]) {
	// && || !
	
	bool a = true;
	bool b = false;
	
	cout << "valor a: " << a << endl;
	cout << "valor b: " << b << endl;
	
	
	//&& y and solo regresa verdadero si ambos operadores son verdaderos
	
	bool c = a && b;
	cout << "resultado operador and: " << c << endl;
	
	// || or regresa verdadero si cualquier operador es verdadero
	
	c = a || b; 
	cout << "resultado operador or: " << c << endl;
	
	// ! not invierte el valor original es un operador unario. 
	c = !a;
	cout << "resultado operador not: " << c << endl;
	
	return 0;
}

