#include <iostream>
#include <array>

using namespace std;

int main_arr06() {
	array<int, 5> elementos{ 1,2,3,4,5 };
	//for (size_t i{ 0 }; i < elementos.size(); ++i) {
	//	cout << elementos[i]
	//}
	
	for (int elemento : elementos) { // python: for elemento in elementos:
		cout << (elemento) << endl;
	}

	for (int& elementoRef : elementos) {
		elementoRef *= 2;
	}

	for (int elemento : elementos) {
		cout << (elemento) << endl;
	}

	return 0;
}