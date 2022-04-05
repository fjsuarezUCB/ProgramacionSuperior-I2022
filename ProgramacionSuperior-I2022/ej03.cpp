#include <iostream>
#include "Cuenta.h"

using namespace std;

int main_03() {
	Cuenta cuenta1("Pepe Perez");
	Cuenta cuenta2("Maria Mercedes");

	cout << "cuenta1 pertenece a: " << cuenta1.getNombre() << endl;
	cout << "cuenta2 pertenece a: " << cuenta2.getNombre() << endl;

	return 0;
}