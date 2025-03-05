#include <iostream>
using namespace std;
int main() {
	int num;
	do {
		cout << "Enter a number: ";
		cin >> num;
	} while (num < 1);

	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
