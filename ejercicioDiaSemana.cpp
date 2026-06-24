#include <iostream>
using namespace std;
//ejercicio dia semana
int main(int argc, char *argv[]) {
	
	int diaSemana; 
	cout << "ingrese el día numerico de la semana 1 lunes 7 domingo: " << endl;
	cin >> diaSemana; 
	
	if (diaSemana==1){
		cout << "Lunes" << endl;
	}
	else if (diaSemana==2){
		cout << "Martes" << endl;
	}
	else if (diaSemana==3){
		cout << "Miercoles" << endl;
	}
	else if (diaSemana==4){
		cout << "Jueves" << endl;
	}
	else if (diaSemana==5){
		cout << "Viernes" << endl;
	}
	else if (diaSemana==6){
		cout << "Sabado" << endl;
	}
	else if (diaSemana==7){
		cout << "Domingo" << endl;
	}
	else {
		cout << "error " << diaSemana << endl;
	}
	return 0;
}

