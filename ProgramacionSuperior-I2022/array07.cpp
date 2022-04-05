#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int main_arr07() {
	const size_t arraySize{ 7 };

	array<string, arraySize> colores{"rojo", "amarillo", "anaranjado", "azul", "verde", "negro", "blanco"};

	cout << "Array desordenado: " << endl;
	for (string color : colores) {
		cout << color << " ";
	}

	sort(colores.begin(), colores.end());

	cout << endl << "Array ordenado: " << endl;
	for (string color : colores) {
		cout << color << " ";
	}

	bool encontrado;
	
	encontrado = binary_search(colores.begin(), colores.end(), "anaranjado");
	cout << endl << "Anaranjado encontrado? " << (encontrado ? "Si" : "No");

	encontrado = binary_search(colores.begin(), colores.end(), "violeta");
	cout << endl << "Violeta encontrado? " << (encontrado ? "Si" : "No");

	return 0;
}