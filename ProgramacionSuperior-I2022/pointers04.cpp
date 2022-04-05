#include <iostream>

using namespace std;

size_t getSize(double*);

int main_ptr04() {
	double numeros[20]; // 1280 bits = 160 bytes = 20 elementos de 8 bytes (64 bits)

	cout << "El numero de bytes en el array es de " << sizeof(numeros) << endl;

	cout << "El numero de bytes retornado por getSize es " << getSize(numeros) << endl;

	char c;
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double d;
	long double ld;
	int arr[20];
	int* ptr{ arr };

	cout << "sizeof de c = " << sizeof(c)
		<< "\tsizeof de char = " << sizeof(char)
		<< "\nsizeof de s = " << sizeof(s)
		<< "\tsizeof de short = " << sizeof(short)
		<< "\nsizeof de i = " << sizeof(i)
		<< "\tsizeof de int = " << sizeof(int)
		<< "\nsizeof de l = " << sizeof(l)
		<< "\tsizeof de long = " << sizeof(long)
		<< "\nsizeof de ll = " << sizeof(ll)
		<< "\tsizeof de long long = " << sizeof(long long)
		<< "\nsizeof de f = " << sizeof(f)
		<< "\tsizeof de float = " << sizeof(float)
		<< "\nsizeof de d = " << sizeof(d)
		<< "\tsizeof de double = " << sizeof(double)
		<< "\nsizeof de ld = " << sizeof(ld)
		<< "\tsizeof de long double = " << sizeof(long double)
		<< "\nsizeof de arr = " << sizeof(arr)
		<< "\nsizeof de ptr = " << sizeof(ptr);

	return 0;
}

size_t getSize(double* ptr) {
	return sizeof(ptr);
}