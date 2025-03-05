#include <iostream>
using namespace std;
void primeShow(int n) {
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			} else if (j == (i - 1)) {
				cout << i << endl;
			}
		}
	}
}
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	primeShow(n);

	return 0;
}
