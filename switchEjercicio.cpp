#include <iostream>
using namespace std;
//switch case 
int main(int argc, char *argv[]) {
	
	int diaSemana; 
	cout << "ingrese el día numerico de la semana 1 lunes 7 domingo: " << endl;
	cin >> diaSemana; 
	
	switch(diaSemana){
	case 1: 
		cout << "Lunes" << endl;
		break;
	case 2: 
		cout << "Martes" << endl;
		break;
	case 3: 
		cout << "Miercoles" << endl;
		break;
	case 4: 
		cout << "Jueves" << endl;
		break;
	case 5: 
		cout << "Viernes" << endl;
		break;
	case 6: 
		cout << "Sabado" << endl;
		break;
	case 7: 
		cout << "Mimingo" << endl;
		break;
	default: cout << "valor erroneo "<< diaSemana << endl;						
	}
	
	return 0;
}

