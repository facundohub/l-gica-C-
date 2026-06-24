#include <iostream>
#include <iomanip>//agregamoslibreria para manipular decimales en el sueldo
using namespace std;

int main(int argc, char *argv[]) {
	//definir variables
	
	int edad;
	bool empleadoConfianza;
	string nombreCompleto; 
	float sueldo; 
	
	cout << "proprociona tu nombre: " << endl;
	getline(cin, nombreCompleto);
	//aca no hace poner ingnore dibido a que el getline es el primero en declararse
	
	cout << "proporcione su edad: " << endl;
	cin >> edad;
	
	cout << "proporciona tu sueldo: " << endl;
	cin >> sueldo;
	
	cout << "eres empleado de confianza? (1 true 0 false): "<< endl;
	cin >> empleadoConfianza;
	
	cout << "\ntu nombre es: " << nombreCompleto << endl;
	cout << "tu edad es: " << edad << endl;
	cout << fixed << setprecision(2);//<iomanip>
	cout << "tu sueldo: "<< sueldo << endl;
	cout << "empleado de confianza?: "<< empleadoConfianza<< endl;
	
	
	
	return 0;
}

