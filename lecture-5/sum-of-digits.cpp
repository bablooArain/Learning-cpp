#include <iostream>
using namespace std;

int sumOfdigit(int n) {
	if (n < 10) {
		return n;
	} else if (n < 100) {
		int digit1 = n / 10;
		int digit2 = n % 10;
		return digit1 + digit2;
	} else if (n < 1000) {
		int digit1 = n / 100;
		int digit2 = (n % 100) / 10;
		int digit3 = (n % 100) % 10;
		return digit1 + digit2 + digit3;
	} else if (n < 10000) {
		int digit1 = n / 1000;
		int digit2 = (n % 1000) / 100;
		int digit3 = ((n % 1000) % 100) / 10;
		int digit4 = ((n % 1000) % 100) % 10;
		return digit1 + digit2 + digit3 + digit4;
	}
	return -1;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Sum is : " << sumOfdigit(n) << endl;
	return 0;
}
