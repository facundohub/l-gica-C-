#include <iostream>
using namespace std;
//if - else if - else en c++
int main(int argc, char *argv[]) {
	
	float miNumero;  
	
	cout << "ingrese un numero: " << endl;
	cin >> miNumero;
	
	if (miNumero > 0){
		cout << "valor positivo: "<< miNumero <<endl;
	}
	else if (miNumero < 0){
		cout <<"valor no positivo: " << miNumero << endl; 
	}
	else {
		cout <<"valor 0: " << miNumero << endl; 
	}
	
	return 0;
}

