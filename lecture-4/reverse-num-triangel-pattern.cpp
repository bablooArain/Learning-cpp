#include <iostream>
using namespace std;
int main() {
	int n;
	int val = 1;
	cout << "Enter a number: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = val; j > 0; j--) {
			cout << j << " ";
		}
		cout << endl;
		val++;
	}
	return 0;
}
