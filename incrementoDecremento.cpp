#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//operador incremento
	int a=0, b, c;
	//operador post incrementeo
	//se incremente la proxima vez que se uses_allocator
	a++;
	cout <<"nuevo valor de a++: " << a <<endl;
	//operador de preincremento
	++a;
	cout <<"nuevo valor de ++a: "<<a<<endl;
	
	//postdecremento
	a--;
	cout <<"nuevo valor de a--: "<<a<<endl;
	//predecremento
	--a;
	cout <<"nuevo valor de --a: "<<a<<endl;
	
	return 0;
}

