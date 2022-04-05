#include <iostream>
#include "Cuenta.h"

int main_2() {
	Cuenta miCuenta;

	std::cout << "Nombre inicial de la cuenta: " << miCuenta.getNombre() << std::endl;

	std::cout << "Por favor ingrese un nombre para la cuenta: ";
	std::string elNombre;
	std::getline(std::cin, elNombre);
	miCuenta.setNombre(elNombre);

	std::cout << "Nombre de la cuenta es: " << miCuenta.getNombre() << std::endl;

	return 0;
}