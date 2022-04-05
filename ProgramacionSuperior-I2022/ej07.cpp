#include <iostream>
#include <iomanip>

using namespace std;

int main_07() {
	int total{ 0 };
	unsigned int contador{ 0 };
	unsigned int contadorA{ 0 };
	unsigned int contadorB{ 0 };
	unsigned int contadorC{ 0 };
	unsigned int contadorD{ 0 };
	unsigned int contadorF{ 0 };

	cout << "Ingrese las notas enteras en el rango de 0-100: " << endl
		<< "Presione ctrl+z para indicar que terminó de ingresarlas" << endl;

	int nota;

	while (cin >> nota) {
		total += nota;
		contador++;

		switch (nota / 10) {
		case 9:
		case 10:
			contadorA++;
			break;
		case 8:
			contadorB++;
			break;
		case 7:
			contadorC++;
			break;
		case 6:
			contadorD++;
			break;
		default:
			contadorF++;
			break;
		}

	}



	cout << fixed << setprecision(2);

	cout << endl << "Informe de Notas" << endl;
	if (contador != 0) {
		double promedio = static_cast<double>(nota) / contador;

		cout << "Total de " << contador << " notas ingresadas es "
			<< total << endl << "Promedio de la clase es " << promedio
			<< endl << "Número de estudiantes con A: " << contadorA
			<< endl << "Número de estudiantes con B: " << contadorB
			<< endl << "Número de estudiantes con C: " << contadorC
			<< endl << "Número de estudiantes con D: " << contadorD
			<< endl << "Número de estudiantes con F: " << contadorF;
	}
	else {
		cout << "No se ingresaron notas." << endl;
	}

	return 0;
}