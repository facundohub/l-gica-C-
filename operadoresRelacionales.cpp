#include <iostream>
using namespace std;
//operadores realcionales o de comparacion
int main(int argc, char *argv[]) {
	
	int a = 5, b = 6;
	cout << "valor a: "<< a << endl;
	cout << "valor b: "<< b << endl;
	//operador igualdad
	bool c = a == b;
		cout <<"a es igual a b?: " << c << endl;
	
	c = a != b;
	cout <<"a es distinto a b?: " << c << endl;
	c = a > b;
	cout <<"a es mayor a b?: " << c << endl;
	c = a < b; 
	cout <<"a es menor b?: " << c << endl;
	c = a >= b; 
	cout <<"a es igual o mayor a b?: " << c << endl;
	
	return 0;
}

