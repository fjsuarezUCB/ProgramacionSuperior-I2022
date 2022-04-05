#include <iostream>

using namespace std;

void f(const int*);

int main_ptr03() {
	int numero{ 5 };
	int numero2{ 10 };

	int* const ptr{ &numero2 }; // puntero constante a data no constante
	const int* const ptr2{ &numero }; // puntero constante a data constante

	f(&numero);

	cout << "El valor de numero es " << numero << endl;

	cout << "El valor de numero2 es " << numero2 << endl;
	*ptr = 20;
	cout << "El valor de numero2 es " << numero2 << endl;
	//ptr = &numero; // expression must be a modifiable lvalue

	//*ptr2 = 7; // expression must be a modifiable lvalue
	//ptr2 = &numero; // expression must be a modifiable lvalue

	return 0;
}

void f(const int* numeroPtr) { // Puntero no constante apuntando a data constante
	//*numeroPtr = 7; // expression must be a modifiable lvalue
}

