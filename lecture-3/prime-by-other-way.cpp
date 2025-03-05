#include <iostream>
using namespace std;
int main() {
	int n;
	bool isPrime = true;
	cout << "Enter number: ";
	cin >> n;
	if (n <= 1) {
		cout << "Not prime\n";
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			isPrime = false;
		}
	}
	if (isPrime) {
		cout << "Prime\n";
	} else {
		cout << "Not Prime\n";
	}
	return 0;
}
