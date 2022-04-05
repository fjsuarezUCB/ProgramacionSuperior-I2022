#include <iostream>

using namespace std;

int main_ptr05() {
	int v[5]{ 3000, 3004, 3008, 3012, 3016 };

	//int* vPtr{ v };
	int* vPtr{ &v[0] };
	int* v2Ptr{ &v[3] };
	void* ptr;

	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	vPtr += 2;
	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	vPtr += 2;
	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	vPtr -= 4;
	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	++vPtr;
	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	vPtr++;
	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	--vPtr;
	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	vPtr--;
	cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	cout << "La direccion a la que apunta vPtr es " << vPtr << endl;
	//vPtr--; // se sale de los límites del array (porque no hay "bound-checking")
	//cout << "El valor al que apunta vPtr es " << *vPtr << endl;
	//cout << "La direccion a la que apunta vPtr es " << vPtr << endl;

	cout << "El valor de vPtr es " << vPtr << endl;
	cout << "El valor de v2Ptr es " << v2Ptr << endl;

	cout << "El valor de x es " << v2Ptr - vPtr << endl;

	cout << "La direccion de ptr es " << &ptr << endl;
	//cout << "El valor al que apunta ptr es " << *ptr << endl; // no se puede dereferenciar un puntero a void

	/*cout << "La direccion a la que apunta vPtr es " << vPtr+2 << endl;
	cout << "El valor al que apunt vPtr+2 es " << *(vPtr + 2) << endl;*/

	return 0;
}