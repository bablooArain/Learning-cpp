#include <iostream>
using namespace std;
int main() {
	int n;
	char val = 'A';
	cout << "Enter a number: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (char j = val; j >= 65; j--) {
			cout << j << " ";
		}
		cout << endl;
		val++;
	}
	return 0;
}
