#include <iostream>
using namespace std;
int main() {
	int marks[6];
	for (int i = 0; i < 6; i++) {
		cout << "Enter " << i + 1 << "th subject marks: ";
		cin >> marks[i];
	}
	for (int j = 0; j < 6; j++) {
		cout << marks[j] << endl;
	}
	return 0;
}
