#include <iostream>

using namespace std;

int cuadrado_11(int);

int main_11() {

	int a{ 10 };

	cout << a << " al cuadrado es " << cuadrado_11(a) << endl;
	return 0;
	
}

int cuadrado_11(int x) {
	return x * x;
}