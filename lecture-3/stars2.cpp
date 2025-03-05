#include <iostream>
#include <ostream>
using namespace std;
int main() {
	int i = 1, j;
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num < 1) {
		cout << "Number is less than 1" << endl;
	} else {
		do {
			j = 0;
			do {
				cout << "*";
				j++;
			} while (j < i);

			i++;
			cout << endl;
		} while (i <= num);
	}
	return 0;
}
