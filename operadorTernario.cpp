#include <iostream>
using namespace std;
//operador ternario
int main(int argc, char *argv[]) {
	
	float miNumero;  
	
	cout << "ingrese un numero: " << endl;
	cin >> miNumero;
	
	//sirve solo para reemplazar un bloque if else, sencillo 
	
	(miNumero > 0) ? cout << "valor positivo " : cout << "cero o negativo";
	
	return 0;
}

