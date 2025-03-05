#include <iostream>
using namespace std;
void getFibonacci(int n) {
	int a = 0;
	int b = 1;
	cout << a << endl;
	cout << b << endl;
	for (int i = 0; i <= n; i++) {
		int sum = a + b;
		if (sum >= n) {
			break;
		}
		cout << sum << endl;
		a = b;
		b = sum;
	}
}
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	getFibonacci(n);
	return 0;
}
