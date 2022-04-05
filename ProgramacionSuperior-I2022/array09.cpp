#include <iostream>
#include <array>

using namespace std;

const size_t filas{ 3 };
const size_t columnas{ 4 };

void imprimirArray(array<array<int, columnas>, filas>&);

int main() {
	array<array<int, columnas>, filas> array1{ 1,2,3,4,5,6,7,8,9,10,11,12 };
	array<array<int, columnas>, filas> array2{ 1,2,3,4,5,6,7,8,9 };

	cout << "Los valores del array1 son:" << endl;
	imprimirArray(array1);

	cout << "Los valores del array2 son:" << endl;
	imprimirArray(array2);

	return 0;
}

void imprimirArray(array<array<int, columnas>, filas>& a) {
	for (auto const& fila : a) {
		for (auto const& elemento : fila) {
			cout << elemento << " ";
		}
		cout << endl;
	}
}