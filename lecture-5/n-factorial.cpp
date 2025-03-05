#include <iostream>
using namespace std;
double fact(double n) {
	double fact = 1;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}
int main() {
	cout << "factorial is: " << fact(5) << endl;
	return 0;
}
