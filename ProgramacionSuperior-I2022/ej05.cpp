#include <iostream>

using namespace std;

int main_05() {
	//for (unsigned int contador{ 1 }; contador <= 10; contador++) {
	//	cout << "El conteo es " << contador << endl;
	//}
	
	unsigned int total{ 0 };

	for (unsigned int numero{ 2 }; numero <= 20; numero += 2) {
		total += numero;
	}

	cout << "La suma de los enteros pares menores a 20 es " << total << endl;

	return 0;
}