#include <iostream>

using namespace std;

int main_04() {
	int total{ 0 };
	unsigned int contador{ 1 };

	while (contador <= 10) {
		cout << "Ingrese una nota: ";
		int nota;
		cin >> nota;
		if ((nota <= 100) && (nota >= 0)) {
			total = total + nota;
		}
		contador++;
		//++contador;
	}

	int promedio{ total / 10 };

	cout << endl << "Total de las diez notas: " << total << endl;
	cout << "Promedio de la clase: " << promedio << endl;

	//cout << "El límite de INT es " << INT_MAX << endl;
	//int rebalse{ INT_MAX };
	//rebalse += 1;
	//cout << rebalse;
 
	return 0;
}