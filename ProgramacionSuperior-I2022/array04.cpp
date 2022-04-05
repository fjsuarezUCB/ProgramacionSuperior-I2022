#include <iostream>
#include <array>

using namespace std;

int main_arr04() {
	const size_t tamano{ 11 };
	array <unsigned int, tamano> notas{ 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

	for (size_t i{ 0 }; i < notas.size(); ++i) {
		if (i == 10) {
			cout << "  100: ";
		}
		else if (i == 0) {
			cout << "  0-9: ";
		}
		else {
			cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}

		for (unsigned int estrellas{ 0 }; estrellas < notas[i]; ++estrellas) {
			cout << "*";
		}
		cout << endl;
	}

	// 0-9:
	// 10-19: 
	// ...
	// 90-99: **
	// 100: *

	return 0;
}