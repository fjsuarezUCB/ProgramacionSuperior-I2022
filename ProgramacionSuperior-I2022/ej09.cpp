#include <iostream>
#include <iomanip>

// iostream funciones de input output 
// iomanip manipuladores de formato
// cmath funciones matematicas
// cstdlib conversiones de numeros a texto y viceversa, funciones aleatorias
// ctime funciones de fecha y tiempo

// Implementaciones standard de ADTs (Abstract Data Types)
// array
// vector
// list
// forward_list
// deque
// queue
// stack
// map
// unordered_map
// set
// bitset

// cctype funciones para chequear propiedades de caracteres
// cstring funciones para procesar strings de C
// typeinfo funciones para identificar tipos de datos durante la ejecucion

// fstream funciones para escribir y leer archivos
// memory funciones para asignar memoria dinamica
// cassert funciones para esperar cierto output/debugging


using namespace std;

int valorMaximo(int x, int y, int z);

int main_09() {
	cout << "Ingrese tres valores enteros: ";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;

	cout << "El valor maximo es " << valorMaximo(int1, int2, int3);


	return 0;
}

int valorMaximo(int x, int y, int z) {
	int maximo{ x };
	if (y > maximo) {
		maximo = y;
	}

	if (z > maximo) {
		maximo = z;
	}

	return maximo;
}
