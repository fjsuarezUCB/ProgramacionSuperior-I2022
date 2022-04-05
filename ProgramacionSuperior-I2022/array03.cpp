#include <iostream>
#include <array>

using namespace std;

int main_arr03() {
	const size_t tamano{ 4 };

	array<int, tamano> a{ 10, 20, 30, 40 };
	int total{ 0 };

	for (size_t i{ 0 }; i < a.size(); ++i) {
		total += a[i];
	}

	cout << "Suma de los elementos: " << total << endl;

	return 0;
}