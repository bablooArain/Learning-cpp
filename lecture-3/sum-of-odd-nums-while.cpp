#include <iostream>
using namespace std;
int main() {
	int num;
	int sum = 0;
	int i = 1;
	cout << "Enter a number: ";
	cin >> num;
	while (i <= num) {
		sum = sum + i;
		i++;
		if (i % 2 == 0) {
			i++;
		}
	}
	cout << "sum: " << sum << endl;
	return 0;
}
