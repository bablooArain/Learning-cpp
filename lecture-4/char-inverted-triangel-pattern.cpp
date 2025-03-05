#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	char val = 'A';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++) {
			cout << val << " ";
		}
		cout << endl;
		val++;
	}
	return 0;
}
