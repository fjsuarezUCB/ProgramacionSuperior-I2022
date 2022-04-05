#include <iostream>
#include "maximo.h"

using namespace std;

int main_15() {
	cout << "Ingrese 3 valores enteros: ";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;
	cout << "El valor entero maximo es " << maximo(int1, int2, int3) << endl;

	cout << "Ingrese 3 valores double: ";
	double double1, double2, double3;
	cin >> double1 >> double2 >> double3;
	cout << "El valor double maximo es " << maximo(double1, double2, double3) << endl;

	cout << "Ingrese 3 caracteres: ";
	char char1, char2, char3;
	cin >> char1 >> char2 >> char3;
	cout << "El valor entero maximo es " << maximo(char1, char2, char3) << endl;

	return 0;
}