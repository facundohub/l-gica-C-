#include <iostream>
using namespace std;
//ej. precedencia de operadores
int main(int argc, char *argv[]) {
	/*
	1.parentesis y corchetes ()[]
	2.operadores unarios como -, ++, --, !
	3.aritmeticos *, / , %
	4.aritmeticos + y -
	5.relacionales <, <=, > y >=
	6.iualdad == y !=
	7.logicos && , ||
	8.asignacion =, =+, -=, *=, etc
	siempre se evalua de izquierda a derecha
	*/
	int a =  12 / 3 + 2 * 3 - 1; 
	/*
	paso 1 division es lo primero que encontramos de izq a derecha
	a = 4 + 2 * 3 - 1
	de izq a der multiplicacion
	a= 4+6-1
	a = 9
	*/
	cout << "resultado a = "<< a <<endl;
	return 0;
}

