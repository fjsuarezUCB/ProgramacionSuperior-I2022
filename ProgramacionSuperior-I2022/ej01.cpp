#include <iostream>

using namespace std;

/*
void 1 byte
bool 1 byte
char 1 byte
short 2 byte
int  4 byte
float 4 byte
long 4 byte
double 8 byte
*/

int a = 5;
int b = 10;
int c = a + b;

int main_1() {
	int numero1{ 0 };
	int numero2{ 0 };
	int suma{ 0 };
	int division{ 0 };

	cout << "Ingrese un numero: ";
	cin >> numero1; // operacion destructiva

	cout << "Ingrese otro numero: ";
	cin >> numero2;

	suma = numero1 + numero2; // operacion destructiva, suma
	// resta = numero1 - numero2
	// multiplicacion = numero1 * numero2
	//division = numero1 / numero2;
	// modulo = numero1 % numero2

	// resultado = (a * (b + c))

	// x > y
	// x < y
	// x >= y
	// x <= y
	// x == y
	// x != y
	

	cout << "La suma es " << suma << endl; // operacion no destructiva

	if (numero1 == numero2) {
		cout << "Los numeros son iguales" << endl;
	}

	if (numero1 != numero2) {
		cout << "Los numeros son desiguales" << endl;
	}

	if (numero1 < numero2) {
		cout << "El primer numero es menor" << endl;
	}

	if (numero1 > numero2) {
		cout << "El primero numero es mayor" << endl;
	}

	if (numero1 <= numero2) {
		cout << "El primer numero es menor o igual que el segundo" << endl;
	}

	if (numero1 >= numero2) {
		cout << "El primer numero es mayor o igual que el segundo" << endl;
	}

	/*
	()
	* / %
	+ -
	<< >>
	< <= > >=
	== !=
	=


	a = b + c - (d % e) == f
	a = b + c - x == f
	a = y == f
	a puede ser true o false
	*/

	return 0;
}