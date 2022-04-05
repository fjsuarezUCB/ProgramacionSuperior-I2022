#include <iostream>

using namespace std;

// n! = n * (n-1) * (n-2) * ... * 1

// n! = n * (n-1)!


int factorial_iter(int n) {
	int fact{ 1 };
	for (int contador{ n }; contador >= 1; --contador) {
		fact *= contador;
	}
	return fact;
}

unsigned long factorial_rec(unsigned long n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial_rec(n - 1);
	}
}

int main_16() {
	cout << "Factorial de 5 es " << factorial_iter(5) << endl;

	cout << "Factorial recursivo de 5 es " << factorial_rec(5) << endl;
	return 0;
}