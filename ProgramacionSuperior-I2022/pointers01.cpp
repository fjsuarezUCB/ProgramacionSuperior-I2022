#include <iostream>

using namespace std;

int main_ptr01() {
	int* conteoPtr{ nullptr }; // declara e inicializa un puntero
	int conteo{ 0 }; // declara e inicia una variable
	int** conteoPtrPtr{ nullptr }; // múltiple indirección
	int* otroPtr{ nullptr };

	conteoPtr = &conteo; // & operador de direccionamiento
	conteoPtrPtr = &conteoPtr;
	otroPtr = &conteo;

	cout << "Ingrese un conteo: ";
	cin >> *otroPtr;
	
	cout << "Valor de conteo: " << conteo << endl;
	cout << "Direccion de conteo: " << &conteo << endl;
	cout << "Valor de conteoPtr: " << conteoPtr << endl;
	cout << "Valor al que apunta conteoPtr: " << *conteoPtr << endl; // * operador de indirección
																	// dereferenciación del puntero
	cout << "Direccion de conteoPtr: " << &conteoPtr << endl;

	cout << "Valor al que apunta conteoPtrPtr: " << *conteoPtrPtr << endl;
	cout << "Valor al que apunta el puntero al que apunto conteoPtrPtr: " << **conteoPtrPtr << endl;

	return 0;
}


// conteo = 7

// conteoPtr -> conteo = 0x... indirección

