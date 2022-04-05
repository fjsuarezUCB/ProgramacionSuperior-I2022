#include <iostream>

using namespace std;

int main_06() {
	unsigned int contador{ 1 };

	do {
		cout << "El conteo es " << contador << endl;
		contador++;
	} while (contador <= 10);

	return 0;
}