#include <iostream>
#include <array>

using namespace std;

void staticArrayInit();
void automaticArrayInit();
const size_t tamano_array{ 3 };

int main_arr05() {
	cout << "Primera llamada a cada funcion:" << endl;
	staticArrayInit();
	automaticArrayInit();

	cout << endl << "Segunda llamada a cada funcion:" << endl;
	staticArrayInit();
	automaticArrayInit();

	return 0;
}

void staticArrayInit() {
	static array<int, tamano_array> array1;
	cout << endl << "Valores al iniciar staticArrayInit:" << endl;

	for (size_t i{ 0 }; i < array1.size(); ++i) {
		cout << "array1[" << i << "] = " << array1[i] << " ";
	}

	cout << endl << "Valores al salir de staticArrayInit:" << endl;
	for (size_t i{ 0 }; i < array1.size(); ++i) {
		cout << "array1[" << i << "] = " << (array1[i] += 5) << " ";
	}
}

void automaticArrayInit() {
	array<int, tamano_array> array2 {1, 2, 3};
	cout << endl << "Valores al iniciar automaticArrayInit:" << endl;

	for (size_t i{ 0 }; i < array2.size(); ++i) {
		cout << "array2[" << i << "] = " << array2[i] << " ";
	}

	cout << endl << "Valores al salir de automaticArrayInit:" << endl;
	for (size_t i{ 0 }; i < array2.size(); ++i) {
		cout << "array2[" << i << "] = " << (array2[i] += 5) << " ";
	}
}