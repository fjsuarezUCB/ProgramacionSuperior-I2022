#include <iostream>

using namespace std;
int cuadrado_12(int);
int cuadrado_referencia(int&);

int main_12() {
	int a{ 25 };
	
	cout << "El numero inicial es " << a << endl;
	cout << "El numero al cuadrado es " << cuadrado_12(a) << endl;
	//cout << "El numero al cuadrado por referencia es " << cuadrado_referencia(a) << endl;
	cuadrado_referencia(a);
	cout << "El numero final es " << a << endl;
	
	return 0;
}

int cuadrado_12(int x) {
	return x * x;
}

int cuadrado_referencia_12(int& numero) {
	numero *= numero;
	return numero;
}

