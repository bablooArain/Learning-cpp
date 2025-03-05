#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void getPrimeFactors(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			if (isPrime(i)) {
				cout << i << endl;
			}
		}
	}
}
int main() {
	getPrimeFactors(50);
	return 0;
}
