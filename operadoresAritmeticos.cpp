#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {
	//operadores aritmeticos en C++
	int a, b, c, e, f;
	float d;
	//suma
	a = 3+ 4;
	cout <<"resultado suma: "<< a << endl;
	//resta
	b = 6-2;
	cout <<"resultado resta: "<< b << endl;
	//multiplicacion *
	c = a * 2;
	cout << "multiplicacion: "<< c << endl; 	
	//division 
	d = b / 2.5;
	cout << "division: "<< d << endl;
	//modulo
	f = 9%2;
	cout <<"residuo: " << f << endl;
	//potencia
	e = pow(a,2);//esta funcion pow es de la libreria <cmath>
	cout <<"potencia: "<< e << endl;
	return 0;
}

