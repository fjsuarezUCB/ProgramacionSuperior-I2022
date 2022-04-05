#include <iostream>
#include <cmath>

using namespace std;

int main_08() {
	float c{ 13.0 };
	float d{ 3.0 };
	float f{ 4.0 };
	
	cout << sqrt(c * d * f) << endl;
	cout << ceil(sqrt(c * d * f)) << endl;
	cout << floor(sqrt(c * d * f)) << endl;
	cout << fabs(-18.0) << endl;
	cout << exp(1.0) << endl;
	cout << log(c) << endl;
	cout << log10(c) << endl;

	return 0;
}