#include <iostream>

using namespace std;

void usarLocal();
void usarStaticLocal();
void usarGlobal();

int x{ 1 }; // variable global

int main_10() {

	cout << "x global es " << x << endl;

	int x{ 5 };

	cout << "x local en main es " << x << endl;

	{ // nuevo scope
		int x{ 7 }; // oculta ambas x en el scope exterior y global

		cout << "x en el scope interior es " << x << endl;
	}

	cout << "x local en main es " << x << endl;

	usarLocal();
	usarStaticLocal();
	usarGlobal();
	usarLocal();
	usarStaticLocal();
	usarGlobal();

	return 0;
}

void usarLocal() {
	int x{ 25 };
	cout << "x local es " << x << " al iniciar usarLocal" << endl;
	++x;
	cout << "x local es " << x << " al salir usarLocal" << endl;
}

void usarStaticLocal() {
	static int x{ 50 };

	cout << "static x local es " << x << " al iniciar usarStaticLocal" << endl;
	++x;
	cout << "static x local es " << x << " al salir usarStaticLocal" << endl;

}

void usarGlobal() {
	cout << "x global es " << x << " al iniciar usarGlobal" << endl;
	x *= 10;
	cout << "x global es " << x << " al salir usarGlobal" << endl;
}