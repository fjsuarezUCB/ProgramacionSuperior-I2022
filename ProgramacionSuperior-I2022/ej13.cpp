#include <iostream>

using namespace std;

unsigned int volumenDeCaja(unsigned int largo=1, unsigned int ancho=1, unsigned int alto=1);

int main_13() {
	cout << "El volumen por defecto de una caja es " << volumenDeCaja() << endl;

	cout << "El volumen de una caja de 10 de largo, 1 de ancho y 1 de alto " << volumenDeCaja(10) << endl;

	cout << "El volumen de una caja de 10 de largo, 5 de ancho y 1 de alto es " << volumenDeCaja(10, 5) << endl;

	cout << "El volumen de una caja de 10 de largo, 5 de ancho y 2 de alto es " << volumenDeCaja(10, 5, 2) << endl;

	return 0;
}


unsigned int volumenDeCaja(unsigned int largo, unsigned int ancho, unsigned int alto) {
	return largo * ancho * alto;
}