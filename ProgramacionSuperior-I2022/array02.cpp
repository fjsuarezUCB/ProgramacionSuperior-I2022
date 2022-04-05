#include <iostream>

using namespace std;

int main_arr02() {
	int arr[] = { 21, 47, 87, 25, 32 }; // Forma de inicializar arrays sin usar libreria <array>

	cout << "Elementos del array: ";
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
		cout << arr[i] << endl;
	}

	return 0;
}