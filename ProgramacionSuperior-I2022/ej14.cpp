#include <iostream>

using namespace std;

int cuadrado_14(int x) {
	cout << "el cuadrado del int " << x << " es " << x*x << endl;
	return x * x;
}

double cuadrado_14(double y) {
	cout << "el cuadrado del double " << y << " es " << y*y << endl;
	return y * y;
}

int main_14() {
	cout << cuadrado_14(7) << endl;
	cout << cuadrado_14(7.5) << endl;
	return 0;
}