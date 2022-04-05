// Fibonacci Series
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

#include <iostream>

using namespace std;

int fibonacci(int n);

// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)

int main_17() {
	//cout << fibonacci(0) << endl; // 0
	//cout << fibonacci(1) << endl; // 1
	//cout << fibonacci(5) << endl; // 5
	cout << fibonacci(8) << endl; // 21
	//for (int i{ 0 }; i < 10; i++) {
	//	cout << fibonacci(i) << endl;
	//}

	return 0;
}

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2); // se puede mejorar con memoizacion
	}

}