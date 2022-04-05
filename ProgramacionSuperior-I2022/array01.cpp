// un array es un grupo contiguo de ubicaciones en memoria
// para referirnos a un elemento un array, utilizamos el nombre del array y la posicion
// del elemento en particular (índice)

//array c de 12 elementos (int)
//
//c[0] -45
//c[1] 6
//c[2] 0
//c[3] 1543
//c[4] 62
//.
//.
//.
//c[11] 78

//c[a+b] += 2

// c.size() devuelve el numero de elementos

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main_arr01() {
	array<int, 12> c; //array c de 12 elementos (int)

	for (size_t j{ 0 }; j < c.size(); ++j) {
		c[j] = 0;
	}

	cout << "Indice" << setw(10) << "Valor" << endl;

	for (size_t j{ 0 }; j < c.size(); ++j) {
		cout << setw(7) << j << setw(10) << c[j] << endl;
	}

	//array<int, 5> n{}; // inicializa todo a 0
	array<int, 5> n{ 32, 27, 64, 41, 13 };
	for (size_t j{ 0 }; j < n.size(); ++j) {
		cout << setw(7) << j << setw(10) << n[j] << endl;
	}

	return 0;
}