#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main_arr08() {
	string colores[7]{"rojo", "amarillo", "anaranjado", "azul", "verde", "negro", "blanco"};

	cout << "Array desordenado: " << endl;
	for (string color : colores) {
		cout << color << " ";
	}

	sort(&colores[0], &colores[6]);

	cout << endl << "Array ordenado: " << endl;
	for (string color : colores) {
		cout << color << " ";
	}

	bool encontrado;

	encontrado = binary_search(&colores[0], &colores[6], "anaranjado");
	cout << endl << "Anaranjado encontrado? " << (encontrado ? "Si" : "No");

	encontrado = binary_search(&colores[0], &colores[6], "violeta");
	cout << endl << "Violeta encontrado? " << (encontrado ? "Si" : "No");

	return 0;
}