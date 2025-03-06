#include <iostream>
using namespace std;
int main() {
	int arr[5];
	int smallest;
	for (int i = 0; i < 5; i++) {
		cout << "Enter " << i + 1 << "th number: ";
		cin >> arr[i];
	}

	smallest = arr[0];
	for (int i = 0; i < 4; i++) {
		if (smallest > arr[i + 1]) {
			smallest = arr[i + 1];
		}
	}
	cout << "The smallest number is: " << smallest << endl;
	return 0;
}
