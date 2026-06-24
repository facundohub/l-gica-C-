#include <iostream>
using namespace std;
//algoritmo mayor edad
int main(int argc, char *argv[]) {
	
	const int EDAD_ADULTO = 18;
	
	cout << "ingresa tu edad: " << endl;
	int edadPersona;
	cin >> edadPersona;
	
		if(edadPersona >= EDAD_ADULTO){
			cout << "persoa con edad: "<< edadPersona << " es un adulto" <<endl;
		}
		else{
			cout << "persoa con edad: "<< edadPersona << " es menor"<<endl;
		}
	return 0;
}

