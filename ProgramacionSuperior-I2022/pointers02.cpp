#include <iostream>

using namespace std;
int cuadrado(int);
int cuadrado_referencia(int&);
int cuadrado_referencia_ptr(int*);

int main_ptr02() {
	int a{ 4 };
	int* ptr{ nullptr };
	ptr = &a;

	cout << "El numero inicial es " << a << endl;
	cout << "El numero al cuadrado es " << cuadrado(a) << endl;
	cout << "El numero al cuadrado por referencia " << cuadrado_referencia(a) << endl;
	cout << "El numero al cuadrado por referencia con puntero es " << cuadrado_referencia_ptr(ptr) << endl;
	cout << "El numero final es " << a << endl;
	return 0;
}

int cuadrado(int x) { // pasar por valor 
	return x * x;
}

int cuadrado_referencia(int& numero) { // pasar por referencia como argumento
	return numero*numero;
}

int cuadrado_referencia_ptr(int* numeroPtr) { // pasar por referencia con puntero
	return *numeroPtr * *numeroPtr;			// ***NOTA: de hecho, se pasa el puntero como valor
}