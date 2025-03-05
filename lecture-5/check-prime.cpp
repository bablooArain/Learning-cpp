#include <iostream>
using namespace std;
void primeCheck(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << "Not Prime" << endl;
			break;
		} else if (i == (n - 1)) {
			cout << "Prime" << endl;
		}
	}
}
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	primeCheck(n);
	return 0;
}
