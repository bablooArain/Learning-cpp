#include <iostream>
using namespace std;
int npow(int base, int power) {
	int value = base;
	for (int i = 0; i < (power - 1); i++) {
		value *= base;
	}
	return value;
}
int main() {
	int base, power;
	cout << "Enter respectivly: base | power: ";
	cin >> base >> power;
	cout << npow(base, power) << endl;
	return 0;
}
